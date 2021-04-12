/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSAudioStreamProvidingDelegate <NSObject>
@optional
-(void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;

@required
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;

@end

