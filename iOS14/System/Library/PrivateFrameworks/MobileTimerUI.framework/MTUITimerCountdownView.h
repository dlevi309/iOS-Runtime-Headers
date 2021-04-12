/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)backgroundBarColor;
-(void)setDuration:(double)arg1 ;
-(double)remainingTime;
-(void)setRemainingTime:(double)arg1 ;
-(double)barWidth;
-(UIColor *)barColor;
-(void)setCountdownCircleLayer:(CAShapeLayer *)arg1 ;
-(void)setBarColor:(UIColor *)arg1 ;
-(BOOL)isStarted;
-(void)start;
-(void)pause;
-(CALayer *)mainLayer;
-(CAShapeLayer *)backgroundCircleLayer;
-(void)setBarWidth:(double)arg1 ;
-(id)initWithBarColor:(id)arg1 backgroundBarColor:(id)arg2 barWidth:(double)arg3 remainingTime:(double)arg4 duration:(double)arg5 ;
-(void)stop;
-(void)setBackgroundCircleLayer:(CAShapeLayer *)arg1 ;
-(void)layoutSubviews;
-(CAShapeLayer *)countdownCircleLayer;
-(void)setMainLayer:(CALayer *)arg1 ;
-(void)setBackgroundBarColor:(UIColor *)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)setAnimationRemainingTime:(double)arg1 totalTime:(double)arg2 ;
-(double)degToRad:(double)arg1 ;
-(long long)state;
-(id)initWithBarColor:(id)arg1 backgroundBarColor:(id)arg2 barWidth:(double)arg3 ;
-(double)angleForValue:(double)arg1 total:(double)arg2 ;
-(double)duration;
-(void)resume;
-(void)setupBackgroundCircle;
@end

