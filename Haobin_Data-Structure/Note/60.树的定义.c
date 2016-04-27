***************************************************************************************************************************
											60.树的定义 			2012.2.29
											61.树的专业术语			2012.2.29
											62.树的分类				2012.2.29
											63.二叉树连续存【重点】	2012.2.29
											64.二叉树的链式存储		2012.2.29
											65.普通树的存储			2012.3.30
											66.森林的存储			2012.3.30	
***************************************************************************************************************************					
模块二：非线性结构
		
		树：
			专业定义：
					1.有且只有一个称为根的节点
					2.有若干个互不相干的子树，这些子树本身也是数
			通俗定义：
					1.由节点和边组成
					2.每个节点有一个父节点但可以有多个子节点
					3.仅有一个节点例外，该节点没有父节点，此节点称为根节点
					
					
			专业术语：
					节点	父节点	子节点	子孙	堂兄弟
					深度：
						从根节点到最底层节点之间的层数。根节点为第一层
				叶子节点：
						没有子节点的节点。就是最底层的节点
				非终端节点：
						非叶子节点
					度：子节点的个数
			
			分类：
				一般树
					任意一个节点的子节点的个数都不受限制
				二叉树
					任意一个节点的子节点的个数最多2个，且位置不可更改（比如左子树和右子树不能对换）
					
					分类：
						一般二叉树
						
						满二叉树：不增加深度的情况下，无法增加节点的二叉树。
						
						完全二叉树：就是把满二叉树叶子节点最右边去掉连续的若干个
					
				森林
					n个互不相交的树的集合
					
					
					
			树的存储：
				二叉树的存储
					1.连续存储[完全二叉树]
						优点：
							查找某个节点的父节点和子节点（也包括 判断有没有父节点和子节点）速度
						缺点：
							耗内存空间
					2.链式存储（N个节点，二叉树只浪费N+1个空间，属于线性浪费，即浪费得很少）
						优点：
							不耗内存
						缺点：
							无法还原二叉树顺序（注意：是顺序，不是结构，比如无法确定左孩子和右孩子）
						
				一般树的存储
					双亲表示法
							求父节点方便
					孩子表示法
							求子节点方便
					双亲孩子表示法
							求父、子节点都方便，但不好操作
					二叉树表示法
						设法保证 任意一个节点的
							左指针域指向第一个孩子
							右指针域指向他的下一个兄弟
						只要满足此条件就可以把一个普通树转换为二叉树
						一个普通树转化为二叉树一定没有右子树
				
				
				森林的存储
						先把森林的存储转换为二叉树，再存储二叉树
				