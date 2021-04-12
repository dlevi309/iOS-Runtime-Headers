/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GraphVisualizer.framework/GraphVisualizer
*/


#import <GraphVisualizer/GraphVisualizer-Structs.h>
@class NSMutableOrderedSet;

@interface GVGraph : NSObject {

	NSMutableOrderedSet* nodes;
	NSMutableOrderedSet* edges;

}

@property (nonatomic,retain) NSMutableOrderedSet * nodes; 
@property (nonatomic,retain) NSMutableOrderedSet * edges; 
@property (nonatomic,readonly) CGRect bounds; 
-(id)init;
-(void)dealloc;
-(id)description;
-(CGRect)bounds;
-(BOOL)render:(id)arg1 ;
-(void)addNode:(id)arg1 ;
-(void)addEdgeFrom:(id)arg1 to:(id)arg2 ;
-(NSMutableOrderedSet *)nodes;
-(void)setNodes:(NSMutableOrderedSet *)arg1 ;
-(NSMutableOrderedSet *)edges;
-(void)setEdges:(NSMutableOrderedSet *)arg1 ;
-(id)allEdges;
-(void)removeNode:(id)arg1 ;
-(id)allNodes;
-(BOOL)hasEdgeFrom:(id)arg1 to:(id)arg2 ;
-(id)edgeFrom:(id)arg1 to:(id)arg2 ;
-(void)removeEdgeFrom:(id)arg1 to:(id)arg2 ;
-(void)addEdgeFrom:(id)arg1 to:(id)arg2 reversed:(BOOL)arg3 ;
-(BOOL)hasNode:(id)arg1 ;
-(void)reverseEdge:(id)arg1 ;
-(void)undoReverseEdge:(id)arg1 ;
-(id)connectedSubgraphs;
-(void)iterateOverAllEdges:(/*^block*/id)arg1 ;
-(void)iterateOverAllNodes:(/*^block*/id)arg1 ;
@end

