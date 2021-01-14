/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


@protocol CSVTUIAudioSession
@required
-(void)stopRecording;
-(BOOL)startRecording;
-(BOOL)isRecording;
-(void)setEndpointerDelegate:(id)arg1;
-(void)releaseAudioSession;
-(void)updateMeters;
-(void)setDelegate:(id)arg1;
-(BOOL)hasAudioRoute;
-(float)averagePower;
-(unsigned long long)audioSource;
-(BOOL)prepareRecord;
-(void)resetEndPointer;
-(BOOL)hasCorrectAudioRoute;

@end

