/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNPhysicsField.h>

@interface SCNPhysicsNoiseField : SCNPhysicsField {

	double _smoothness;
	double _animationSpeed;

}

@property (assign,nonatomic) double smoothness; 
@property (assign,nonatomic) double animationSpeed; 
+(BOOL)supportsSecureCoding;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setAnimationSpeed:(double)arg1 ;
-(double)smoothness;
-(id)initWithCoder:(id)arg1 ;
-(void)setSmoothness:(double)arg1 ;
-(double)animationSpeed;
-(c3dPhysicsField*)_createField;
-(BOOL)supportsDirection;
-(BOOL)supportsOffset;
@end

