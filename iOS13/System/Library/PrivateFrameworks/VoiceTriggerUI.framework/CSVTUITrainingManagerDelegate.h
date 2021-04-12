/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/


@protocol CSVTUITrainingManagerDelegate <NSObject>
@optional
-(void)VTUITrainingManagerFeedLevel:(float)arg1;
-(void)VTUITrainingManagerStopListening;
-(void)VTUITrainingManagerAudioSessionTerminatedInStatus:(int)arg1;
-(void)VTUITrainingManagerAudioSessionRouteChange;
-(BOOL)VTUITrainingManagerHasTrainUtterance:(id)arg1 languageCode:(id)arg2;

@end

