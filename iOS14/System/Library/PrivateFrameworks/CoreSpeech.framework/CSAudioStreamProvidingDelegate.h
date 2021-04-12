/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSAudioStreamProvidingDelegate <NSObject>
@optional
-(void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;

@required
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;

@end

