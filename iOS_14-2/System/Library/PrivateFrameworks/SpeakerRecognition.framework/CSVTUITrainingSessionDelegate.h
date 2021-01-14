/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


@protocol CSVTUITrainingSessionDelegate <NSObject>
@optional
-(BOOL)CSVTUITrainingSession:(id)arg1 hasTrainUtterance:(id)arg2 languageCode:(id)arg3 payload:(BOOL)arg4;

@required
-(void)CSVTUITrainingSessionRMSAvailable:(float)arg1;
-(void)CSVTUITrainingSessionStopListen;

@end

