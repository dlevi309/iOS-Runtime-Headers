/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/MAElement.h>

@class NSMutableArray;

@interface MANode : MAElement {

	NSMutableArray* _edges;

}
-(id)init;
-(id)description;
-(id)shortDescription;
-(id)allEdges;
-(void)_addEdge:(id)arg1 ;
-(void)_removeEdge:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(void)enumerateEdgesWithLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)hasEdgeTowardNode:(id)arg1 ;
-(BOOL)hasEdgeFromNode:(id)arg1 ;
-(void)enumerateNeighborNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isUnique;
-(BOOL)isEqualToNode:(id)arg1 ;
-(unsigned long long)countOfEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)anyNeighborNodeThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)enumerateNeighborNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(unsigned long long)countOfEdgesWithLabel:(id)arg1 ;
-(id)visualString;
-(id)neighborNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)enumerateOutEdgesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasEdgeWithNode:(id)arg1 ;
-(id)visualStringWithName:(id)arg1 andPropertyKeys:(id)arg2 ;
-(id)edgesWithNode:(id)arg1 ;
-(id)edgesFromNode:(id)arg1 ;
-(id)edgesTowardNode:(id)arg1 ;
-(id)shortestPathToNode:(id)arg1 directed:(BOOL)arg2 ;
-(unsigned long long)edgesCount;
-(id)neighborNodes;
-(id)neighborNodesThroughOutEdges;
-(id)neighborNodesThroughInEdges;
-(unsigned long long)inEdgesCount;
-(unsigned long long)outEdgesCount;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(unsigned long long)_memoryFootprint:(id)arg1 ;
-(BOOL)isNode;
-(void)_removePersistentStorePropertyForKey:(id)arg1 ;
-(void)_removeAllPersistentStoreProperties;
-(void)_setPersistentStorePropertyValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setPersistentStoreProperties:(id)arg1 ;
-(BOOL)isOrphan;
-(id)anyEdgeTowardNode:(id)arg1 ;
-(id)anyEdgeFromNode:(id)arg1 ;
-(id)anyEdgeWithNode:(id)arg1 ;
-(id)anyEdgeWithLabel:(id)arg1 ;
-(id)anyEdgeWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(BOOL)hasEdgeWithLabel:(id)arg1 ;
-(BOOL)hasEdgeWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)enumerateEdgesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgesOfType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateInEdgesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgesWithDomains:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNeighborNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateNeighborNodesThroughEdgesWithLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNeighborNodesThroughEdgesWithDomains:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNeighborNodesThroughOutEdgesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateNeighborNodesThroughInEdgesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasEdge:(id)arg1 isIn:(BOOL*)arg2 ;
-(id)anyNeighborNodeThroughEdgesWithLabel:(id)arg1 ;
-(id)anyNeighborNodeThroughOutEdges;
-(id)anyNeighborNodeThroughOutEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)anyNeighborNodeThroughInEdges;
-(id)anyNeighborNodeThroughInEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)commonNeighborNodesWithNode:(id)arg1 ;
-(id)commonNeighborNodesThroughEdgesWithNode:(id)arg1 ;
-(id)commonNeighborNodesThroughInEdgesWithNode:(id)arg1 ;
-(id)commonNeighborNodesThroughOutEdgesWithNode:(id)arg1 ;
-(id)siblingNodesThroughEdgesWithLabel:(id)arg1 ;
-(void)enumerateSiblingNodesThroughEdgesWithLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)siblingNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)enumerateSiblingNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateSiblingNodesThroughEdgesWithDomains:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)visualStringWithName:(id)arg1 ;
-(id)_edgesWithOppositeNode:(id)arg1 type:(unsigned long long)arg2 ;
-(id)_anyEdgeWithOppositeNode:(id)arg1 type:(unsigned long long)arg2 ;
-(BOOL)_hasEdgesWithOppositeNode:(id)arg1 type:(unsigned long long)arg2 ;
-(void)_enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_enumerateEdgesWithDomains:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateEdgesOfType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)associatedNodesForRemoval;
-(void)_enumerateNeighborNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)conformsToNodeSchema:(id)arg1 ;
@end

