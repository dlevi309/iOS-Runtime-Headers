/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKAnalogHandsView.h>

@class NTKChronoPalette, NTKHandView;

@interface NTKChronoHandsView : NTKAnalogHandsView {

	BOOL _isChronoAnimationRunning;
	BOOL _minuteHandUsesManualTime;
	unsigned long long _timeScale;
	NTKChronoPalette* _palette;
	NTKHandView* _chronoSecondHandView;
	NTKHandView* _chronoFlybackSecondHandView;
	NTKHandView* _chronoMinuteHandView;
	NTKHandView* _chronoFlybackMinuteHandView;

}

@property (assign,nonatomic) unsigned long long timeScale;                             //@synthesize timeScale=_timeScale - In the implementation block
@property (nonatomic,retain) NTKChronoPalette * palette;                               //@synthesize palette=_palette - In the implementation block
@property (nonatomic,readonly) NTKHandView * chronoSecondHandView;                     //@synthesize chronoSecondHandView=_chronoSecondHandView - In the implementation block
@property (nonatomic,readonly) NTKHandView * chronoFlybackSecondHandView;              //@synthesize chronoFlybackSecondHandView=_chronoFlybackSecondHandView - In the implementation block
@property (nonatomic,readonly) NTKHandView * chronoMinuteHandView;                     //@synthesize chronoMinuteHandView=_chronoMinuteHandView - In the implementation block
@property (nonatomic,readonly) NTKHandView * chronoFlybackMinuteHandView;              //@synthesize chronoFlybackMinuteHandView=_chronoFlybackMinuteHandView - In the implementation block
@property (assign,nonatomic) BOOL minuteHandUsesManualTime;                            //@synthesize minuteHandUsesManualTime=_minuteHandUsesManualTime - In the implementation block
+(long long)preferredCountOfInstancesToCache;
-(void)layoutSubviews;
-(unsigned long long)timeScale;
-(NTKChronoPalette *)palette;
-(void)setPalette:(NTKChronoPalette *)arg1 ;
-(void)setTimeScale:(unsigned long long)arg1 ;
-(id)initForDevice:(id)arg1 ;
-(void)showTimeMode;
-(void)showChronoMode;
-(void)updateLapHandsVisibility;
-(void)_enumerateSecondHandViewsWithBlock:(/*^block*/id)arg1 ;
-(double)_stopwatchCurrentTime;
-(void)startNewChronoAnimation;
-(void)stopChronoAnimation;
-(void)_enumeratePrimaryChronoHands:(/*^block*/id)arg1 ;
-(BOOL)_stopwatchIsRunning;
-(double)_stopwatchCurrentLapTime;
-(double)chronoDuration;
-(double)upperDuration;
-(float)zRotationForTime:(double)arg1 withDuration:(float)arg2 ;
-(double)secondsAnimationFPS;
-(void)_enumerateChronoHandViews:(/*^block*/id)arg1 ;
-(BOOL)_stopwatchIsStopped;
-(long long)_stopwatchLapCount;
-(void)_enumerateFlybackChronoHands:(/*^block*/id)arg1 ;
-(NTKHandView *)chronoSecondHandView;
-(NTKHandView *)chronoFlybackSecondHandView;
-(void)setMinuteHandUsesManualTime:(BOOL)arg1 ;
-(NTKHandView *)chronoMinuteHandView;
-(NTKHandView *)chronoFlybackMinuteHandView;
-(BOOL)minuteHandUsesManualTime;
@end

