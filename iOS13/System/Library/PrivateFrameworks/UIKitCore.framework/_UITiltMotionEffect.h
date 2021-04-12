/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(double)maximumHorizontalTiltAngle;
-(double)maximumVerticalTiltAngle;
-(double)rotatingSphereRadius;
-(void)setMaximumHorizontalTiltAngle:(double)arg1 ;
-(void)setMaximumVerticalTiltAngle:(double)arg1 ;
-(void)setRotatingSphereRadius:(double)arg1 ;
@end

