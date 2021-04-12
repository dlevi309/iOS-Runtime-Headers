/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/

#import <SpeakerRecognition/CSVTUITrainingSession.h>
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
-(void)audioSessionDidStopRecording:(long long)arg1 ;
-(void)audioSessionRecordBufferAvailable:(id)arg1 ;
-(void)audioSessionDidStartRecording:(BOOL)arg1 error:(id)arg2 ;
-(void)audioSessionErrorDidOccur:(id)arg1 ;
-(void)audioSessionUnsupportedAudioRoute;
-(void)startTraining;
-(void)didDetectBeginOfSpeech;
-(void)didDetectEndOfSpeech:(long long)arg1 ;
-(void)_firedVoiceTriggerTimeout;
-(BOOL)shouldHandleSession;
-(BOOL)shouldMatchPayload;
-(void)closeSessionWithStatus:(int)arg1 successfully:(BOOL)arg2 ;
-(void)_firedEndPointTimeout;
-(void)_registerVoiceTriggerTimeout;
-(void)handleAudioInput:(id)arg1 ;
-(void)_reportStopListening;
-(void)_registerEndPointTimeout;
-(void)_registerForceEndPointTimeout;
-(void)matchRecognitionResult:(id)arg1 withMatchedBlock:(/*^block*/id)arg2 withNonMatchedBlock:(/*^block*/id)arg3 ;
-(void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2 ;
-(void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2 ;
-(void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(BOOL)arg2 ;
@end

