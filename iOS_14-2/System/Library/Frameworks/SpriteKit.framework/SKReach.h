/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@class SKNode, NSMutableArray;

@interface SKReach : SKAction {

	SKNode* _ikRoot;
	CGPoint _goalPosition;
	NSMutableArray* _ikChain;
	double _velocity;
	BOOL _timeConstrained;
	double _zRotationSpeed;

}
+(id)reachTo:(CGPoint)arg1 rootNode:(id)arg2 duration:(double)arg3 ;
+(id)reachTo:(CGPoint)arg1 rootNode:(id)arg2 velocity:(double)arg3 ;
+(id)reachTo:(CGPoint)arg1 rootNode:(id)arg2 zRotationSpeed:(double)arg3 maxDuration:(double)arg4 ;
+(id)reachTo:(CGPoint)arg1 rootNode:(id)arg2 duration:(double)arg3 maxZRotationSpeed:(double)arg4 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)updateWithTarget:(id)arg1 forTime:(double)arg2 ;
-(void)willStartWithTarget:(id)arg1 atTime:(double)arg2 ;
-(void)solveIKWithTarget:(id)arg1 ;
@end

