/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSAudioSessionProvidingDelegate <NSObject>
@optional
-(void)audioSessionProviderBeginInterruption:(id)arg1;
-(void)audioSessionProviderBeginInterruption:(id)arg1 withContext:(id)arg2;
-(void)audioSessionProviderEndInterruption:(id)arg1;
-(void)audioSessionProvider:(id)arg1 willSetAudioSessionActive:(BOOL)arg2;
-(void)audioSessionProvider:(id)arg1 didSetAudioSessionActive:(BOOL)arg2;
-(void)audioSessionProvider:(id)arg1 providerInvalidated:(BOOL)arg2;
-(void)audioSessionProvider:(id)arg1 didChangeContext:(BOOL)arg2;

@end

