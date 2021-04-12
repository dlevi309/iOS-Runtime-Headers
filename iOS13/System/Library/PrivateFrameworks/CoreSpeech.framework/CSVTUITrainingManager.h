/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSVTUITrainingSessionDelegate.h>
#import <libobjc.A.dylib/CSVTUIAudioSessionDelegate.h>
#import <libobjc.A.dylib/CSEndpointAnalyzerDelegate.h>

@protocol CSVTUIAudioSession, OS_dispatch_queue, CSVTUITrainingManagerDelegate;
@class NSString, CSNNVADEndpointAnalyzer, CSVTUIKeywordDetector, NSMutableArray, CSVTUITrainingSession, NSObject, SFSpeechRecognizer, CSAsset;

@interface CSVTUITrainingManager : NSObject <CSVTUITrainingSessionDelegate, CSVTUIAudioSessionDelegate, CSEndpointAnalyzerDelegate> {

	BOOL _performRMS;
	NSString* _locale;
	id<CSVTUIAudioSession> _audioSession;
	CSNNVADEndpointAnalyzer* _audioAnalyzer;
	CSVTUIKeywordDetector* _keywordDetector;
	NSMutableArray* _trainingSessions;
	CSVTUITrainingSession* _currentTrainingSession;
	long long _sessionNumber;
	BOOL _suspendAudio;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _cleanupCompletion;
	SFSpeechRecognizer* _speechRecognizer;
	CSAsset* _currentAsset;
	BOOL _speechRecognizerAvailable;
	float _rms;
	id<CSVTUITrainingManagerDelegate> _delegate;

}

@property (assign) float rms;                                                                //@synthesize rms=_rms - In the implementation block
@property (assign,nonatomic,__weak) id<CSVTUITrainingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL speechRecognizerAvailable;                                         //@synthesize speechRecognizerAvailable=_speechRecognizerAvailable - In the implementation block
@property (readonly) unsigned long long audioSource; 
@property (assign) BOOL suspendAudio; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedtrainingSessionQueue;
+(id)trainingManagerWithLocaleID:(id)arg1 ;
-(id<CSVTUITrainingManagerDelegate>)delegate;
-(void)setDelegate:(id<CSVTUITrainingManagerDelegate>)arg1 ;
-(void)reset;
-(unsigned long long)audioSource;
-(unsigned long long)_audioSource;
-(void)setLocaleIdentifier:(id)arg1 ;
-(void)prepareWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_startAudioSession;
-(void)_stopAudioSession;
-(BOOL)_setupAudioSession;
-(void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3 ;
-(void)endpointer:(id)arg1 didDetectStartpointAtTime:(double)arg2 ;
-(id)initWithLocaleIdentifier:(id)arg1 withAudioSession:(id)arg2 ;
-(BOOL)createKeywordDetector;
-(void)destroySpeakerTrainer;
-(void)_destroyAudioSession;
-(void)closeSessionBeforeStartWithStatus:(int)arg1 successfully:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)_createAudioAnalyzer;
-(BOOL)_shouldShowHeadsetDisconnectionMessage;
-(void)createSpeechRecognizer;
-(void)audioSessionDidStartRecording:(BOOL)arg1 error:(id)arg2 ;
-(void)audioSessionDidStopRecording:(long long)arg1 ;
-(void)audioSessionRecordBufferAvailable:(id)arg1 ;
-(void)audioSessionErrorDidOccur:(id)arg1 ;
-(void)audioSessionUnsupportedAudioRoute;
-(void)CSVTUITrainingSessionRMSAvailable:(float)arg1 ;
-(void)CSVTUITrainingSessionStopListen;
-(BOOL)CSVTUITrainingSession:(id)arg1 hasTrainUtterance:(id)arg2 languageCode:(id)arg3 payload:(BOOL)arg4 ;
-(void)_beginOfSpeechDetected;
-(void)_endOfSpeechDetected;
-(id)cleanupWithCompletion:(/*^block*/id)arg1 ;
-(long long)trainUtterance:(long long)arg1 shouldUseASR:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)cancelTrainingForID:(long long)arg1 ;
-(BOOL)suspendAudio;
-(void)setSuspendAudio:(BOOL)arg1 ;
-(void)startRMS;
-(void)stopRMS;
-(BOOL)shouldPerformRMS;
-(void)didDetectForceEndPoint;
-(float)rms;
-(void)setRms:(float)arg1 ;
-(BOOL)speechRecognizerAvailable;
@end

