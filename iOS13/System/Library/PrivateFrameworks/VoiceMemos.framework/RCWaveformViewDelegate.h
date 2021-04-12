/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/


@protocol RCWaveformViewDelegate <NSObject>
@property (nonatomic,retain,readonly) id<RCTimeController> activeTimeController; 
@required
-(id<RCTimeController>)activeTimeController;
-(void)waveformViewController:(id)arg1 didScrubToTime:(double)arg2 finished:(BOOL)arg3;
-(void)waveformViewControllerWillBeginEditingSelectedTimeRange:(id)arg1;
-(void)waveformViewControllerDidEndEditingSelectedTimeRange:(id)arg1;
-(void)waveformViewController:(id)arg1 didChangeToSelectedTimeRange:(SCD_Struct_RC2)arg2;

@end

