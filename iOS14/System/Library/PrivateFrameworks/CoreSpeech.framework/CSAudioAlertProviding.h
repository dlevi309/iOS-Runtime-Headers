/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSAudioAlertProviding <NSObject>
@required
-(BOOL)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
-(unsigned long long)alertStartTime;
-(void)configureAlertBehavior:(id)arg1;
-(BOOL)playRecordStartingAlertAndResetEndpointer;
-(void)setAudioAlertDelegate:(id)arg1;
-(BOOL)playAlertSoundForType:(long long)arg1;

@end

