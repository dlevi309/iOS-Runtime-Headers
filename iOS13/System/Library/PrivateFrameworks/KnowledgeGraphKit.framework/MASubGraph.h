/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@class MAGraph, NSMutableDictionary;

@interface MASubGraph : NSObject {

	MAGraph* _graph;
	NSMutableDictionary* _nodesByIdentifier;
	NSMutableDictionary* _nodesByLabel;
	NSMutableDictionary* _nodesByName;
	NSMutableDictionary* _edgesByIdentifier;
	NSMutableDictionary* _edgesByLabel;
	NSMutableDictionary* _edgesByName;
	NSMutableDictionary* _nodesByNameGroupByNodes;

}

@property (nonatomic,readonly) MAGraph * graph;              //@synthesize graph=_graph - In the implementation block
+(id)subGraphWithGraph:(id)arg1 ;
+(id)subGraphIntersectionsWithSubGraphs:(id)arg1 ;
-(id)init;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(MAGraph *)graph;
-(id)allEdges;
-(id)nodesForLabel:(id)arg1 ;
-(void)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(void)enumerateEdgesWithBlock:(/*^block*/id)arg1 ;
-(id)allNodes;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)allNamedNodes;
-(id)nodesForName:(id)arg1 ;
-(unsigned long long)edgesCount;
-(id)nodeForIdentifier:(unsigned)arg1 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 ;
-(unsigned long long)nodesCount;
-(id)nodesLabels;
-(id)edgeForIdentifier:(unsigned)arg1 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 ;
-(id)edgesLabels;
-(id)graphRepresentation;
-(void)mergeWithSubGraph:(id)arg1 ;
-(void)addNodes:(id)arg1 withName:(id)arg2 ;
-(void)_addNode:(id)arg1 withName:(id)arg2 ;
-(void)_addNode:(id)arg1 withName:(id)arg2 forKeyNode:(id)arg3 ;
-(id)nodesForNames:(id)arg1 ;
-(id)nodesForName:(id)arg1 fromNode:(id)arg2 ;
-(unsigned long long)nodesCountForName:(id)arg1 ;
-(unsigned long long)nodesCountForName:(id)arg1 fromNode:(id)arg2 ;
-(id)nodesNames;
-(void)enumerateNodesByNameUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateNodesWithName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNodesWithName:(id)arg1 fromNode:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)addEdges:(id)arg1 withName:(id)arg2 ;
-(void)_addEdge:(id)arg1 withName:(id)arg2 ;
-(id)edgesForName:(id)arg1 ;
-(unsigned long long)edgesCountForName:(id)arg1 ;
-(id)edgesNames;
-(id)allNamedEdges;
-(void)enumerateEdgesByNameUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgesWithName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

