/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class NSMutableArray, TSDBezierPath, TSDBezierNode;

@interface TSDBezierSubpath : NSObject {

	NSMutableArray* mNodes;
	BOOL mClosed;

}

@property (nonatomic,retain) NSMutableArray * nodes; 
@property (assign,getter=isClosed,nonatomic) BOOL closed; 
@property (nonatomic,readonly) BOOL isRectangular; 
@property (nonatomic,readonly) TSDBezierPath * bezierPath; 
@property (nonatomic,readonly) TSDBezierNode * firstNode; 
@property (nonatomic,readonly) TSDBezierNode * lastNode; 
@property (nonatomic,readonly) BOOL allNodesSelected; 
@property (nonatomic,readonly) BOOL hasSelectedNode; 
@property (nonatomic,readonly) BOOL canDeleteSelectedNodes; 
@property (nonatomic,readonly) CGRect nodeBounds; 
@property (nonatomic,readonly) BOOL closeIfEndpointsAreEqual; 
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addNode:(id)arg1 ;
-(NSMutableArray *)nodes;
-(void)setNodes:(NSMutableArray *)arg1 ;
-(TSDBezierPath *)bezierPath;
-(void)removeNode:(id)arg1 ;
-(TSDBezierNode *)firstNode;
-(void)setClosed:(BOOL)arg1 ;
-(BOOL)isClosed;
-(BOOL)isCircular;
-(BOOL)isRectangular;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
-(TSDBezierNode *)lastNode;
-(void)removeLastNode;
-(double)distanceToPoint:(CGPoint)arg1 elementIndex:(unsigned long long*)arg2 tValue:(double*)arg3 threshold:(double)arg4 ;
-(void)updateReflectedState;
-(void)appendToBezierPath:(id)arg1 selectedNodesOnly:(BOOL)arg2 fromIndex:(unsigned long long)arg3 ;
-(id)nodePriorToNode:(id)arg1 ;
-(id)nodeAfterNode:(id)arg1 ;
-(id)splitEdgeAtIndex:(unsigned long long)arg1 ;
-(void)appendToBezierPath:(id)arg1 ;
-(void)reverseDirection;
-(void)offsetSelectedNodesByDelta:(CGPoint)arg1 ;
-(void)offsetSelectedEdgesByDelta:(CGPoint)arg1 ;
-(BOOL)allNodesSelected;
-(BOOL)hasSelectedNode;
-(BOOL)canDeleteSelectedNodes;
-(void)deleteSelectedNodes;
-(void)selectAllNodes;
-(void)deselectAllNodes;
-(id)bezierNodeUnderPoint:(CGPoint)arg1 withTransform:(CGAffineTransform)arg2 andTolerance:(double)arg3 returningType:(long long*)arg4 ;
-(id)insertNodeAtPoint:(CGPoint)arg1 tolerance:(double)arg2 ;
-(CGRect)nodeBounds;
-(void)sharpenAllNodes;
-(void)smoothNode:(id)arg1 ;
-(BOOL)closeIfEndpointsAreEqual;
-(void)addNodesToArray:(id)arg1 ;
-(void)convertToHobby;
@end

