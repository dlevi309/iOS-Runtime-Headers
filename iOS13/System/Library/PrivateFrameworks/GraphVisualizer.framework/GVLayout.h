/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GraphVisualizer.framework/GraphVisualizer
*/


#import <GraphVisualizer/GraphVisualizer-Structs.h>
@class GVGraph, NSMutableArray;

@interface GVLayout : NSObject {

	unsigned long long* savedOrder;
	unsigned long long currentCrossings;
	int direction;
	GVGraph* graph;
	NSMutableArray* selfEdges;
	NSMutableArray* ranks;
	CGSize separation;

}

@property (assign,nonatomic) GVGraph * graph; 
@property (assign,nonatomic) int direction; 
@property (assign,nonatomic) CGSize separation; 
@property (nonatomic,retain) NSMutableArray * selfEdges; 
@property (nonatomic,retain) NSMutableArray * ranks; 
+(CGSize)layoutGraph:(id)arg1 withDirection:(int)arg2 separation:(CGSize)arg3 ;
-(void)dealloc;
-(GVGraph *)graph;
-(void)setGraph:(GVGraph *)arg1 ;
-(int)direction;
-(CGSize)separation;
-(void)setDirection:(int)arg1 ;
-(void)setSeparation:(CGSize)arg1 ;
-(NSMutableArray *)ranks;
-(void)setRanks:(NSMutableArray *)arg1 ;
-(void)transpose;
-(CGSize)doLayout:(id)arg1 direction:(int)arg2 separation:(CGSize)arg3 ;
-(void)removeSelfEdges;
-(void)removeCycles;
-(void)assignRanks;
-(void)orderVertices;
-(void)assignCoordinates;
-(void)undoRemoveCycles;
-(void)_removeCycleDFS:(id)arg1 visistedNodes:(id)arg2 nodesInStack:(id)arg3 ;
-(void)makeFeasibleTree;
-(void)minimizeCutValues;
-(void)normalizeRanks;
-(void)balanceRanks;
-(void)buildRankIterators;
-(void)initializeRanks;
-(void)initializeOrder;
-(void)weightedMedian:(unsigned long long)arg1 ;
-(void)commitOrder;
-(unsigned long long)crossings;
-(void)saveOrder;
-(void)restoreOrder;
-(unsigned long long)medianValueOf:(id)arg1 withRespectTo:(id)arg2 ;
-(void)medianSort:(id)arg1 withRespectTo:(id)arg2 ;
-(void)assignNodePriorities;
-(void)assignNodeCoordinates;
-(void)assignRankCoordinates;
-(void)initializeNodeCoordinates;
-(void)medianPosition:(unsigned long long)arg1 ;
-(void)packCutX:(unsigned long long)arg1 ;
-(void)straightenX;
-(void)packCutY:(unsigned long long)arg1 ;
-(void)straightenY;
-(void)undoRemoveSelfEdges;
-(NSMutableArray *)selfEdges;
-(void)setSelfEdges:(NSMutableArray *)arg1 ;
@end

