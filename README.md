# Origin from David Moors in 2022
## Purpose for TCC Web Dev Syndicate Club website.# GitTeam1
## For access with tokens, you need to creae your token. If you don't have one, or access denies, go to "Credential Manager" and remove the Github credential from window's creadials. Then sign-in by token the one you creat from the URL. 
https://github.com/settings/tokens

# To add prod for fetch and limit push to prod
If you named the remote connection, you need to use "The Name" instead of URL for change remote attribute. 
$ git remote add prod https://github.com/GitLeaning/GitTeam1.git
$ git remote set-url --push prod no_push
$ git remote -v
origin  https://github.com/beerneko/GitTeam1.git (fetch)
origin  https://github.com/beerneko/GitTeam1.git (push)
prod    https://github.com/GitLeaning/GitTeam1.git (fetch)
prod    no_push (push)
