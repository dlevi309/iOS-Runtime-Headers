/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSEndpointAnalyzerDelegate.h>
#import <libobjc.A.dylib/CSEndpointAnalyzerImplDelegate.h>
#import <libobjc.A.dylib/CSEndpointAnalyzer.h>

@protocol CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImpl;
@class NSString;

@interface CSEndpointerProxy : NSObject <CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate, CSEndpointAnalyzer> {

	BOOL _recordingDidStop;
	id<CSEndpointAnalyzerDelegate> _endpointerDelegate;
	id<CSEndpointAnalyzerImpl> _hybridEndpointer;
	id<CSEndpointAnalyzerImpl> _nnvadEndpointer;
	id<CSEndpointAnalyzerImpl> _activeEndpointer;

}

@property (nonatomic,retain) id<CSEndpointAnalyzerImpl> hybridEndpointer;                           //@synthesize hybridEndpointer=_hybridEndpointer - In the implementation block
@property (nonatomic,retain) id<CSEndpointAnalyzerImpl> nnvadEndpointer;                            //@synthesize nnvadEndpointer=_nnvadEndpointer - In the implementation block
@property (assign,nonatomic,__weak) id<CSEndpointAnalyzerImpl> activeEndpointer;                    //@synthesize activeEndpointer=_activeEndpointer - In the implementation block
@property (assign,nonatomic) BOOL recordingDidStop;                                                 //@synthesize recordingDidStop=_recordingDidStop - In the implementation block
@property (assign,nonatomic,__weak) id<CSEndpointAnalyzerDelegate> endpointerDelegate;              //@synthesize endpointerDelegate=_endpointerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long endpointStyle; 
@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) double startWaitTime; 
@property (assign,nonatomic) double automaticEndpointingSuspensionEndTime; 
@property (assign,nonatomic) double minimumDurationForEndpointer; 
@property (nonatomic,readonly) double lastEndOfVoiceActivityTime; 
@property (nonatomic,readonly) double lastStartOfVoiceActivityTime; 
@property (assign,nonatomic) double bypassSamples; 
@property (assign,nonatomic) long long endpointMode; 
@property (assign,nonatomic) double interspeechWaitTime; 
@property (assign,nonatomic) double endWaitTime; 
@property (assign,nonatomic) BOOL saveSamplesSeenInReset; 
-(id)init;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(void)reset;
-(void)preheat;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(id<CSEndpointAnalyzerDelegate>)endpointerDelegate;
-(void)setEndpointerDelegate:(id<CSEndpointAnalyzerDelegate>)arg1 ;
-(long long)endpointMode;
-(void)setEndpointMode:(long long)arg1 ;
-(double)startWaitTime;
-(void)setStartWaitTime:(double)arg1 ;
-(double)interspeechWaitTime;
-(void)setInterspeechWaitTime:(double)arg1 ;
-(double)endWaitTime;
-(void)setEndWaitTime:(double)arg1 ;
-(double)lastStartOfVoiceActivityTime;
-(double)lastEndOfVoiceActivityTime;
-(void)setAutomaticEndpointingSuspensionEndTime:(double)arg1 ;
-(double)automaticEndpointingSuspensionEndTime;
-(double)minimumDurationForEndpointer;
-(void)setMinimumDurationForEndpointer:(double)arg1 ;
-(void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3 ;
-(void)endpointer:(id)arg1 didDetectStartpointAtTime:(double)arg2 ;
-(void)endpointer:(id)arg1 detectedTwoShotAtTime:(double)arg2 ;
-(long long)endpointStyle;
-(void)setEndpointStyle:(long long)arg1 ;
-(BOOL)saveSamplesSeenInReset;
-(void)setSaveSamplesSeenInReset:(BOOL)arg1 ;
-(void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 recordSettings:(id)arg3 ;
-(void)processAudioSamplesAsynchronously:(id)arg1 ;
-(void)stopEndpointer;
-(void)recordingStoppedForReason:(long long)arg1 ;
-(double)trailingSilenceDurationAtEndpoint;
-(void)processServerEndpointFeatures:(id)arg1 ;
-(void)updateEndpointerThreshold:(float)arg1 ;
-(void)updateEndpointerDelayedTrigger:(BOOL)arg1 ;
-(void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(/*^block*/id)arg2 ;
-(id)endpointerModelVersion;
-(double)elapsedTimeWithNoSpeech;
-(void)resetForVoiceTriggerTwoShotWithSampleRate:(unsigned long long)arg1 ;
-(unsigned long long)endPointAnalyzerType;
-(BOOL)recordingDidStop;
-(void)setRecordingDidStop:(BOOL)arg1 ;
-(void)_setupNNVADEndpointer;
-(id<CSEndpointAnalyzerImpl>)hybridEndpointer;
-(void)setHybridEndpointer:(id<CSEndpointAnalyzerImpl>)arg1 ;
-(id<CSEndpointAnalyzerImpl>)nnvadEndpointer;
-(void)setNnvadEndpointer:(id<CSEndpointAnalyzerImpl>)arg1 ;
-(id<CSEndpointAnalyzerImpl>)activeEndpointer;
-(void)setActiveEndpointer:(id<CSEndpointAnalyzerImpl>)arg1 ;
@end

