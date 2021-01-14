/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSEndpointAnalyzerDelegate.h>
#import <libobjc.A.dylib/CSEndpointAnalyzerImplDelegate.h>
#import <libobjc.A.dylib/CSEndpointAnalyzer.h>

@protocol CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImpl;
@class NSDictionary, NSString;

@interface CSEndpointerProxy : NSObject <CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate, CSEndpointAnalyzer> {

	BOOL _recordingDidStop;
	id<CSEndpointAnalyzerDelegate> _endpointerDelegate;
	id<CSEndpointAnalyzerImpl> _hybridEndpointer;
	id<CSEndpointAnalyzerImpl> _nnvadEndpointer;
	id<CSEndpointAnalyzerImpl> _activeEndpointer;
	NSDictionary* _recordContext;

}

@property (nonatomic,retain) id<CSEndpointAnalyzerImpl> hybridEndpointer;                           //@synthesize hybridEndpointer=_hybridEndpointer - In the implementation block
@property (nonatomic,retain) id<CSEndpointAnalyzerImpl> nnvadEndpointer;                            //@synthesize nnvadEndpointer=_nnvadEndpointer - In the implementation block
@property (assign,nonatomic,__weak) id<CSEndpointAnalyzerImpl> activeEndpointer;                    //@synthesize activeEndpointer=_activeEndpointer - In the implementation block
@property (nonatomic,retain) NSDictionary * recordContext;                                          //@synthesize recordContext=_recordContext - In the implementation block
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
-(void)preheat;
-(id)init;
-(void)setEndpointerDelegate:(id<CSEndpointAnalyzerDelegate>)arg1 ;
-(void)setDelay:(double)arg1 ;
-(double)endWaitTime;
-(long long)endpointMode;
-(double)startWaitTime;
-(void)setEndWaitTime:(double)arg1 ;
-(void)setEndpointMode:(long long)arg1 ;
-(void)setStartWaitTime:(double)arg1 ;
-(double)interspeechWaitTime;
-(void)setInterspeechWaitTime:(double)arg1 ;
-(double)delay;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(void)reset;
-(id<CSEndpointAnalyzerDelegate>)endpointerDelegate;
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
-(void)logHybridEndpointFeaturesWithEvent:(id)arg1 locale:(id)arg2 ;
-(void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 recordSettings:(id)arg3 voiceTriggerInfo:(id)arg4 ;
-(void)resetForVoiceTriggerTwoShotWithSampleRate:(unsigned long long)arg1 ;
-(unsigned long long)endPointAnalyzerType;
-(void)setRecordContext:(NSDictionary *)arg1 ;
-(NSDictionary *)recordContext;
-(BOOL)recordingDidStop;
-(void)setRecordingDidStop:(BOOL)arg1 ;
-(void)_setupNNVADEndpointer;
-(BOOL)isWatchRTSTriggered;
-(id<CSEndpointAnalyzerImpl>)hybridEndpointer;
-(void)setHybridEndpointer:(id<CSEndpointAnalyzerImpl>)arg1 ;
-(id<CSEndpointAnalyzerImpl>)nnvadEndpointer;
-(void)setNnvadEndpointer:(id<CSEndpointAnalyzerImpl>)arg1 ;
-(id<CSEndpointAnalyzerImpl>)activeEndpointer;
-(void)setActiveEndpointer:(id<CSEndpointAnalyzerImpl>)arg1 ;
@end

