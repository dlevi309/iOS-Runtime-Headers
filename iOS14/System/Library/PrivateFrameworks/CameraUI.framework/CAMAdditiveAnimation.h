/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class CAMediaTimingFunction;

@interface CAMAdditiveAnimation : NSObject {

	double __toValue;
	double __fromValue;
	double __duration;
	CAMediaTimingFunction* __curve;
	CAMAdditiveAnimation* __fromAnimation;
	double __startTime;
	double __lastTime;

}

@property (nonatomic,readonly) double _toValue;                                    //@synthesize _toValue=__toValue - In the implementation block
@property (assign,nonatomic) double _fromValue;                                    //@synthesize _fromValue=__fromValue - In the implementation block
@property (nonatomic,readonly) double _duration;                                   //@synthesize _duration=__duration - In the implementation block
@property (nonatomic,readonly) CAMediaTimingFunction * _curve;                     //@synthesize _curve=__curve - In the implementation block
@property (nonatomic,retain) CAMAdditiveAnimation * _fromAnimation;                //@synthesize _fromAnimation=__fromAnimation - In the implementation block
@property (assign,setter=_setStartTime:,nonatomic) double _startTime;              //@synthesize _startTime=__startTime - In the implementation block
@property (assign,setter=_setLastTime:,nonatomic) double _lastTime;                //@synthesize _lastTime=__lastTime - In the implementation block
@property (nonatomic,readonly) double value; 
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
+(id)animationToValue:(double)arg1 fromAnimation:(id)arg2 duration:(double)arg3 curve:(id)arg4 ;
+(id)animationToValue:(double)arg1 fromValue:(double)arg2 duration:(double)arg3 curve:(id)arg4 ;
-(void)updateWithTimestamp:(double)arg1 ;
-(void)_setStartTime:(double)arg1 ;
-(double)_toValue;
-(double)_startTime;
-(void)_setLastTime:(double)arg1 ;
-(BOOL)isFinished;
-(double)_fromValue;
-(id)description;
-(CAMediaTimingFunction *)_curve;
-(CAMAdditiveAnimation *)_fromAnimation;
-(double)_duration;
-(double)_lastTime;
-(double)value;
-(void)set_fromValue:(double)arg1 ;
-(void)set_fromAnimation:(CAMAdditiveAnimation *)arg1 ;
@end

