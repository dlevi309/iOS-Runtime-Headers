/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSAudioInjectionEngineDelegate <NSObject>
@required
-(void)audioEngineDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(BOOL)arg3 error:(id)arg4;
-(void)audioEngineDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(unsigned long long)arg3;
-(void)audioEngineBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5;
-(void)audioEngineAudioChunkForTvAvailable:(id)arg1 audioChunk:(id)arg2;

@end

