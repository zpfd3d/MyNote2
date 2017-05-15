Git是目前世界上最先进的分布式版本控制系统（没有之一）。Linus 开源
clone init;
add mv reset rm;Add file contents to the index 索引
reset:      Reset current HEAD to the specified state
rm: Remove files from the working tree and from the index
 working tree,index ;
  grep (global search regular expression(RE) and print out the line
  仓库 --global参数是全局参数，也就是这些命令在这台电脑的所有Git仓库下都有用。
  git config --global alias.st status
  git config --global alias.co checkout
$ git config --global alias.ci commit
$ git config --global alias.br branch
git config --global alias.last 'log -1'  
git config --global alias.lg "log --color --graph --pretty=format:'%Cred%h%Creset -%C(yellow)%d%Creset %s %Cgreen(%cr) %C(bold blue)<%an>%Creset' --abbrev-commit"
Git bash here ; vim  ~/.gitconfig
a379039233z05  git push https://github.com/a379039233/MyNote2 远端仓库  git push origin master
git remote add origin <server>
branch:
git checkout -b br2 //new and switch
git checkout master
git branch -d br2
git push origin <branch>   br2-----------
git merge br2

[alias]
    st = status
    ci = commit
    co = checkout
    br = branch
    unstage = reset HEAD --
    last = log -1 HEAD
git clone /path/to/repository 	 !!!!!! git add *!!!
git clone ../Note2
你的本地仓库由 git 维护的三棵“树”组成。第一个是你的 工作目录，它持有实际文件；第二个是 暂存区（Index），它像个缓存区域，临时保存你的改动；最后是 HEAD，它指向你最后一次提交的结果。
working dir----(add)---index---(commit)---HEAD
(1)三种状态：Change, Staged, Commited。
Change不用说了，你改动了一个，然后没有调用任何git命令，就是这种状态。
之后，需要先Stage(声明)这个文件改动了，然后进入Staged状态。
最后，再Commit，生成新的版本commit号。
(2) git checkout 1.c ;恢复1.c    git checkout . 恢复所有文件 !!!!没有add        git  diff 1.c
(2)处于Staged状态(已经Staging，还没有Commiting)
先reset再checkout
git reset HEAD ; git checkout . ;;;;


1. 集中式版本控制系统，版本库是集中存放在中央服务器的，而干活的时候，用的都是自己的电脑，所以要先从中央服务器取得最新的版本，然后开始干活，干完活了，再把自己的活推送给中央服务器。
必须联网才能工作
首先，分布式版本控制系统根本没有“中央服务器”，每个人的电脑上都是一个完整的版本库，这样，你工作的时候，就不需要联网了，因为版本库就在你自己的电脑上。
---git add -A: [<path>]表示把<path>中所有tracked文件中被修改过或已删除文件和所有untracted的文件信息添加到索引库。
省略<path>表示.,即当前目录。
---git add -u [<path>]: 把<path>中所有tracked文件中被修改过或已删除文件的信息添加到索引库。它不会处理untracted的文件。
git rm 1.txt
2. 是否安装了：cmd git or git --version
sudo apt-get install git
./config，make，sudo make install
3. 查询：
git config user.name 
git config user.name
添加或修改：
git config --global user.name "hundun"
git config --global user.email "379039233@qq.com"
4. git init（创建仓库）;git add ...;git commit -m "commit"
.git的目录 所有的版本控制系统，其实只能跟踪文本文件的改动。不幸的是，Microsoft的Word格式是二进制格式
千万不要使用Windows自带的记事本编辑任何文本文件。原因是Microsoft开发记事本的团队使用了一个非常弱智的行为来保存UTF-8编码的文件，他们自作聪明地在每个文件开头添加了0xefbbbf（十六进制）的字符，你会遇到很多不可思议的问题，比如，网页第一行可能会显示一个“?”，明明正确的程序一编译就报语法错误，等等，都是由记事本的弱智行为带来的。

git diff 1。c
5.  git log //--pretty=oneline
在Git中，用HEAD表示当前版本
上一个版本就是HEAD^，上上一个版本就是HEAD^^，当然往上100个版本写100个^比较容易数不过来，所以写成HEAD~100。
回退到上一个版本：！！！ git reset --hard commit_id
git reset --hard HEAD^
git reset --hard 3628164  //版本号没必要写全，前几位就可以了，Git会自动去找。
git reflog //记录你的每一次命令  
6. 工作区（Working Directory）
 版本库（Repository）
称为stage（或者叫index）的暂存区
还有Git为我们自动创建的第一个分支master，以及指向master的一个指针叫HEAD。
第一步是用git add把文件添加进去，实际上就是把文件修改添加到暂存区；
第二步是用git commit提交更改，实际上就是把暂存区的所有内容提交到当前分支。

!!! git checkout  — file 可以丢弃工作区的修改，
每次修改，如果不add到暂存区，那就不会加入到commit中。
7. 场景1：当你改乱了工作区某个文件的内容，想直接丢弃工作区的修改时，用命令git checkout -- file。
场景2：当你不但改乱了工作区某个文件的内容，还添加到了暂存区时，想丢弃修改，分两步，第一步用命令git reset HEAD file，就回到了场景1，第二步按场景1操作。
删除文件:
git rm test.txt
git commit -m "remove test.txt"
8. git clone ....git
分支：
 git checkout -b dev ;create and switch: git branch dev and git checkout dev
 git branch ;查看当前分支
git merge dev ;合并分支
git branch -d dev ；删除分支
Git鼓励大量使用分支：
查看分支：git branch
创建分支：git branch <name>
切换分支：git checkout <name>
创建+切换分支：git checkout -b <name>
合并某分支到当前分支：git merge <name>
删除分支：git branch -d <name>
9. 
http://www.liaoxuefeng.com/wiki/0013739516305929606dd18361248578c67b8067c8c017b000/001375840202368c74be33fbd884e71b570f2cc3c0d1dcf000

