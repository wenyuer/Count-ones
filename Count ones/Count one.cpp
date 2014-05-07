//使用位操作，右移并和00000001进行“与”操作。
int Countones1(BYTE v)
{
	int count = 0;
	while(v!=0)
	{
		if(v & 0x01 == 1)
			count++;
		v=v>>1;
	}
	return count;
}

//除以一个2，原来数字将减少一个0，余数为1代表当前位为1
int Countones2(BYTE v)
{
	int count = 0;
	while(v!=0)
	{
		if(v % 2 == 1)
			count++;
		v = v/2;
	}
	return count;
}

//和该数-1的数相与
int Countones3(BYTE v)
{
	int count = 0;
	while(v!=0)
	{
		count++;
		v = v & (v-1);
	}
	return count;
}
