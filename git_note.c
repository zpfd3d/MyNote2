Git��Ŀǰ���������Ƚ��ķֲ�ʽ�汾����ϵͳ��û��֮һ����Linus
1. ����ʽ�汾����ϵͳ���汾���Ǽ��д��������������ģ����ɻ��ʱ���õĶ����Լ��ĵ��ԣ�����Ҫ�ȴ����������ȡ�����µİ汾��Ȼ��ʼ�ɻ������ˣ��ٰ��Լ��Ļ����͸������������
�����������ܹ���
���ȣ��ֲ�ʽ�汾����ϵͳ����û�С��������������ÿ���˵ĵ����϶���һ�������İ汾�⣬�������㹤����ʱ�򣬾Ͳ���Ҫ�����ˣ���Ϊ�汾��������Լ��ĵ����ϡ�
---git add -A: [<path>]��ʾ��<path>������tracked�ļ��б��޸Ĺ�����ɾ���ļ�������untracted���ļ���Ϣ��ӵ������⡣
ʡ��<path>��ʾ.,����ǰĿ¼��
---git add -u [<path>]: ��<path>������tracked�ļ��б��޸Ĺ�����ɾ���ļ�����Ϣ��ӵ������⡣�����ᴦ��untracted���ļ���

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

