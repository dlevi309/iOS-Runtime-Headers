/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol NviAudioDataReceiver <NviDataReceiver>
@property (nonatomic,readonly) BOOL receiveOnlyProcessedChannelData; 
@required
-(void)audioChunkAvailable:(id)arg1 numChannels:(unsigned long long)arg2 numSamplesPerChannel:(unsigned long long)arg3 startSampleId:(unsigned long long)arg4 atAbsMachTimestamp:(unsigned long long)arg5;
-(BOOL)receiveOnlyProcessedChannelData;

@end

