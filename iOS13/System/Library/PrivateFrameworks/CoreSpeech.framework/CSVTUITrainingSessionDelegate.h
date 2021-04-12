/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSVTUITrainingSessionDelegate <NSObject>
@optional
-(BOOL)CSVTUITrainingSession:(id)arg1 hasTrainUtterance:(id)arg2 languageCode:(id)arg3 payload:(BOOL)arg4;

@required
-(void)CSVTUITrainingSessionRMSAvailable:(float)arg1;
-(void)CSVTUITrainingSessionStopListen;

@end

