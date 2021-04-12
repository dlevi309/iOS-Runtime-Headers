/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSAudioStreamProviding <NSObject>
@required
-(BOOL)isRecording;
-(void)prepareAudioStream:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3;
-(id)UUID;
-(id)audioChunkToEndFrom:(unsigned long long)arg1;
-(id)recordRoute;
-(id)recordDeviceInfo;
-(id)audioChunkToEndFrom:(unsigned long long)arg1 channelIdx:(unsigned long long)arg2;
-(void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3;
-(void)stopAudioStream:(id)arg1 option:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)prepareAudioStreamSync:(id)arg1 request:(id)arg2 error:(id*)arg3;
-(void)cancelAudioStreamHold:(id)arg1;
-(id)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
-(BOOL)isNarrowBand;
-(id)holdAudioStreamWithDescription:(id)arg1 timeout:(double)arg2;
-(void)startAudioStream:(id)arg1 option:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)setCurrentContext:(id)arg1 error:(id*)arg2;
-(id)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 error:(id*)arg3;
-(void)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 completion:(/*^block*/id)arg3;
-(id)playbackRoute;
-(id)recordSettings;
-(void)saveRecordingBufferToEndFrom:(unsigned long long)arg1 toURL:(id)arg2;

@end

