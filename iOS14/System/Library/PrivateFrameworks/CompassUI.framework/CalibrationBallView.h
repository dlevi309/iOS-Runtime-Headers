/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
*/

#import <CompassUI/CompassUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface CalibrationBallView : UIView {

	double _currentAngle;
	UIView* _ballView;
	double _ballRadius;
	double _trackRadius;

}

@property (assign,nonatomic) double trackRadius;                                //@synthesize trackRadius=_trackRadius - In the implementation block
@property (assign,nonatomic) double ballRadius;                                 //@synthesize ballRadius=_ballRadius - In the implementation block
@property (assign,setter=setAngle:,nonatomic) double currentAngle;              //@synthesize currentAngle=_currentAngle - In the implementation block
-(void)layoutSubviews;
-(void)setAngle:(double)arg1 ;
-(double)currentAngle;
-(id)ballView;
-(id)initWithFrame:(CGRect)arg1 ballRadius:(double)arg2 ;
-(void)setBallRadius:(double)arg1 ;
-(void)setTrackRadius:(double)arg1 ;
-(double)ballRadius;
-(double)trackRadius;
@end

