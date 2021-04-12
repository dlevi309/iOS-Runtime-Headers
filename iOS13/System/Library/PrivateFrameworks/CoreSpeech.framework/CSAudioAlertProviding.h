/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSAudioAlertProviding <NSObject>
@required
-(BOOL)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
-(BOOL)playAlertSoundForType:(long long)arg1;
-(BOOL)playRecordStartingAlertAndResetEndpointer;
-(void)configureAlertBehavior:(id)arg1;
-(unsigned long long)alertStartTime;
-(void)setAudioAlertDelegate:(id)arg1;

@end

