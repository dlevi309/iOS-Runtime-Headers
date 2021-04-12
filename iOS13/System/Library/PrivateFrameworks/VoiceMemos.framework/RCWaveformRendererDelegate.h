/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/


@protocol RCWaveformRendererDelegate <NSObject>
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) id<RCTimeController> activeTimeController; 
@property (assign,nonatomic) double desiredTimeDeltaForVisibleTimeRange; 
@required
-(double)duration;
-(double)currentTime;
-(BOOL)isZooming;
-(void)setCurrentTime:(double)arg1;
-(id<RCTimeController>)activeTimeController;
-(void)waveformRenderer:(id)arg1 contentWidthDidChange:(double)arg2;
-(double)desiredTimeDeltaForVisibleTimeRange;
-(void)setDesiredTimeDeltaForVisibleTimeRange:(double)arg1;

@end

