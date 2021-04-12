/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@interface SCNTransformConstraint : SCNConstraint
+(BOOL)supportsSecureCoding;
+(id)transformConstraintInWorldSpace:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)positionConstraintInWorldSpace:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)orientationConstraintInWorldSpace:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initTransformInWorld:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initPositionInWorld:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initOrientationInWorldSpace:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
@end

