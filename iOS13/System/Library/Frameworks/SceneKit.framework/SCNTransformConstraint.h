/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@interface SCNTransformConstraint : SCNConstraint
+(BOOL)supportsSecureCoding;
+(id)transformConstraintInWorldSpace:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)positionConstraintInWorldSpace:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)orientationConstraintInWorldSpace:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initTransformInWorld:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initPositionInWorld:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initOrientationInWorldSpace:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
@end

