/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class CAAnimationGroup;

@interface CAMTorchPattern : NSObject {

	float _torchLevel;
	long long __type;
	CAAnimationGroup* __animationGroup;
	double __lastUpdateTime;
	double _startTime;

}

@property (nonatomic,readonly) long long _type;                                 //@synthesize _type=__type - In the implementation block
@property (nonatomic,readonly) CAAnimationGroup * _animationGroup;              //@synthesize _animationGroup=__animationGroup - In the implementation block
@property (nonatomic,readonly) double _lastUpdateTime;                          //@synthesize _lastUpdateTime=__lastUpdateTime - In the implementation block
@property (assign,nonatomic) double startTime;                                  //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) float torchLevel;                                //@synthesize torchLevel=_torchLevel - In the implementation block
-(long long)_type;
-(id)initWithType:(long long)arg1 ;
-(id)init;
-(void)setStartTime:(double)arg1 ;
-(double)_lastUpdateTime;
-(void)_updateAnimationGroup;
-(float)torchLevel;
-(double)startTime;
-(CAAnimationGroup *)_animationGroup;
-(id)_patternAnimationWithBeginTime:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3 ;
-(id)_blinkAnimationWithBeginTime:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3 ;
-(id)_shortPatternAnimationGroup;
-(id)_longPatternAnimationGroup;
-(id)_blinkAnimationGroup;
-(id)_doubleBlinkAnimationGroup;
-(void)updateAtTime:(double)arg1 ;
@end

