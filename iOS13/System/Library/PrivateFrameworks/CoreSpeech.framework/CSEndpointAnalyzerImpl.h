/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

@class NSString;


@protocol CSEndpointAnalyzerImpl <CSEndpointAnalyzer>
@property (assign,nonatomic,__weak) id<CSEndpointAnalyzerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<CSEndpointAnalyzerImplDelegate> implDelegate; 
@property (nonatomic,readonly) BOOL canProcessCurrentRequest; 
@property (assign,nonatomic) unsigned long long activeChannel; 
@property (nonatomic,readonly) NSString * endpointerModelVersion; 
@property (nonatomic,readonly) double elapsedTimeWithNoSpeech; 
@optional
-(void)processServerEndpointFeatures:(id)arg1;
-(void)updateEndpointerThreshold:(float)arg1;
-(void)updateEndpointerDelayedTrigger:(BOOL)arg1;
-(void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(/*^block*/id)arg2;
-(void)handleVoiceTriggerWithActivationInfo:(id)arg1;
-(NSString *)endpointerModelVersion;
-(double)elapsedTimeWithNoSpeech;

@required
-(id<CSEndpointAnalyzerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(unsigned long long)activeChannel;
-(void)setActiveChannel:(unsigned long long)arg1;
-(void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 recordSettings:(id)arg3;
-(void)processAudioSamplesAsynchronously:(id)arg1;
-(void)stopEndpointer;
-(void)recordingStoppedForReason:(long long)arg1;
-(double)trailingSilenceDurationAtEndpoint;
-(id<CSEndpointAnalyzerImplDelegate>)implDelegate;
-(void)setImplDelegate:(id)arg1;
-(BOOL)canProcessCurrentRequest;

@end

