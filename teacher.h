#ifndef TEACHER_H
#define TEACHER_H
void teacher(void);
void add_stu(void);//添加学生
void add_single_stu(void);//单个添加
void add_batch_stu(void);//批量添加
void del_stu(void);//删除学生
void find_stu(void);//查找学生
void find_name_stu(void);//按姓名查找
void find_id_stu(void);//按学号查找
void rev_stu(void);//修改信息
void rev_base_stu(void);//修改基础信息
void rev_score_stu(void);//修改成绩
void input_stu(void);//录入成绩
void input_single_stu(void);//单个录入
void input_batch_stu(void);//批量录入
void reset_code_stu(void);//重置学生密码
void unlock_stu(void);//解锁学生帐号
void show_insch_stu(void);//显示所有在校学生信息
void show_quitsch_stu(void);//显示所有退学学生信息
int menu_tch(void);//主菜单
void stu_read(void);//读文件student.txt
void stu_save(void);//保存文件student.txt
void quit_stu_read(void);//读文件quit_stu.txt
void quit_stu_save(void);//保存文件quit_stu.txt
#endif//TEACHER_H
