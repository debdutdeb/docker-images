> Make sure docker and docker-compose both are installed on the system.

## 1. Create a project directory

```
mkdir RocketChatBuild
cd !$
```

Clone the RocketChat repository here.

```
git clone https://github.com/rocketchat/rocket.chat
```

Your directory structure should look like this:-

```
debdut@nightwing:/tmp$ tree -L 1 RocketChatBuild/
RocketChatBuild/
└── rocket.chat

1 directory, 0 files
```

## 2. Download the compose file and helper script

Copy and paste the following snippet on your terminal to download the compose file and the helper script.

```shell
for file in docker-compose.yml build_and_run; do
    wget https://raw.githubusercontent.com/debdutdeb/docker-images/main/rocketchat-build/$file
done
```

Make the script executable.

```
chmod +x build_and_run
```

## 3. Build and run

Enter `./build_and_run rocket.chat` and wait. Your rocket.chat development server should be up and running on port 3000.

![Rocket.Chat Running](running.png)

The server should automatically reload whenever you make any changes to the rocket.chat codebase.
