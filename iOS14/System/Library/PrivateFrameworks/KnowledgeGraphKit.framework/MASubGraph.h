/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@class MABaseGraph, NSMutableDictionary;

@interface MASubGraph : NSObject {

	MABaseGraph* _graph;
	NSMutableDictionary* _nodesByIdentifier;
	NSMutableDictionary* _nodesByLabel;
	NSMutableDictionary* _nodesByName;
	NSMutableDictionary* _edgesByIdentifier;
	NSMutableDictionary* _edgesByLabel;
	NSMutableDictionary* _edgesByName;
	NSMutableDictionary* _nodesByNameGroupByNodes;

}

@property (nonatomic,readonly) MABaseGraph * graph;              //@synthesize graph=_graph - In the implementation block
+(id)subGraphWithGraph:(id)arg1 ;
+(id)subGraphIntersectionsWithSubGraphs:(id)arg1 ;
-(id)allEdges;
-(MABaseGraph *)graph;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)init;
-(unsigned long long)nodesCount;
-(id)edgeForIdentifier:(unsigned)arg1 ;
-(id)nodesForLabel:(id)arg1 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 ;
-(unsigned long long)edgesCount;
-(void)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(void)enumerateEdgesWithBlock:(/*^block*/id)arg1 ;
-(id)nodesLabels;
-(id)description;
-(id)allNodes;
-(unsigned long long)nodesCountForLabel:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(id)nodeForIdentifier:(unsigned)arg1 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)edgesLabels;
-(id)nodesForName:(id)arg1 ;
-(id)nodesForName:(id)arg1 fromNode:(id)arg2 ;
-(id)edgesForName:(id)arg1 ;
-(id)edgesNames;
-(id)nodesNames;
-(void)enumerateNodesWithName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNodesWithName:(id)arg1 fromNode:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)allNamedNodes;
-(id)graphRepresentation;
-(void)mergeWithSubGraph:(id)arg1 ;
-(void)addNodes:(id)arg1 withName:(id)arg2 ;
-(void)_addNode:(id)arg1 withName:(id)arg2 ;
-(void)_addNode:(id)arg1 withName:(id)arg2 forKeyNode:(id)arg3 ;
-(id)nodesForNames:(id)arg1 ;
-(unsigned long long)nodesCountForName:(id)arg1 ;
-(unsigned long long)nodesCountForName:(id)arg1 fromNode:(id)arg2 ;
-(void)enumerateNodesByNameUsingBlock:(/*^block*/id)arg1 ;
-(void)addEdges:(id)arg1 withName:(id)arg2 ;
-(void)_addEdge:(id)arg1 withName:(id)arg2 ;
-(unsigned long long)edgesCountForName:(id)arg1 ;
-(id)allNamedEdges;
-(void)enumerateEdgesByNameUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgesWithName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

