#include <iostream>
#include <fstream>
#include <string>
using namespace std;



int main()
{
	cout<<"Loading functions...";
	void welcome(register int max_size);
	void how_to_use();
	void read_me();
	cout<<"...Finished"<<endl;


	cout<<"Loading data structures...";
	struct list
	{
		int id;
		//string name;
		char name[30];
		string in;
		string url;
	};
	typedef struct list LIST;
	cout<<"...Finished!"<<endl;


	cout<<"Loading data...";
	LIST all_list[]=
	{
		{100001,"AIR(air)","永久网盘完整 OST 下载地址（248.15 MB）","http://www.163pan.com/files/80b001k0z.html"},
		{100002,"Air(air)","推荐版本下载（84.1 MB）","http://www.163pan.com/files/00m000w04.html"},
		{100003,"Angel beats!","Girls Dead Monster - Crow Song 专辑（34.3 MB）","http://www.163pan.com/files/00500100x.html"},
		{100004,"Angel beats!","Girls Dead Monster - Thousand Enemies 专辑（41.9 MB）","http://www.163pan.com/files/006001006.html"},
		{100005,"Angel beats!","2张原声大碟（207 MB）","http://www.163pan.com/files/00f00100r.html"},
		{100006,"Angel beats!","原声大碟推荐版本下载（84.1 MB）","http://www.163pan.com/files/00g001005.html"},
		{100007,"CLANNAD(clannad)","永久网盘完整 OST 下载地址（合集：1.10 GB，含3张原声大碟、一张唱集、一张钢琴集、OP、ED）","http://www.163pan.com/files/80c001k0f.html"},
		{100008,"CLANNAD(clannad)","分包：CLANNAD 第一季 主题曲（78.47 MB）","http://www.163pan.com/files/00b000w0c.html"},
		{100009,"CLANNAD(clannad)","分包：~After Story~ 主题曲（APE）（157.43 MB）","http://www.163pan.com/files/00b000w0a.html"},
		{100010,"CLANNAD(clannad)","分包：Riya 唱集（78.87 MB）","http://www.163pan.com/files/00b000w09.html"},
		{100011,"CLANNAD(clannad)","分包：钢琴连奏官方发布大碟（129.27 MB）","http://www.163pan.com/files/00b000w07.html"},
		{100012,"CLANNAD(clannad)","分包：原声大碟1（171.31 MB）","http://www.163pan.com/files/00a000w0n.html"},
		{100013,"CLANNAD(clannad)","分包：原声大碟2（150.56 MB）","http://www.163pan.com/files/00a000w0u.html"},
		{100014,"CLANNAD(clannad)","分包：原声大碟3（157.99 MB）","http://www.163pan.com/files/00a000w0x.html"},
		{100015,"CLANNAD(clannad)","分包：MABINOGI 原声大碟（61.21 MB）","http://www.163pan.com/files/00a000w0k.html"},
		{100016,"CLANNAD(clannad)","分包：剧场版 OST（东映动画）（115 MB）","http://www.163pan.com/files/00f00100t.html"},
		{100017,"CLANNAD(clannad)","永久网盘 原画集 下载地址（154.79 MB）","http://www.163pan.com/files/80c001k00.html"},
		{100018,"ef-a tale of melodies","永久网盘完整 OST 下载地址（122.58 MB）","http://www.163pan.com/files/80c001k0o.html"},
		{100019,"ef-a tale of melodies","推荐版本下载（40.18 MB）","http://www.163pan.com/files/00m000w05.html"},
		{100020,"ef-a tale of melodies","补资源：主题曲03 - A moon filled sky.mp3（6.45 MB）","http://www.163pan.com/files/00g001000.html"},
		{100021,"ef-a tale of memories","永久网盘完整 OST 下载地址（166.88 MB）","http://www.163pan.com/files/80d001k01.html"},
		{100022,"ef-a tale of memories","推荐版本下载（102.0 MB）","http://www.163pan.com/files/00m000w09.html"},
		{100023,"H2O ~Footprints in the sand~","永久网盘完整 OST 下载地址（197.02 MB）","http://www.163pan.com/files/80d001k04.html"},
		{100024,"H2O ~Footprints in the sand~","推荐版本下载（39.38 MB）","http://www.163pan.com/files/00m000w0a.html"},
		{100025,"Kanon(kanon)(京都动画)","永久网盘下载地址（177 MB）","http://www.163pan.com/files/00g001003.html"},
		{100026,"SOLA(sola)","永久网盘完整 OST 下载地址（170.16 MB）","http://www.163pan.com/files/80l001l0m.html"},
		{100027,"SOLA(sola)","推荐版本下载（58.28 MB）","http://www.163pan.com/files/00m000w0b.html"},
		{100028,"空之境界(Seventh Heaven)","永久网盘下载地址（61.35 MB）","http://www.163pan.com/files/809001l00.html"},
		{100029,"秒速五厘米","永久网盘下载地址（64.7 MB）","http://www.163pan.com/files/000000x01.html"},
		{100030,"神隐之狼","永久网盘完整 OST 下载地址（108.62 MB）","http://www.163pan.com/files/80d001k07.html"},
		{100031,"神隐之狼","推荐版本下载（59.79 MB）","http://www.163pan.com/files/00m000w0c.html"},
		{100032,"仰望半月的天空","OP＆ED收录(44.72MB)","http://www.163pan.com/files/00z001000.html"},
		{100033,"凉宫春日的忧郁2009","[ED.Single.-.止マレ!]单曲(44.68MB)","http://www.163pan.com/files/00z001002.html"},
		{100034,"凉宫春日的忧郁","版权原画集[京都アニメーション.](43.73MB)","http://www.163pan.com/files/002001108.html"},
		{100035,"凉宫春日的忧郁","[ED.Single.-.Hare.Hare.Yukai]单曲(39.03MB)","http://www.163pan.com/files/002001109.html"},
		{100036,"天空之城","印象集专辑(91.98MB)","http://www.163pan.com/files/00g00110q.html"},
		{100037,"凉宫春日的忧郁2009","[OP.Single.-.Super.Driver][平野綾](49.69MB)","http://u.115.com/file/f9abec4dd6"},
		{100038,"凉宫春日的忧郁","[ED.Single.-.Hare.Hare.Yukai]单曲(38.13MB)","http://u.115.com/file/f94ccd99eb"},
		{100039,"悬崖上的金鱼公主","印象集专辑(76.87MB)","http://u.115.com/file/f9ad656850"},
		{100040,"凉宫春日的忧郁","主题曲[OP.Single-冒険でしょでしょ]专辑(TTA)(129.28MB)","http://u.115.com/file/f91b3bbfb0"},
		{100041,"仰望半月的夜空","完整版原声集(质量很高，好听)(128.46MB)","http://u.115.com/file/f9dc5512d9"},
		{100042,"凉宫春日的消失(剧场)","原声集(APE)(319.94MB)","http://u.115.com/file/f9ce1ca09a"},
		{100043,"龙猫","电子乐专辑(96.14MB)","http://u.115.com/file/f97651a84b"},
		{100044,"龙猫","音乐集专辑(86.89MB)","http://u.115.com/file/f92ed2cbd6"},
		{100045,"龙猫","印象集专辑(87.61MB)","http://u.115.com/file/f95aeccb94"},
		{100046,"龙猫","电影原声专辑(103.61MB)","http://u.115.com/file/f9b4eaea6f"},
		{100047,"龙猫","交响乐专辑(111.55MB)","http://u.115.com/file/f93e65d669"},
		{100048,"天空之城","电子乐专辑(87.47MB)","http://u.115.com/file/f9651074f6"},
		{100049,"天空之城","交响乐专辑(85.83MB)","http://u.115.com/file/f974cab830"},
		{100050,"天空之城","电影原声专辑(90.13MB)","http://u.115.com/file/f9c3325558"},
		{100051,"蜡笔小新","原声大碟.-.[クレヨンしんちゃん.TV映画主題歌集だゾ.(Disc.02)](94.12MB)","http://u.115.com/file/f9d9c8796d"},
		{100052,"蜡笔小新","原声大碟.-.[クレヨンしんちゃん.TV映画主題歌集だゾ.(Disc.01)](98.49MB)","http://u.115.com/file/f9231ec06c"},
		{100053,"心之彼端ToHeart2","原声大碟OST_专辑(APE)(285.79MB)","http://u.115.com/file/f9717c099c"},
		{100054,"心之彼端ToHeart2","原声大碟OST_专辑(MP3)(102.15MB)","http://u.115.com/file/f923749e48"},
		{100055,"ToHeart2","游戏原声音乐(APE)(871.53MB)","http://v4.u.115.com/file/f928881e46"},
	};
	cout<<"...Finished!"<<endl;


	cout<<"Loading members...";
	const char txt[5]=".txt";
	const char esc[4]="esc";
	const char help[5]="help";
	const char readme[7]="readme";
	const char all[4]="all";
	const char back[5]="back";
	const char output[7]="output";
	const char go[5]="open";
	const char search[7]="search";
	const char number[7]="number";
	const char title[6]="title";
	int list_temp[]={0};

	char sign1[70]="";
	char sign2[70]="";
	int aa=0;
	int ab=0;
	register int i=0;
	register int cd=0;
	const int A92=92;
	//const int max_size=100054;
	const int max_size=sizeof(all_list)/100 +100000;
	cout<<"...Finished!"<<endl;


	welcome(max_size);
	cout<<"输入help可以获得操作指南！"<<endl;
	cout<<"输入readme可以查看版本及编写说明。"<<endl;
	while(1)
	{
		cout<<"\n宏指令：";
		cin>>sign1;
		if (!strcmp(sign1,esc))
		{
			return 0;
		}
		else if(!strcmp(sign1,help))
		{
			how_to_use();
		}
		else if(!strcmp(sign1,readme))
		{
			read_me();
		}
		else if(!strcmp(sign1,output))
		{
			while(1)
			{
				cout<<"二级指令：";
				cin>>sign1;
				if (!strcmp(sign1,esc))
				{
					return 0;
				}
				else if(!strcmp(sign1,help))
				{
					how_to_use();
				}
				else if(!strcmp(sign1,all))
				{
					while(1)
					{
						cd=0;
						cout<<"请输入要保存到的文件名：";
						cin>>sign1;
						ab=strlen(sign1);
						for(i=0;i<ab;i++)
						{
							if(sign1[i]!='/'&&sign1[i]!=(char)A92&&sign1[i]!=':'&&sign1[i]!='*'&&sign1[i]!='?'&&sign1[i]!='"'&&sign1[i]!='<'&&sign1[i]!='>'&&sign1[i]!='|'&&sign1[i]!=' ')
							{
								cd+=1;
							}
							else
							{}
						}
						if(cd==ab)
						{
							break;
						}
						else
						{
							cout<<"输入失败！文件名中不能含有 / "<<(char)A92<<" : * ? "<<'"'<<" < > | 空格"<<endl;
						}
					}
					if(sign1[ab-1]=='t'&&sign1[ab-4]=='.')
					{}
					else
					{
						strcat_s(sign1,txt);
					}
					cout<<"正在输出到"<<sign1<<"...";
					fstream file;
					file.open(sign1,ios_base::out|ios_base::trunc);
					for(i=100001;i<=max_size;i++)
					{
						file<<all_list[i-100001].id<<"  "<<all_list[i-100001].name<<"  "<<all_list[i-100001].in;
						file<<"\n地址："<<all_list[i-100001].url<<"\n\n";
					}
					file.close();
					cout<<"...Finished!"<<endl;
					break;
				}
				else if(!strcmp(sign1,number))
				{
					while(1)
					{
						while(1)
						{
							cd=0;
							cout<<"请输入要保存到的文件名：";
							cin>>sign1;
							ab=strlen(sign1);
							for(i=0;i<ab;i++)
							{
								if(sign1[i]!='/'&&sign1[i]!=(char)A92&&sign1[i]!=':'&&sign1[i]!='*'&&sign1[i]!='?'&&sign1[i]!='"'&&sign1[i]!='<'&&sign1[i]!='>'&&sign1[i]!='|'&&sign1[i]!=' ')
								{
									cd+=1;
								}
								else
								{}
							}
							if(cd==ab)
							{
								break;
							}
							else
							{
								cout<<"输入失败！文件名中不能含有 / "<<(char)A92<<" : * ? "<<'"'<<" < > | 空格"<<endl;
							}
						}
						if(sign1[ab-1]=='t'&&sign1[ab-4]=='.')
						{}
						else
						{
							strcat_s(sign1,txt);
						}
						fstream file;
						file.open(sign1,ios_base::out|ios_base::trunc);
						while(1)
						{
							while(1)
							{
								cout<<"请输入编号：";
								cin>>sign2;
								if(!strcmp(sign2,back))
								{
									break;
								}
								else if(!strcmp(sign2,esc))
								{
									return 0;
								}
								else
								{}
								if( ((char)sign2[0]<58 &&(char)sign2[0]>47) && ((char)sign2[1]<58 &&(char)sign2[1]>47) && ((char)sign2[2]<58 &&(char)sign2[2]>47) && ((char)sign2[3]<58 &&(char)sign2[3]>47) && ((char)sign2[4]<58 &&(char)sign2[4]>47) && ((char)sign2[5]<58 &&(char)sign2[5]>47) && strlen(sign2)==6)
								{
									i=100000*((char)sign2[0]-48) + 10000*((char)sign2[1]-48) + 1000*((char)sign2[2]-48) + 100*((char)sign2[3]-48) + 10*((char)sign2[4]-48) + ((char)sign2[5]-48);
								}
								else
								{
									i=0;
								}
								if(i>=100001&&i<=max_size)
								{
									break;
								}
								else
								{
									cout<<"输入错误！不存在此编号！"<<endl;
								}
							}
							if(!strcmp(sign2,back))
							{
								break;
							}
							cout<<"输入正确！已找到此编号！"<<endl;
							cout<<"正在输出到"<<sign1<<"...";
							file<<all_list[i-100001].id<<"  "<<all_list[i-100001].name<<"  "<<all_list[i-100001].in;
							file<<"\n地址："<<all_list[i-100001].url<<"\n\n";
							cout<<"...Finished!"<<endl;
							cout<<"是否继续输出？输入0(零)表示“否”，输入非零字符表示“继续”    ：";
							cin>>sign2;
							if(strlen(sign2)>1 || (char)sign2[0]!=48)
							{}
							else
							{
								break;
							}
						}
						file.close();
						break;
					}
					break;
				}
				else if(!strcmp(sign1,back))
				{
					break;
				}
				else
				{
					cout<<"无效指令！"<<endl;
					cout<<"输入help可以获得操作指南！"<<endl;
				}
			}
		}
		else if(!strcmp(sign1,search))
		{
			while(1)
			{
				cout<<"二级指令：";
				cin>>sign1;
				if (!strcmp(sign1,esc))
				{
					return 0;
				}
				else if(!strcmp(sign1,help))
				{
					how_to_use();
				}
				else if(!strcmp(sign1,title))
				{
					cd=0-1;
					aa=cd;
					for(ab=1;;ab++)
					{
						cout<<"请输入第"<<ab<<"个关键词：";
						cin>>sign1;
						if(list_temp[0]==0)
						{
							cd=0-1;
							aa=cd;
							for(i=0;i<max_size-100001;i++)
							{
								if(strtok(all_list[i].name,sign1)==NULL)
								{
									cd++;
									list_temp[cd]=i+100001;
								}
							}
						}
						else
						{
							aa=0-1;
							//memset(list_temp,0,sizeof(list_temp));
							for(i=0;i<=cd;i++)
							{
								if(strtok(all_list[list_temp[i]-100001].name,sign1)==NULL)
								{
									aa++;
									list_temp[ab]=i+100001;
								}
							}
							for(i=aa+1;i<cd;i++)
							{
								list_temp[i]=NULL;
							}
						}
						if( cd<0 ||(cd>0 && aa<0))
						{
							cout<<"太抱歉啦~未找到搜索结果~发邮件给我报告吧！~"<<endl;
							ab-=1;
						}
						cout<<"以下是累计第"<<ab<<"个关键词的搜索结果："<<endl;
						for(i=0;i<sizeof(list_temp);i++)
						{
							cout<<all_list[list_temp[i]].id<<"  "<<all_list[list_temp[i]].name<<"  "<<all_list[list_temp[i]].in;
							cout<<"\n地址："<<all_list[list_temp[i]].url<<"\n\n";
						}
						cout<<"（输出结束）\n"<<endl;
						cout<<"是否继续输入关键词？(输入Y则继续，输入其他字符则进入三级操作)";
						cin>>sign2;
						if(strlen(sign2)==1&&(sign2[0]=='Y'||sign2[0]=='y'))
						{
							continue;
						}
						else
						{
						}
					}
				}
				else if(!strcmp(sign1,number))
				{
				}
				else if(!strcmp(sign1,all))
				{/////////////////////////////////////////////////////////
					for(i=100001;i<=max_size;i++)
					{
						cout<<all_list[i-100001].id<<"  "<<all_list[i-100001].name<<"  "<<all_list[i-100001].in;
						cout<<"\n地址："<<all_list[i-100001].url<<"\n\n";
					}
					break;
				}
				else if(!strcmp(sign1,back))
				{
					break;
				}
				else
				{
					cout<<"无效指令！"<<endl;
					cout<<"输入help可以获得操作指南！"<<endl;
				}
			}
		}
		else
		{
			cout<<"无效指令！"<<endl;
			cout<<"输入help可以获得操作指南！"<<endl;
		}
		//if
	}
}

void welcome(register int max_size)
{
	cout<<"\n********************************************************************************\n"<<endl;
	cout<<"Welcome!欢迎使用OST检索系统！"<<endl;
	cout<<"Ver. 1.0 Beta (Fastest Memory Version.)\n"<<endl;
	cout<<"目前已收录资源 "<<max_size-100000<<" 个！"<<endl;
	cout<<"********************************************************************************"<<endl;
	cout<<"搜索技巧"<<endl;
	cout<<"1.英文名尽量用动画中的官方大小写格式。"<<endl;
	cout<<"2.非英语词汇均用大写，其他的都是词组中第一个单词的首字母大写。"<<endl;
	cout<<"3.尽量搜少的关键词（3个字母左右，可拆分单词）。\n\n"<<endl;
}
void how_to_use()
{
	cout<<"\n          ************************* 帮助内容 *************************         "<<endl;
	cout<<"（注：可以将宏指令和二级指令用空格分开直接输入！）\n"<<endl;
	cout<<"宏指令              二级指令        三级指令"<<endl;
	cout<<"esc(退出，全局指令)    -    -    -    -    -"<<endl;
	cout<<"help(帮助，全局指令)   -    -    -    -    -"<<endl;
	cout<<"readme(说明)"<<endl;
	cout<<"output(输出到文件)  all(全部)"<<endl;
	cout<<"                    number(输序号)"<<endl;
	cout<<"                    back(返回)"<<endl;
	cout<<"search(搜索)        title(输名称)   open(打开网页)"<<endl;
	cout<<"                                    output(输出)"<<endl;
	cout<<"                                    back(返回)"<<endl;
	cout<<"                    number(输序号)  open(打开)"<<endl;
	cout<<"                                    output(输出)"<<endl;
	cout<<"                                    back(返回)"<<endl;
	cout<<"                    all(全部输出)"<<endl;
	cout<<"                    back(返回)"<<endl;
	cout<<"          ************************* （结束） *************************          "<<endl;
}
void read_me()
{
	cout<<"          ************************* 说明文档 *************************          "<<endl;
	cout<<"一、本系统的优势"<<endl;
	cout<<"  1.用黑色界面，省显示器的电，速度极快。"<<endl;
	cout<<"  2.用DOS界面，节省硬盘空间，有一种久违的感觉。"<<endl;
	cout<<"  3.搜索、操作一体，更方便、更高效、更专一。"<<endl;
	cout<<"  4.本版本为内存版，速度极快。\n"<<endl;
	cout<<"二、本系统的作用"<<endl;
	cout<<"    由于很多很好的OST的资源在互联网上都失传或失效了，所以我用学校的网络资源，挂机，将只有1~5个有效资源或速度极慢的资源整合，集中到此系统中，所以这里的资源都是极其宝贵的，大家可以留作存根。\n"<<endl;
	cout<<"三、本系统的未来版本"<<endl;
	cout<<"  1.用本程序的核心改良代码。(1.1+版本)"<<endl;
	cout<<"  2.使用MFC编写可操作性强的界面，当然效率是第一位，可能会考虑开源。(2.0+版本)"<<endl;
	cout<<"  3.提高软件的执行适应效率，分为：内存版和硬盘版。(1.1+版本)"<<endl;
	cout<<"  4.收集更多的好的、慢的、稀有的资源。(1.1+版本)"<<endl;
	cout<<"  5.将提供联网更新、联网搜索(1.1+版本)，并使用可编辑的数据库(2.0+版本)。\n"<<endl;
	cout<<"四、加入OST分享计划（我的邮箱：xiayuanzhong@126.com）"<<endl;
	cout<<"  1.OST分享计划 内容：大家把手头上的完整OST资源发到永久的网盘上，将下载地址发给我汇总；将想要的OST资源名称告诉我，我审核后会收集该资源。形成OST共享全。另外欢迎推广此系统。"<<endl;
	cout<<"  2.宗旨：将免费的、快速的、高质量的资源免费发放给大家！让驴速、收费下载站去死吧！！！"<<endl;
	cout<<"  3.加入方法：将符合上述条件的资源发到我邮箱（会署名），将想要的资源发到我邮箱（会署名），将已推广的网站发到我邮箱（会署名），让我了解到大家的动态。欢迎加入OST分享计划！"<<endl;
	cout<<"  4.加入人名单：（招募中……）\n"<<endl;
	cout<<"五、本系统常规操作方法"<<endl;
	cout<<"  1.选中：右击黑色区域（或右击窗口顶部-->编辑）-->标记。"<<endl;
	cout<<"  2.复制：选中后-->右击黑色区域（或右击窗口顶部-->编辑）-->复制。\n"<<endl;
	cout<<"六、BUG报告\n    本系统里难免有BUG欢迎将发现的BUG发到我邮箱，编者感激不尽！"<<endl;
	cout<<"          ************************* （结束） *************************          "<<endl;
}