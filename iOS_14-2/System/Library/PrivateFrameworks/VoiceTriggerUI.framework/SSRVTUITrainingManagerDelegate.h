/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/


@protocol SSRVTUITrainingManagerDelegate <NSObject>
@optional
-(void)VTUITrainingManagerFeedLevel:(float)arg1;
-(void)VTUITrainingManagerStopListening;
-(void)VTUITrainingManagerAudioSessionTerminatedInStatus:(int)arg1;
-(void)VTUITrainingManagerAudioSessionRouteChange;
-(BOOL)VTUITrainingManagerHasTrainUtterance:(id)arg1 languageCode:(id)arg2;

@end

