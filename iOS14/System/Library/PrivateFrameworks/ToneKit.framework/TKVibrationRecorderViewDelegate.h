/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

