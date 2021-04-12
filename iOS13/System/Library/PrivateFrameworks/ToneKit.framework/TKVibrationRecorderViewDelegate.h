/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/


@protocol TKVibrationRecorderViewDelegate <NSObject>
@required
-(void)vibrationRecorderView:(id)arg1 buttonTappedWithIdentifier:(int)arg2;
-(void)vibrationComponentDidEndForVibrationRecorderView:(id)arg1;
-(void)vibrationComponentDidStartForVibrationRecorderView:(id)arg1;
-(void)vibrationRecorderViewDidFinishReplayingVibration:(id)arg1;
-(BOOL)vibrationRecorderViewDidEnterRecordingMode:(id)arg1;
-(void)vibrationRecorderView:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2;
-(void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(id)arg1;

@end

