# 第一讲：电压电流和功率

## 字母代表什么

| 字母 | 含义                     |
| ---: | :----------------------- |
|  U,u | 电压                     |
|  I,i | 电流                     |
|    R | 电阻                     |
|    φ | 电位                     |
|  q,Q | 电荷                     |
|  E,e | 电动势                   |
|  p,P | 功率                     |
|  w,W | 功、能量、功率的单位瓦特 |

## 电厂

- 电厂：电场是电荷及变化磁场周围空间里存在的一种特殊物质。这种物质与通常的实物不同，它虽然不是由分子原子所组成的，但它却是客观存在的特殊物质，具有通常物质所具有的力和能量等客观属性。
- 电厂力：电场对放入其中的电荷有作用力。只要有电荷存在，电荷的周围就存在着电场，电场的基本性质是它对放入其中的电荷有力的作用，这种力就叫做电场力。

## 电荷（charge）

- 含义：为物体或构成物体的质点所带的具有正电或负电的粒子，带正电的粒子叫正电荷（表示符号为“+”），带负电的粒子叫负电荷（表示符号为“﹣”）。也是某些基本粒子（如电子）的属性，同种电荷相互排斥，异种电荷相互吸引。（来自百度百科）
- 补充：
	- “原子”是由“原子核”与外层的“电子”组成，“原子核”是不能移动的，“电子”可以自由移动也称为“自由电子”。
	- “原子核”由“质子”和“中子”组成。
	- “原子”对外不显电性即中性，“电子”带负电，“原子核”带正电。
	- “电子”、“质子”和“中子”都属于“粒子”。
	- 电荷，实际上是所有“带电粒子”的总称。
	- 电荷也是个量词，电荷量的简称
- 符号：q
- 单位：C（库伦，简称库），若导线中载有1A的稳定电流，则在1秒内通过导线横截面的电量为1C
- 守恒定律：
	- 电荷既不能创造，也不能消 灭，它只能从一个物体转移到另一个物体，或者从物体的一部分转移到另一部分。在转移的过程中，系统的电荷总数保持不变

## 电势能

- 含义：电势能（Electric potential energy）是处于电场的电荷分布所具有的势能，与电荷分布在系统内部的组态有关。
- 单位：J（焦耳） 
- 符号：E<sub>p</sub>
- 电场力做功与电势能变化量的关系：W<sub>AB</sub>=E<sub>pA</sub>-E<sub>pB</sub>

## 电位（potential）

- 又名：电势
- 公式：φ = E<sub>p</sub>/q
- 含义：**处于电场中某个位置的单位电荷所具有的电势能。其数值不具有绝对意义，只具有相对意义，因此为了便于分析问题，必须设定一个参考位置，并把它设为零，称为零势能点。**
- 白话：从某点到参考点的电压
- 单位：V(伏)
- 表示符号：φ（/faɪ/）

## 电压（voltage）

- 公式：u=dw/dq
- 含义：**电场力移动单位电荷做的功**
- 白话：电场力将单位正电荷从A移动到B所作的功
- 单位：V(伏)
- 表示符号：U，u
- 常称为：电压降
- 电压与电位的关系：u<sub>AB</sub> = φ<sub>A</sub> - φ<sub>B</sub>
	- ∵ W<sub>AB</sub>=E<sub>pA</sub>-E<sub>pB</sub>，u=dw/dq
	- ∴ u<sub>AB</sub> = E<sub>pA</sub>-E<sub>pB</sub>/q = E<sub>pA</sub>/q - E<sub>pB</sub>/dq
	- ∵ φ = E<sub>p</sub>/q，u<sub>AB</sub> = E<sub>pA</sub>/q - E<sub>pB</sub>/dq
	- ∴ u<sub>AB</sub> = φ<sub>A</sub> - φ<sub>B</sub>
- **自我理解**：根据电压与电位的关系可以看出：电场力将单位正电荷从A移动到B所作的功，这里的功就是消耗的电势能，那么电场力将单位正电荷从A移动到B所消耗掉的电势能就是电压

## 电流（current）

- 公式：i=dq/dt
- 含义：**电荷的时间变化率**
- 白话：单位时间内从A到B的正电荷量
- 单位：A（安）
- 表示符号：I，i
- 电流又分为直流电流和交流电流

## 磁通（flux）

## 电动势（eletromotive force）

- 白话：非电厂力将单位正负荷从B移动到A所作的功

- 单位：V(伏)

- 表示符号：E

- 电势力与电压的关系

	​	**E<sub>ba</sub>，电位的升高，E<sub>ba</sub> = φa - φb**

	​	U<sub>ab</sub>，电位的降低，U<sub>ab</sub> = φa - φb

	​	∴ E<sub>ba</sub> = U<sub>ab</sub>

	- E<sub>ba</sub> 与U<sub>ab</sub>的本质区别

		E<sub>ba</sub> 是内在属性

		U<sub>ab</sub>是为了分析电路所外加的变量

## 变量的大小写

- 不变的量大写
	- U,I
- 可能变化的量小写
	- u,i

## 欧姆定律

- 公式：I=U/R

### <b id='resistance-circuit'></b>在串联电路中电压和电阻的关系

串联电阻电路图：![](./images/resistance-circuit.png)

说明：

1. i<sub>ab</sub> 为 R<sub>1</sub> 的电流，这里称为 i<sub>1</sub>；i<sub>bc</sub> 为 R<sub>2</sub> 的电流，这里称为 i<sub>2</sub>；i<sub>ac</sub> 为整个电路的总电流，这里称为 i<sub>总</sub>；
2. u<sub>ab</sub> 为 R<sub>1</sub> 的电压，这里称为 u<sub>1</sub>；u<sub>bc</sub> 为 R<sub>2</sub> 的电压，这里称为 u<sub>2</sub>；u<sub>ac</sub> 为整个电路的总电压，这里称为 u<sub>总</sub>；
3. R<sub>ac</sub> 为整个电路的总电阻，这里称为 R<sub>总</sub>；（导线和开关的电阻忽略不计）

特征：

- 电流特征： i<sub>总</sub> = i<sub>1</sub> = i<sub>2</sub>
- 电阻特征： R<sub>总</sub> = R<sub>1</sub> + R<sub>2</sub>
- 电压特征：u<sub>总</sub> = u<sub>1</sub> + u<sub>2</sub>

那么电压和电阻有什么关系？

∵  i<sub>总</sub> = i<sub>1</sub> = i<sub>2</sub> ，I=U/R

∴  I = U<sub>1</sub>/R<sub>1</sub> = U<sub>2</sub>/R<sub>2</sub> 

可以看出**电压和电阻是正比关系**



变形式： 

U<sub>1</sub>/R<sub>1</sub> = U<sub>2</sub>/R<sub>2</sub> 

=> (U<sub>1</sub>/R<sub>1</sub>)(R<sub>1</sub>/U<sub>2</sub>) = (U<sub>2</sub>/R<sub>2</sub> )(R<sub>1</sub>/U<sub>2</sub>)

=> U<sub>1</sub> / U<sub>2</sub> =  R<sub>1</sub> / R<sub>2</sub>

也可以看出**电压和电阻是正比关系**

## 思考1

已知

1. 任意两点之间有电压
2. 某点的**电位**是该点到参考点的电压

那么，两点之间的电压和两点的电位有什么关系？

<img src="./images/potential.PNG" style="zoom:50%;" />

根据上图可得：

φc = 0

U<sub>ac</sub> = φa,U<sub>dc</sub> = φd

U<sub>ac</sub> = Uad + U<sub>dc</sub> (KVL)

U<sub>ad</sub> = U<sub>ac</sub> - U<sub>dc</sub> = φa - φd

结论：

1. **两点间的电压等于两点间的电位差**
2. 两点间的电位差称为**电位降**，电位降即两点间的电压又称为**电压降**

#### 例子：U<sub>ab</sub> = 1.5V，Ubc = 1.5V ，求 φa、φb、φc、U<sub>ac</sub>

![](./images/demo1.png)

由于电位是根据参考点所计算的并且题目中为指定参考点那么

1. 设**a点为参考点**：φa=0

	U<sub>ab</sub> = φa - φb → φb = φa - U<sub>ab</sub> = 0 - 1.5 = -1.5V

	φb = -1.5V

	U<sub>bc</sub> = φb - φc  → φc = φb - U<sub>bc</sub> = -1.5 -1.5 = -3V

	φc = -3V

	U<sub>ac</sub> = φa - φc = 0 - (-3) = 3V

	**U<sub>ac</sub> = 3V**

2. 设**b点为参考点**：φb=0

	U<sub>ab</sub> = φa - φb → φa = φb + U<sub>ab</sub> = 0 + 1.5 = 1.5V

	φa = 1.5V

	U<sub>bc</sub> = φb - φc  → φc = φb - U<sub>bc</sub> = 0 - 1.5 = -1.5V

	φc = -1.5V

	U<sub>ac</sub> = φa - φc = 1.5 - (-1.5) = 3V

	**U<sub>ac</sub> = 3V**

3. 设**c点为参考点**：φc=0

	U<sub>bc</sub> = φb - φc  → φb = φc + U<sub>bc</sub> = 0 + 1.5 = 1.5V

	φb = 1.5V

	U<sub>ab</sub> = φa - φb → φa = φb + U<sub>ab</sub> = 1.5 + 1.5 = 3V

	φa = 3V

	U<sub>ac</sub> = φa = 3V

	**U<sub>ac</sub> = 3V**

通过例子可以看出不管以哪个点为参考点两点之间的电压不变，即**两点之间的电压与参考点无关**

## 电压和电流的参考方向

#### 为什么要有参考方向

- 电压和电流的方向不确定

	<img src="./images/reference_direction1.jpg" style="zoom:50%;" />

- 电压和电流的方向**随时间变化**(还不太理解)

	<img src="./images/reference_direction2.jpg" style="zoom:50%;" />

#### 电流的参考方向

表示电流参考方向的两种形式

- 箭头
- 双下标（i<sub>ab</sub>）：参考方向从a指向b

由于不知道电流的方向所以要假设一个电流的参考方向（从左往右或从右往左都可以）

​	解出的数值如果是正值，那么真实方向与参考方向一致

​	解出的数值如果是负值，那么真实方向与参考方向相反

<img src="./images/reference_direction3.jpg" style="zoom:50%;" />

#### 电压的参考方向

表示电压参考方向的三种形式

- 箭头（认为**沿着箭头的方向是电压降**）

	<img src="./images/reference_direction4.jpg" alt="reference_direction4" style="zoom:50%;" />

- 正负极性（推荐，认为**从正到负是电压降**）

	<img src="./images/reference_direction5.jpg" alt="reference_direction5" style="zoom:50%;" />

- 双下标（U<sub>ab</sub>，认为**从a到b是电压降**）

	<img src="./images/reference_direction6.jpg" alt="reference_direction6.jpg" style="zoom:50%;" />

#### 电动势的方向

表示电动势的方向的3种方式

- 箭头（认为**沿着箭头的方向是电压升**）

	![eletromotive_force_2.png](./images/eletromotive_force_2.png)

- 正负极性（推荐，认为**从负到正是电压升**）

	![eletromotive_force_1](./images/eletromotive_force_1.png)

- 双下标（E<sub>ba</sub>，认为**从b到a是电压升**）

	![eletromotive_force_3](./images/eletromotive_force_3.png)

#### 二端元件上电压参考方向和电流参考方向的关系（**欧姆定律**）

##### 关联参考方向（电压、电流均以箭头方式表示，同一方向的为关联参考方向）

- 公式：u = Ri

- 形式：

	![](./images/associated_reference_directions.png)

##### 非关联参考方向（电压、电流均以箭头方式表示，相反方向的为非关联参考方向）

- 公式：u = -Ri

- 形式：

	![](./images/non-associated_reference_directions.png)

## 功率

- 含义：单位时间内从A到B所作的功
- 公式：P=dw/dt=(dw/dq)*(dq/dt) =ui
- 符号：P
- 单位：W（瓦特，简称瓦）

### 在<a href="#resistance-circuit">串联电路</a>中功率与电阻的关系

功率特征：

P<sub>总</sub>=U<sub>总</sub>I<sub>总</sub>

​	=(U<sub>1</sub>+U<sub>2</sub>)I<sub>总</sub>

​	=(U<sub>1</sub>I<sub>1</sub>)+(U<sub>2</sub>I<sub>2</sub>)

​	=P<sub>1</sub>+P<sub>2</sub>

功率与电阻的关系

∵ P=UI，U=RI

∴ P=(RI)I=RI<sup>2</sup>

​	=> I<sup>2</sup>=P/R

又 ∵  i<sub>总</sub> = i<sub>1</sub> = i<sub>2</sub>

∴ I<sup>2</sup>=P<sub>1</sub>/R<sub>1</sub>=P<sub>2</sub>/R<sub>2</sub>

可以看出**功率和电阻是正比关系**



∵ I=P/U， i<sub>总</sub> = i<sub>1</sub> = i<sub>2</sub>

∴ I=P<sub>1</sub>/U<sub>1</sub>=P<sub>2</sub>/U<sub>2</sub>

又 ∵  U<sub>1</sub> / U<sub>2</sub> =  R<sub>1</sub> / R<sub>2</sub>

∴  P<sub>1</sub>/P<sub>2</sub> = U<sub>1</sub> / U<sub>2</sub> =  R<sub>1</sub> / R<sub>2</sub>

也可以看出**功率和电阻是正比关系**

### 功率的计算

- 关联参考方向
	- P<sub>吸</sub>=ui ，元件吸收的功率
	- P<sub>吸</sub>>0，说明元件真正吸收功率
	- P<sub>吸</sub><0，说明元件真正发出功率
- 非关联参考方向
	- 第一种
		- P<sub>发</sub>=ui ，元件发出的功率
		- P<sub>发</sub>>0，说明元件真正发出功率
		- P<sub>发</sub><0，说明元件真正吸收功率
	- 第二种：将非关联参考方向改为关联参考方向使用P<sub>吸</sub>
		- P<sub>吸</sub> = u(-i) = -ui ，元件吸收的功率

### 功率的计算记忆方式

- 第一种：关联参考方向 <=> P<sub>吸</sub> = ui，非关联参考方向 <=> P<sub>发</sub> = ui
- 第二种（永远只用P<sub>吸</sub>）：关联参考方向 <=> P<sub>吸</sub> = ui，非关联参考方向 <=> P<sub>吸</sub> = -ui

### 例题

例1、U = 10V，I = 1A 。U，I 为真实方向



<img src="./images/power_demo1.png" style="zoom:50%;" />

解：

方法1（使用第一种记忆方式）：

电压方向和电流方向对于电阻是关联方向，则 P<sub>R吸</sub> = U × I = 10 × 1 = 10W ，电阻吸收功率：10W

电压方向和电流方向对于电阻是非关联方向，则 P<sub>U发</sub> = U × I = 10 × 1 = 10W，电源发出功率：10W



方法2（使用第二种记忆方式）：

电压方向和电流方向对于电阻是关联方向，则 P<sub>R吸</sub> = U × I = 10 × 1 = 10W ，电阻吸收功率：10W

电压方向和电流方向对于电阻是非关联方向，则 P<sub>U吸</sub> = U × ( -I ) = 10 × -1 = -10W，电源发出功率：10W

## 问题

1. 欧姆定律中由于电压与电流都是参考方向，那么当计算P<sub>吸</sub>时是负值那么电压与电流的参考方向是谁错了？或者说需要先计算电压与电流的真实方向？
2. 磁通是什么？