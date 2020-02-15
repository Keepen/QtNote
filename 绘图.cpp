1.绘图：
//在窗口中绘图，重写绘图事件,虚函数
void paintEvent(QPaintEvent* event){
	QPainter p(this);	//指定绘图设备为窗口
	p.drawPixmap(起点，重点，width()，height()，QPixmap());
	p.drawImage();		//QImage
	p.drawPicture();	//Qpixture
	p.drawLine();
	p.drawPixmap();		//QBitmap	-- 占用资源少
}

update();	//间接调用paintEvent()

QPixmap -> QImage
QPixmap  a;
a.toImage();

QImage -> QPixmap
QImage b;
QPixmap::fromImage();

//不在窗口中绘图
eg：
QPainter p;
QPicture pic;	//保存为二进制文件
p.begin(&pic);	//指定绘图设备
//绘图动作
p.end();
pic.save("demo.aa");

注意：绘图不一定非得在paintEvent内，
		但是在窗口中绘图必须在paintEvent内
2.不规则窗口
1）给窗口画一张背景图
2）去边框
3）设定属性（背景透明）
4）移动坐标是相对于屏幕而言

3.文件
QFile file;
file.setFileName();
file.open();
file.write();
file.read();
file.close();

QFileInfo info;
info.size();			//文件大小
info.fileName();		//文件名
//文件后缀	文件创建时间等
QDataStream	:二进制方式操作
QTextStream	:文本方式操作（可以指定编码）
QBuffer		:内存文件（内容在内存中）














