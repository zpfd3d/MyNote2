Git��Ŀǰ���������Ƚ��ķֲ�ʽ�汾����ϵͳ��û��֮һ����Linus ��Դ
clone init;
add mv reset rm;Add file contents to the index ����
reset:      Reset current HEAD to the specified state
rm: Remove files from the working tree and from the index
 working tree,index ;
  grep (global search regular expression(RE) and print out the line
  �ֿ� --global������ȫ�ֲ�����Ҳ������Щ��������̨���Ե�����Git�ֿ��¶����á�
  git config --global alias.st status
  git config --global alias.co checkout
$ git config --global alias.ci commit
$ git config --global alias.br branch
git config --global alias.last 'log -1'  
git config --global alias.lg "log --color --graph --pretty=format:'%Cred%h%Creset -%C(yellow)%d%Creset %s %Cgreen(%cr) %C(bold blue)<%an>%Creset' --abbrev-commit"
Git bash here ; vim  ~/.gitconfig
a379039233z05  git push https://github.com/a379039233/MyNote2 Զ�˲ֿ�  git push origin master
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
��ı��زֿ��� git ά�������á�������ɡ���һ������� ����Ŀ¼��������ʵ���ļ����ڶ����� �ݴ�����Index�������������������ʱ������ĸĶ�������� HEAD����ָ�������һ���ύ�Ľ����
working dir----(add)---index---(commit)---HEAD
(1)����״̬��Change, Staged, Commited��
Change����˵�ˣ���Ķ���һ����Ȼ��û�е����κ�git�����������״̬��
֮����Ҫ��Stage(����)����ļ��Ķ��ˣ�Ȼ�����Staged״̬��
�����Commit�������µİ汾commit�š�
(2) git checkout 1.c ;�ָ�1.c    git checkout . �ָ������ļ� !!!!û��add        git  diff 1.c
(2)����Staged״̬(�Ѿ�Staging����û��Commiting)
��reset��checkout
git reset HEAD ; git checkout . ;;;;


1. ����ʽ�汾����ϵͳ���汾���Ǽ��д��������������ģ����ɻ��ʱ���õĶ����Լ��ĵ��ԣ�����Ҫ�ȴ����������ȡ�����µİ汾��Ȼ��ʼ�ɻ������ˣ��ٰ��Լ��Ļ����͸������������
�����������ܹ���
���ȣ��ֲ�ʽ�汾����ϵͳ����û�С��������������ÿ���˵ĵ����϶���һ�������İ汾�⣬�������㹤����ʱ�򣬾Ͳ���Ҫ�����ˣ���Ϊ�汾��������Լ��ĵ����ϡ�
---git add -A: [<path>]��ʾ��<path>������tracked�ļ��б��޸Ĺ�����ɾ���ļ�������untracted���ļ���Ϣ��ӵ������⡣
ʡ��<path>��ʾ.,����ǰĿ¼��
---git add -u [<path>]: ��<path>������tracked�ļ��б��޸Ĺ�����ɾ���ļ�����Ϣ��ӵ������⡣�����ᴦ��untracted���ļ���
git rm 1.txt
2. �Ƿ�װ�ˣ�cmd git or git --version
sudo apt-get install git
./config��make��sudo make install
3. ��ѯ��
git config user.name 
git config user.name
��ӻ��޸ģ�
git config --global user.name "hundun"
git config --global user.email "379039233@qq.com"
4. git init�������ֿ⣩;git add ...;git commit -m "commit"
.git��Ŀ¼ ���еİ汾����ϵͳ����ʵֻ�ܸ����ı��ļ��ĸĶ������ҵ��ǣ�Microsoft��Word��ʽ�Ƕ����Ƹ�ʽ
ǧ��Ҫʹ��Windows�Դ��ļ��±��༭�κ��ı��ļ���ԭ����Microsoft�������±����Ŷ�ʹ����һ���ǳ����ǵ���Ϊ������UTF-8������ļ�������������������ÿ���ļ���ͷ�����0xefbbbf��ʮ�����ƣ����ַ�����������ܶ಻��˼������⣬���磬��ҳ��һ�п��ܻ���ʾһ����?����������ȷ�ĳ���һ����ͱ��﷨���󣬵ȵȣ������ɼ��±���������Ϊ�����ġ�

git diff 1��c
5.  git log //--pretty=oneline
��Git�У���HEAD��ʾ��ǰ�汾
��һ���汾����HEAD^������һ���汾����HEAD^^����Ȼ����100���汾д100��^�Ƚ�������������������д��HEAD~100��
���˵���һ���汾�������� git reset --hard commit_id
git reset --hard HEAD^
git reset --hard 3628164  //�汾��û��Ҫдȫ��ǰ��λ�Ϳ����ˣ�Git���Զ�ȥ�ҡ�
git reflog //��¼���ÿһ������  
6. ��������Working Directory��
 �汾�⣨Repository��
��Ϊstage�����߽�index�����ݴ���
����GitΪ�����Զ������ĵ�һ����֧master���Լ�ָ��master��һ��ָ���HEAD��
��һ������git add���ļ���ӽ�ȥ��ʵ���Ͼ��ǰ��ļ��޸���ӵ��ݴ�����
�ڶ�������git commit�ύ���ģ�ʵ���Ͼ��ǰ��ݴ��������������ύ����ǰ��֧��

!!! git checkout  �� file ���Զ������������޸ģ�
ÿ���޸ģ������add���ݴ������ǾͲ�����뵽commit�С�
7. ����1����������˹�����ĳ���ļ������ݣ���ֱ�Ӷ������������޸�ʱ��������git checkout -- file��
����2�����㲻�������˹�����ĳ���ļ������ݣ�����ӵ����ݴ���ʱ���붪���޸ģ�����������һ��������git reset HEAD file���ͻص��˳���1���ڶ���������1������
ɾ���ļ�:
git rm test.txt
git commit -m "remove test.txt"
8. git clone ....git
��֧��
 git checkout -b dev ;create and switch: git branch dev and git checkout dev
 git branch ;�鿴��ǰ��֧
git merge dev ;�ϲ���֧
git branch -d dev ��ɾ����֧
Git��������ʹ�÷�֧��
�鿴��֧��git branch
������֧��git branch <name>
�л���֧��git checkout <name>
����+�л���֧��git checkout -b <name>
�ϲ�ĳ��֧����ǰ��֧��git merge <name>
ɾ����֧��git branch -d <name>
9. 
http://www.liaoxuefeng.com/wiki/0013739516305929606dd18361248578c67b8067c8c017b000/001375840202368c74be33fbd884e71b570f2cc3c0d1dcf000

