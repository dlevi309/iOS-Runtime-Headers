/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(long long)_type;
-(id)initWithType:(long long)arg1 ;
-(double)_lastUpdateTime;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(CAAnimationGroup *)_animationGroup;
-(float)torchLevel;
-(void)_updateAnimationGroup;
-(void)updateAtTime:(double)arg1 ;
-(id)_patternAnimationWithBeginTime:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3 ;
-(id)_blinkAnimationWithBeginTime:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3 ;
-(id)_shortPatternAnimationGroup;
-(id)_longPatternAnimationGroup;
-(id)_blinkAnimationGroup;
-(id)_doubleBlinkAnimationGroup;
@end

