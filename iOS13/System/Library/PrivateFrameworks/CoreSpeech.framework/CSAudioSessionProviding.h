/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSAudioSessionProviding <NSObject>
@required
-(void)enableMiniDucking:(BOOL)arg1;
-(void)setDuckOthersOption:(BOOL)arg1;
-(BOOL)duckOthersOption;
-(BOOL)activateAudioSessionWithReason:(unsigned long long)arg1 error:(id*)arg2;
-(BOOL)prewarmAudioSessionWithError:(id*)arg1;
-(BOOL)deactivateAudioSession:(unsigned long long)arg1 error:(id*)arg2;
-(void)setAudioSessionDelegate:(id)arg1;

@end

