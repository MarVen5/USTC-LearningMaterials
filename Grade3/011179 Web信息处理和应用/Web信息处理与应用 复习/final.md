# 重点关注

1. 网页文字处理 - 基于字符/词典匹配的方法，最大匹配，最短路径；基于统计的方法 N-gram，一元/二元；隐马尔可夫模型

2. 网页索引 - 倒排表构建过程 (结合向量空间模型、向量化检索)，倒排表优化和扩展 (查询条件由多个布尔条件组成时的顺序)，跳表指针 (流程，基于索引)，可变字节编码

3. 查询和评估 - 指标的计算方法 (Precision, Recall, F, NDCG, AP 等 除去 扩展指标)，曲线如何画，如何选，记得画坐标

4. 排序上 - 向量空间模型 (五步过程，tf-idf)，罗基奥算法

5. 排序下 - pagerank，HITS 算法 (记得每一步要归一化，每个点是两个值)

6. 个性化检索上 - 协同过滤 (基于用户、基于物品)

7. 个性化检索下 - 主成分分析

8. 知识的抽取和表达上 - 基于隐马尔可夫的方法 (与关于分词的串起来看)

9. 知识的抽取和表达下 - DIPRE 算法 (模式)

10. 社会网络 - 独立级联模型，线性阈值模型 (计算方法、传播最大化问题的子模特性问题)

# 需要了解

1. 爬虫 - 反爬策略，如何应对

2. 网页文字处理 - 停用词 (概念、对搜索引擎的影响，结合倒排表，加入位置倒排表)；归一化处理流程

3. 网页索引 - 倒排表扩展 (位置信息、文档属性，支撑短语查询 2 种方法)，各类索引压缩方法，词典本身压缩和倒排表压缩

4. 查询和评估 - 相关性反馈 (有什么用、显式和隐式反馈)，查询扩展，多样性评估 (为什么要做，评估什么)

5. 排序上 - word2vec (思路、两种策略，CBOW 和 Skip-gram)

6. 排序下 - pointwise, pairwise, listwise (不需要原理，只需要知道概念，什么情况用哪个，优劣)，topic-sensitive pagerank

7. 个性化检索上 - 基于内容的推荐 (优缺点)，矩阵分解的方法 (基本原理、相关约束)

8. 个性化检索下 - 情境感知 (什么是，作用，有哪些类型)，数据采样和离散化手段

9. 知识图谱导论 - 知识图谱 (概念和组成元素、三元组)，信息抽取任务 (五类，做什么)，特殊图谱 (事理图谱)，多模态图谱 (属性多模态和实体多模态，概念，场景)

10. 知识的抽取和表达上 - 实体链接问题，如何解决，命名实体识别 (结果衡量，两个子任务)

11. 知识的抽取和表达下 - 远程监督方法 (问题、近似解决)

12. 知识图谱与图计算 - 知识图谱中的表征学习 (Trans 系列模型，假设，适用范围)，知识图谱的推理和补全 (常见任务形式，大致对应目标)

13. 社会网络 - 网络中的特殊角色 (概念、地位)，传播模型有约束过于严格 (去除约束得到拓展模型，打破什么约束，起到什么效果)
