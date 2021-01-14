/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

