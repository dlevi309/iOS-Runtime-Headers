/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/

#import <UIKitCore/UIView.h>

@class CAShapeLayer, UIColor, CALayer;

@interface MTUITimerCountdownView : UIView {

	double _remainingTime;
	double _duration;
	long long _state;
	CAShapeLayer* _backgroundCircleLayer;
	CAShapeLayer* _countdownCircleLayer;
	UIColor* _barColor;
	UIColor* _backgroundBarColor;
	double _barWidth;
	CALayer* _mainLayer;

}

@property (retain) CAShapeLayer * backgroundCircleLayer;              //@synthesize backgroundCircleLayer=_backgroundCircleLayer - In the implementation block
@property (retain) CAShapeLayer * countdownCircleLayer;               //@synthesize countdownCircleLayer=_countdownCircleLayer - In the implementation block
@property (retain) UIColor * barColor;                                //@synthesize barColor=_barColor - In the implementation block
@property (retain) UIColor * backgroundBarColor;                      //@synthesize backgroundBarColor=_backgroundBarColor - In the implementation block
@property (assign) double barWidth;                                   //@synthesize barWidth=_barWidth - In the implementation block
@property (retain) CALayer * mainLayer;                               //@synthesize mainLayer=_mainLayer - In the implementation block
@property (assign) double remainingTime;                              //@synthesize remainingTime=_remainingTime - In the implementation block
@property (assign) double duration;                                   //@synthesize duration=_duration - In the implementation block
@property (assign) long long state;                                   //@synthesize state=_state - In the implementation block
-(void)pause;
-(void)resume;
-(BOOL)isStarted;
-(void)stop;
-(void)start;
-(long long)state;
-(double)duration;
-(void)setState:(long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)layoutSubviews;
-(CALayer *)mainLayer;
-(void)setMainLayer:(CALayer *)arg1 ;
-(double)remainingTime;
-(void)setRemainingTime:(double)arg1 ;
-(CAShapeLayer *)backgroundCircleLayer;
-(void)setBackgroundCircleLayer:(CAShapeLayer *)arg1 ;
-(void)setBarWidth:(double)arg1 ;
-(double)barWidth;
-(UIColor *)barColor;
-(void)setBarColor:(UIColor *)arg1 ;
-(void)setBackgroundBarColor:(UIColor *)arg1 ;
-(id)initWithBarColor:(id)arg1 backgroundBarColor:(id)arg2 barWidth:(double)arg3 ;
-(CAShapeLayer *)countdownCircleLayer;
-(void)setupBackgroundCircle;
-(void)setAnimationRemainingTime:(double)arg1 totalTime:(double)arg2 ;
-(double)degToRad:(double)arg1 ;
-(UIColor *)backgroundBarColor;
-(double)angleForValue:(double)arg1 total:(double)arg2 ;
-(void)setCountdownCircleLayer:(CAShapeLayer *)arg1 ;
-(id)initWithBarColor:(id)arg1 backgroundBarColor:(id)arg2 barWidth:(double)arg3 remainingTime:(double)arg4 duration:(double)arg5 ;
@end

