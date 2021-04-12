/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKGraph.h>

@class NSMutableArray, NSArray;

@interface GKObstacleGraph : GKGraph {

	NSMutableArray* _sourceObstacles;
	GKCObstacleGraph* _cObstacleGraph;
	Class _nodeClass;

}

@property (nonatomic,readonly) NSArray * obstacles; 
@property (nonatomic,readonly) float bufferRadius; 
+(BOOL)supportsSecureCoding;
+(id)graphWithObstacles:(id)arg1 bufferRadius:(float)arg2 ;
+(id)graphWithObstacles:(id)arg1 bufferRadius:(float)arg2 nodeClass:(Class)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)bufferRadius;
-(Class)nodeClass;
-(GKCGraph*)makeCGraph;
-(NSArray *)obstacles;
-(void)addObstacles:(id)arg1 ;
-(void)removeObstacles:(id)arg1 ;
-(void)connectNodeUsingObstacles:(id)arg1 ;
-(Class)classForGenericArgumentAtIndex:(unsigned long long)arg1 ;
-(id)mutObstacles;
-(id)initWithObstacles:(id)arg1 bufferRadius:(float)arg2 ;
-(id)initWithObstacles:(id)arg1 bufferRadius:(float)arg2 nodeClass:(Class)arg3 ;
-(GKCObstacleGraph*)cObstacleGraph;
-(void)connectNodeUsingObstacles:(id)arg1 ignoringObstacles:(id)arg2 ;
-(void)connectNodeUsingObstacles:(id)arg1 ignoringBufferRadiusOfObstacles:(id)arg2 ;
-(void)removeAllObstacles;
-(id)nodesForObstacle:(id)arg1 ;
-(void)lockConnectionFromNode:(id)arg1 toNode:(id)arg2 ;
-(void)unlockConnectionFromNode:(id)arg1 toNode:(id)arg2 ;
-(BOOL)isConnectionLockedFromNode:(id)arg1 toNode:(id)arg2 ;
@end

