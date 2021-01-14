/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SUICAudioPowerLevelDataSource;
@class UIColor, CADisplayLink, SUICAudioLevelSmoother, NSMutableArray;

@interface SUICDictationWaveView : UIView {

	UIColor* _pipColor;
	float _linearPowerLevel;
	float _runningVolumeSum;
	float _framesPerSecond;
	id<SUICAudioPowerLevelDataSource> _audioPowerLevelDataSource;
	CADisplayLink* _displayLink;
	float _numberOfFrames;
	float _initialOffset;
	SUICAudioLevelSmoother* _smoother;
	NSMutableArray* _pipLayers;
	CGRect _cachedFrame;
	float _powerLevel;

}

@property (assign,nonatomic) float powerLevel;              //@synthesize powerLevel=_powerLevel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(double)_leftMargin;
-(void)setPowerLevel:(float)arg1 ;
-(float)powerLevel;
-(void)layoutSubviews;
-(void)animateIn;
-(void)_tick:(id)arg1 ;
-(void)_resetPips;
-(void)_showPipsWithoutIntroAnimation;
-(void)_removeAllPips;
-(void)_addNewPips;
-(void)_startIntroAnimation;
-(unsigned long long)_numberOfPips;
-(CGRect)_startingFrameForPipAtIndex:(unsigned long long)arg1 ;
-(double)_heightForIntroAnimationPips;
-(void)_updatePipHeightAtIndex:(unsigned long long)arg1 withHeight:(double)arg2 ;
-(double)_intervalForEachPipAnimation;
-(void)_animateInPipsBetweenLeftIndex:(unsigned long long)arg1 rightIndex:(unsigned long long)arg2 ;
-(double)_originXForPipAtIndex:(unsigned long long)arg1 ;
-(double)_pipWidth;
-(double)_maximumPipHeight;
-(double)_minimumPipHeight;
-(float)_heightMultiplierForPipIndex:(unsigned long long)arg1 ;
-(void)_updatePipColor;
-(void)_updatePipHeights;
-(void)_introAnimationTick;
-(float)_smoothStepWithLowerBound:(float)arg1 upperBound:(float)arg2 innerValue:(float)arg3 ;
-(float)_noiseForPipIndex:(unsigned long long)arg1 ;
-(float)_sinusoidalTaperForPipIndex:(unsigned long long)arg1 ;
-(float)_smoothStepTaperForPipIndex:(unsigned long long)arg1 ;
-(void)setPipColor:(id)arg1 ;
-(void)setAudioPowerLevelDataSource:(id)arg1 ;
@end

