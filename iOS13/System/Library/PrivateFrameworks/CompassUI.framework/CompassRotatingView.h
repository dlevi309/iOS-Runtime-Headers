/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
*/

#import <UIKitCore/UIView.h>

@interface CompassRotatingView : UIView {

	double _compassHeading;
	double _angle;

}

@property (assign,nonatomic) double compassHeading;              //@synthesize compassHeading=_compassHeading - In the implementation block
@property (nonatomic,readonly) double angle;                     //@synthesize angle=_angle - In the implementation block
-(double)angle;
-(double)compassHeading;
-(void)setCompassHeading:(double)arg1 ;
@end

