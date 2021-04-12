/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol _TVRXVoiceRecorderDelegate <NSObject>
@optional
-(void)voiceRecorder:(id)arg1 isAboutToBeginRecording:(/*^block*/id)arg2;
-(void)voidRecorderDidStop:(id)arg1;
-(id)createBufferWithSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maxPacketSize:(unsigned long long)arg3;
-(void)voiceRecorder:(id)arg1 bufferAvailable:(id)arg2;

@end

