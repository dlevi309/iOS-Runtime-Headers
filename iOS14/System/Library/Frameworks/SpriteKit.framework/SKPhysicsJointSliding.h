/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointSliding : SKPhysicsJoint {

	BOOL _shouldEnableLimits;
	double _lowerDistanceLimit;
	double _upperDistanceLimit;

}

@property (assign,nonatomic) BOOL shouldEnableLimits;                //@synthesize shouldEnableLimits=_shouldEnableLimits - In the implementation block
@property (assign,nonatomic) double lowerDistanceLimit;              //@synthesize lowerDistanceLimit=_lowerDistanceLimit - In the implementation block
@property (assign,nonatomic) double upperDistanceLimit;              //@synthesize upperDistanceLimit=_upperDistanceLimit - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 axis:(CGVector)arg4 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setLowerDistanceLimit:(double)arg1 ;
-(void)setShouldEnableLimits:(BOOL)arg1 ;
-(void)setUpperDistanceLimit:(double)arg1 ;
-(BOOL)shouldEnableLimits;
-(double)lowerDistanceLimit;
-(double)upperDistanceLimit;
@end

