/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/

#import <libobjc.A.dylib/EARCaesuraSilencePosteriorGeneratorDelegate.h>

@protocol SSRVoiceActivityDetectorDelegate, OS_dispatch_queue;
@class SSRSpeakerRecognitionContext, EARCaesuraSilencePosteriorGenerator, _EAREndpointer, CSServerEndpointFeatures, NSObject, NSString;

@interface SSRVoiceActivityDetector : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate> {

	unsigned long long _numConsecutiveNonSilenceFrames;
	BOOL _endpointReported;
	BOOL _startpointReported;
	SSRSpeakerRecognitionContext* _context;
	id<SSRVoiceActivityDetectorDelegate> _delegate;
	EARCaesuraSilencePosteriorGenerator* _earSpg;
	_EAREndpointer* _hybridClassifier;
	CSServerEndpointFeatures* _defaultServerEpFeatures;
	long long _segmentStartPointSampleCount;
	unsigned long long _numSamplesProcessed;
	NSObject*<OS_dispatch_queue> _spgQueue;

}

@property (nonatomic,retain) SSRSpeakerRecognitionContext * context;                            //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<SSRVoiceActivityDetectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) EARCaesuraSilencePosteriorGenerator * earSpg;                      //@synthesize earSpg=_earSpg - In the implementation block
@property (nonatomic,retain) _EAREndpointer * hybridClassifier;                                 //@synthesize hybridClassifier=_hybridClassifier - In the implementation block
@property (nonatomic,retain) CSServerEndpointFeatures * defaultServerEpFeatures;                //@synthesize defaultServerEpFeatures=_defaultServerEpFeatures - In the implementation block
@property (assign,nonatomic) long long segmentStartPointSampleCount;                            //@synthesize segmentStartPointSampleCount=_segmentStartPointSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long numSamplesProcessed;                            //@synthesize numSamplesProcessed=_numSamplesProcessed - In the implementation block
@property (assign,nonatomic) BOOL endpointReported;                                             //@synthesize endpointReported=_endpointReported - In the implementation block
@property (assign,nonatomic) BOOL startpointReported;                                           //@synthesize startpointReported=_startpointReported - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> spgQueue;                             //@synthesize spgQueue=_spgQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SSRVoiceActivityDetectorDelegate>)delegate;
-(EARCaesuraSilencePosteriorGenerator *)earSpg;
-(SSRSpeakerRecognitionContext *)context;
-(void)setDelegate:(id<SSRVoiceActivityDetectorDelegate>)arg1 ;
-(id)initWithContext:(id)arg1 delegate:(id)arg2 ;
-(void)endAudio;
-(void)clientSilenceFeaturesAvailable:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)spgQueue;
-(void)setContext:(SSRSpeakerRecognitionContext *)arg1 ;
-(unsigned long long)numSamplesProcessed;
-(void)setNumSamplesProcessed:(unsigned long long)arg1 ;
-(void)resetWithContext:(id)arg1 ;
-(_EAREndpointer *)hybridClassifier;
-(void)setHybridClassifier:(_EAREndpointer *)arg1 ;
-(void)setSpgQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_initializeSPGWithContext:(id)arg1 ;
-(void)processAudioData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)setEarSpg:(EARCaesuraSilencePosteriorGenerator *)arg1 ;
-(CSServerEndpointFeatures *)defaultServerEpFeatures;
-(void)setDefaultServerEpFeatures:(CSServerEndpointFeatures *)arg1 ;
-(long long)segmentStartPointSampleCount;
-(void)setSegmentStartPointSampleCount:(long long)arg1 ;
-(BOOL)endpointReported;
-(void)setEndpointReported:(BOOL)arg1 ;
-(BOOL)startpointReported;
-(void)setStartpointReported:(BOOL)arg1 ;
@end

