/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@interface SCNAccelerationConstraint : SCNConstraint {

	float _maximumLinearVelocity;
	float _maximumLinearAcceleration;
	float _decelerationDistance;
	float _damping;

}

@property (assign,nonatomic) double maximumLinearAcceleration; 
@property (assign,nonatomic) double maximumLinearVelocity; 
@property (assign,nonatomic) double decelerationDistance; 
@property (assign,nonatomic) double damping; 
+(BOOL)supportsSecureCoding;
+(id)accelerationConstraint;
-(id)init;
-(void)setDamping:(double)arg1 ;
-(double)damping;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)maximumLinearVelocity;
-(void)setMaximumLinearVelocity:(double)arg1 ;
-(double)maximumLinearAcceleration;
-(void)setMaximumLinearAcceleration:(double)arg1 ;
-(double)decelerationDistance;
-(void)setDecelerationDistance:(double)arg1 ;
@end

