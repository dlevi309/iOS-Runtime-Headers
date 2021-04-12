/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSVTUITrainingSession.h>
#import <libobjc.A.dylib/SFSpeechRecognitionTaskDelegate.h>
#import <libobjc.A.dylib/CSVTUIAudioSessionDelegate.h>
#import <libobjc.A.dylib/CSVTUIEndPointDelegate.h>

@class NSDictionary, NSString;

@interface CSVTUITrainingSessionWithPayload : CSVTUITrainingSession <SFSpeechRecognitionTaskDelegate, CSVTUIAudioSessionDelegate, CSVTUIEndPointDelegate> {

	BOOL _detectBOS;
	BOOL _ASRResultReceived;
	BOOL _reportedStopListening;
	BOOL _utteranceStored;
	unsigned long long _numSamplesFed;
	unsigned long long _bestTriggerSampleStart;
	unsigned long long _extraSamplesAtStart;
	NSDictionary* _voiceTriggerEventInfo;

}

@property (nonatomic,retain) NSDictionary * voiceTriggerEventInfo;              //@synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)voiceTriggerEventInfo;
-(void)setVoiceTriggerEventInfo:(NSDictionary *)arg1 ;
-(void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2 ;
-(void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2 ;
-(void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(BOOL)arg2 ;
-(void)startTraining;
-(void)audioSessionDidStartRecording:(BOOL)arg1 error:(id)arg2 ;
-(void)audioSessionDidStopRecording:(long long)arg1 ;
-(void)audioSessionRecordBufferAvailable:(id)arg1 ;
-(void)audioSessionErrorDidOccur:(id)arg1 ;
-(void)audioSessionUnsupportedAudioRoute;
-(void)didDetectBeginOfSpeech;
-(void)didDetectEndOfSpeech:(long long)arg1 ;
-(void)closeSessionWithStatus:(int)arg1 successfully:(BOOL)arg2 ;
-(void)handleAudioInput:(id)arg1 ;
-(void)_registerEndPointTimeout;
-(void)_firedVoiceTriggerTimeout;
-(BOOL)shouldHandleSession;
-(BOOL)shouldMatchPayload;
-(void)_firedEndPointTimeout;
-(void)_registerVoiceTriggerTimeout;
-(void)_reportStopListening;
-(void)_registerForceEndPointTimeout;
-(void)matchRecognitionResult:(id)arg1 withMatchedBlock:(/*^block*/id)arg2 withNonMatchedBlock:(/*^block*/id)arg3 ;
@end

