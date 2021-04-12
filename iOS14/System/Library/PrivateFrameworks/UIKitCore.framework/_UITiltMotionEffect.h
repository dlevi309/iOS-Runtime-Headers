/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIMotionEffect.h>

@interface _UITiltMotionEffect : UIMotionEffect {

	double _maximumHorizontalTiltAngle;
	double _maximumVerticalTiltAngle;
	double _rotatingSphereRadius;

}

@property (assign,nonatomic) double maximumHorizontalTiltAngle;              //@synthesize maximumHorizontalTiltAngle=_maximumHorizontalTiltAngle - In the implementation block
@property (assign,nonatomic) double maximumVerticalTiltAngle;                //@synthesize maximumVerticalTiltAngle=_maximumVerticalTiltAngle - In the implementation block
@property (assign,nonatomic) double rotatingSphereRadius;                    //@synthesize rotatingSphereRadius=_rotatingSphereRadius - In the implementation block
-(void)setMaximumVerticalTiltAngle:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRotatingSphereRadius:(double)arg1 ;
-(double)maximumVerticalTiltAngle;
-(id)description;
-(double)maximumHorizontalTiltAngle;
-(void)setMaximumHorizontalTiltAngle:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)rotatingSphereRadius;
@end

