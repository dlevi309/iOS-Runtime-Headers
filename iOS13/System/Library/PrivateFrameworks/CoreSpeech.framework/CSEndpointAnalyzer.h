/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSEndpointAnalyzer <NSObject>
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
@optional
-(long long)endpointMode;
-(void)setEndpointMode:(long long)arg1;
-(double)interspeechWaitTime;
-(void)setInterspeechWaitTime:(double)arg1;
-(double)endWaitTime;
-(void)setEndWaitTime:(double)arg1;
-(double)bypassSamples;
-(void)setBypassSamples:(double)arg1;
-(BOOL)saveSamplesSeenInReset;
-(void)setSaveSamplesSeenInReset:(BOOL)arg1;

@required
-(double)delay;
-(void)setDelay:(double)arg1;
-(void)reset;
-(void)preheat;
-(double)startWaitTime;
-(void)setStartWaitTime:(double)arg1;
-(double)lastStartOfVoiceActivityTime;
-(double)lastEndOfVoiceActivityTime;
-(void)setAutomaticEndpointingSuspensionEndTime:(double)arg1;
-(double)automaticEndpointingSuspensionEndTime;
-(double)minimumDurationForEndpointer;
-(void)setMinimumDurationForEndpointer:(double)arg1;
-(long long)endpointStyle;
-(void)setEndpointStyle:(long long)arg1;

@end

