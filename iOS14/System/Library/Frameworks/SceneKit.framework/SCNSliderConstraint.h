/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@interface SCNSliderConstraint : SCNConstraint {

	unsigned long long _categoryBitMask;
	SCNVector3 _offset;
	float _radius;

}

@property (assign,nonatomic) unsigned long long collisionCategoryBitMask; 
@property (assign,nonatomic) double radius; 
@property (assign,nonatomic) SCNVector3 offset; 
+(BOOL)supportsSecureCoding;
+(id)sliderConstraint;
-(void)setRadius:(double)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(SCNVector3)offset;
-(double)radius;
-(void)setOffset:(SCNVector3)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)collisionCategoryBitMask;
-(void)setCollisionCategoryBitMask:(unsigned long long)arg1 ;
@end

