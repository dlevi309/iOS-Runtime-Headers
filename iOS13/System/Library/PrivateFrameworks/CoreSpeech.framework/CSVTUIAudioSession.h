/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSVTUIAudioSession
@required
-(void)setDelegate:(id)arg1;
-(float)averagePower;
-(void)stopRecording;
-(BOOL)isRecording;
-(unsigned long long)audioSource;
-(BOOL)hasAudioRoute;
-(void)releaseAudioSession;
-(BOOL)startRecording;
-(void)setEndpointerDelegate:(id)arg1;
-(void)updateMeters;
-(BOOL)prepareRecord;
-(BOOL)hasCorrectAudioRoute;
-(void)resetEndPointer;

@end

