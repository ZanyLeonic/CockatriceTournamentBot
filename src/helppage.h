#ifndef HELP_STR
#define HELP_STR "<!DOCTYPE html>\n<html>\n<head>\n<meta charset=\"UTF-8\">\n<title>Marchesa Cockatrice Bot API Documentation</title>\n</head>\n\n<body>\n<h1>API Documentation</h1>\n\n<p>This API documentation should be accurate if it is not please visit the\n<a href=\"/github\">github repo</a> and make an issue.</p>\n\n<h2 name=\"index\">Index:</h2>\n<!--Index Auto-generated by the python script-->\n<p><a href=\"#index\">index</a></p>\n<p><a href=\"#top\">top</a></p>\n<p><a href=\"#help\">help</a></p>\n<p><a href=\"#version\">version</a></p>\n<p><a href=\"#check auth key\">check auth key</a></p>\n<p><a href=\"#invalid auth token\">invalid auth token</a></p>\n<p><a href=\"#create game\">create game</a></p>\n<p><a href=\"#replays\">replays</a></p>\n<p><a href=\"#bottom\">bottom</a></p>\n\n<a name=\"top\"/>\n<h3 name=\"help\">../api/</h3>\nreturns this page :)\n\n<h3 name=\"version\">../api/version</h3>\nrequest body should be null\nreturns the server version i.e:\n<blockquote>\nv1.0\n</blockquote>\n\n<h3 name=\"check auth key\">../api/checkauthkey</h3>\nrequest body is auth token i.e:\n\n<blockquote>\nsampleauthtoken\n</blockquote>\n\nreturns 1 if the auth token is valid, 0 if not. i.e:\n<blockquote>\nvalid=1\n</blockquote>\nif it is valid or\n<blockquote>\nvalid=0\n</blockquote>\nif it is invalid\n\n<h2 name=\"invalid auth token\">Invalid Auth Tokens</h2>\n<p>\nAny of the below requests that have an invalid auth token will give an error with \nresponse code 401 and body of\n</p>\n\n<blockquote>\ninvalid auth token\n</blockquote>\n\n<h3 name=\"create game\">../api/creategame</h3>\nrequest body follows this format (case-sensitive):\n<br>\n<blockquote>\nauthtoken=token\n<br>\ngamename=name\n<br>\npassword=password\n<br>\nplayerCount=2/3/...\n<br>\nspectatctorsAllowed=1/0\n<br>\nspectatorsNeedPassword=1/0\n<br>\nspectatorsCanChat=1/0\n<br>\nspectatorsCanSeeHands=1/0\n<br>\nonlyRegistered=1/0\n</blockquote>\n\n<b>\nThe slot for the bot is automatically made so player count should be the amount \nof human players\n</b>\n\n<br>\n\nreturns the game id if the game is made; or error if it is not made. i.e:\n<blockquote>\ngameid=123456\n</blockquote>\nif it is made or\n<blockquote>\nerror\n</blockquote>\nif it is not made\n\n<h3 name=\"replays\">../replay/replay%d.cor</h3>\n%d is the game ID as returned by creategame. The replay may be overwritten after \nenough time. Returns the replay file.\n\n<a name=\"bottom\"/>\n\n<h3 name =\"version\"><a href=\"/api/version\">Version info</a> | <a href=\"/github\">\nGithub repo</a> | Marchesa Bot by Danny Piper (djpiper28)</h3>\n\n</p>\n</body>\n</html>\n"
#endif
