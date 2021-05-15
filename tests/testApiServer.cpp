#include "testApiServer.h"

CPPUNIT_TEST_SUITE_REGISTRATION(TestApiServer);

#define AUTH_TOKEN "auth_token"

TestApiServer::TestApiServer () : CppUnit::TestCase("api_server.h tests") {
    config = {
        "username",
        "password",
        "room name",
        5,
        "sasdsad",
        "client id",
        "replays",
        "cert",
        "certkey",
        AUTH_TOKEN,
        "https://0.0.0.0:8000"
    };
    initBot(&b, config);
}

TestApiServer::~TestApiServer() {
    freeBot(&b);
    freeServer(&server);
}


void TestApiServer::testInitAndFree() {
    initServer(&server, &b, config);
    CPPUNIT_ASSERT(server.running == 0);
    CPPUNIT_ASSERT(server.triceBot == &b);
    CPPUNIT_ASSERT(server.opts.ca == NULL);
    CPPUNIT_ASSERT(mg_url_is_ssl(config.bindAddr)); // Assert that the config URL is https
    CPPUNIT_ASSERT(server.opts.cert == config.cert);
    CPPUNIT_ASSERT(server.opts.certkey == config.certkey);
    
    char replayFolerWildcard[BUFFER_LENGTH];
    snprintf(replayFolerWildcard,
             BUFFER_LENGTH,
             "/%s/**/*", config.replayFolder);
    CPPUNIT_ASSERT(strncmp(server.replayFolerWildcard, replayFolerWildcard, BUFFER_LENGTH) == 0);
    
    freeServer(&server);
    
    // re-init server for the rest of the tests
    initServer(&server, &b, config);
}

void TestApiServer::testCreateGame() {
    
}

void TestApiServer::testDownloadReplay() {
    
}

void TestApiServer::testCheckApiKey() {

}

void TestApiServer::testHelpPageEndPoint() {
    
}

void TestApiServer::testVersionEndPoint() {
    
}