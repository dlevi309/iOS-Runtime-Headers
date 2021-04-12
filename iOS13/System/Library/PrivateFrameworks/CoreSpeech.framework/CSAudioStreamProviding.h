/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSAudioStreamProviding <NSObject>
@required
-(id)UUID;
-(BOOL)isRecording;
-(id)recordRoute;
-(BOOL)setCurrentContext:(id)arg1 error:(id*)arg2;
-(id)recordSettings;
-(id)playbackRoute;
-(void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3;
-(id)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 error:(id*)arg3;
-(id)holdAudioStreamWithDescription:(id)arg1 timeout:(double)arg2;
-(void)cancelAudioStreamHold:(id)arg1;
-(BOOL)isNarrowBand;
-(id)recordDeviceInfo;
-(void)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)prepareAudioStreamSync:(id)arg1 request:(id)arg2 error:(id*)arg3;
-(void)prepareAudioStream:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3;
-(void)startAudioStream:(id)arg1 option:(id)arg2 completion:(/*^block*/id)arg3;
-(void)stopAudioStream:(id)arg1 option:(id)arg2 completion:(/*^block*/id)arg3;
-(id)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
-(id)audioChunkToEndFrom:(unsigned long long)arg1;
-(void)saveRecordingBufferToEndFrom:(unsigned long long)arg1 toURL:(id)arg2;

@end

