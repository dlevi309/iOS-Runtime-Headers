/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@protocol MANodeImplementationProtocol <NSObject>
@required
-(id)edgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3;
-(void)enumerateNeighborNodesWithLabel:(id)arg1 inDomain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3;
-(void)enumerateNeighborNodesThroughEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3 usingBlock:(/*^block*/id)arg4;
-(void)removeEdge:(id)arg1;
-(id)neighborNodesThroughEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3;
-(void)enumerateSiblingNodesThroughEdgesInDomains:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(unsigned long long)countOfEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3;
-(BOOL)hasEdgeOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3;
-(id)neighborNodesWithLabel:(id)arg1 inDomain:(unsigned short)arg2;
-(id)edgesOfType:(unsigned long long)arg1 withNode:(id)arg2;
-(id)anyEdgeOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3;
-(void)addEdge:(id)arg1;
-(void)enumerateNeighborNodesThroughEdgesInDomains:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(void)enumerateSiblingNodesThroughEdgesWithLabel:(id)arg1 inDomain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3;
-(void)enumerateDeepNeighborsWithLabel:(id)arg1 domain:(unsigned short)arg2 edgeType:(unsigned long long)arg3 excluding:(id)arg4 shouldStop:(BOOL*)arg5 block:(/*^block*/id)arg6;
-(BOOL)hasEdgeOfType:(unsigned long long)arg1 withNode:(id)arg2;
-(void)enumerateEdgesInDomains:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(id)siblingNodesThroughEdgesWithLabel:(id)arg1 inDomain:(unsigned short)arg2;
-(id)anyNeighborNodeThroughEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3;
-(void)enumerateEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3 usingBlock:(/*^block*/id)arg4;
-(id)anyEdgeOfType:(unsigned long long)arg1 withNode:(id)arg2;
-(unsigned long long)memoryFootprint:(id)arg1;

@end

