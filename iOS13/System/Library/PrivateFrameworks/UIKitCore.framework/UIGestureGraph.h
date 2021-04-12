/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMapTable, NSSet;

@interface UIGestureGraph : NSObject {

	NSMapTable* _nodesByLabel;
	NSMapTable* _edgesByLabel;

}

@property (nonatomic,readonly) unsigned long long nodeCount; 
@property (nonatomic,readonly) NSSet * nodeLabels; 
@property (nonatomic,readonly) unsigned long long edgeCount; 
@property (nonatomic,readonly) NSSet * edgeLabels; 
-(id)init;
-(id)description;
-(void)removeAllObjects;
-(NSSet *)nodeLabels;
-(unsigned long long)nodeCountForLabel:(id)arg1 ;
-(NSSet *)edgeLabels;
-(unsigned long long)edgeCountForLabel:(id)arg1 ;
-(unsigned long long)nodeCount;
-(unsigned long long)edgeCount;
-(void)_addNode:(id)arg1 ;
-(void)removeEdge:(id)arg1 ;
-(void)removeNodeEdges:(id)arg1 ;
-(void)removeNode:(id)arg1 ;
-(id)_nodesForLabel:(id)arg1 ;
-(id)nodesForLabel:(id)arg1 properties:(id)arg2 ;
-(id)_allNodes;
-(void)_addEdge:(id)arg1 ;
-(id)_edgesForLabel:(id)arg1 ;
-(id)_allEdges;
-(id)addNodeWithLabel:(id)arg1 ;
-(id)addNodeWithLabel:(id)arg1 properties:(id)arg2 ;
-(void)removeNodes:(id)arg1 ;
-(id)nodesForLabel:(id)arg1 ;
-(id)addUniqueNodeWithLabel:(id)arg1 properties:(id)arg2 ;
-(void)enumerateNodesWithLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 directed:(BOOL)arg4 ;
-(void)removeEdges:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 properties:(id)arg2 ;
-(id)addUniqueEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 directed:(BOOL)arg4 properties:(id)arg5 ;
-(void)enumerateEdgesWithLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesWithBlock:(/*^block*/id)arg1 ;
-(void)traverseGraphDepthFirstFromNode:(id)arg1 directed:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)traverseGraphBreadthFirstFromNode:(id)arg1 directed:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

