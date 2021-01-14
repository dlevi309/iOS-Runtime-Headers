/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)allEdges;
-(CGRect)bounds;
-(id)init;
-(void)setNodes:(NSMutableOrderedSet *)arg1 ;
-(void)removeNode:(id)arg1 ;
-(NSMutableOrderedSet *)edges;
-(id)description;
-(BOOL)render:(id)arg1 ;
-(id)allNodes;
-(void)setEdges:(NSMutableOrderedSet *)arg1 ;
-(void)addEdgeFrom:(id)arg1 to:(id)arg2 ;
-(NSMutableOrderedSet *)nodes;
-(void)dealloc;
-(void)addNode:(id)arg1 ;
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

