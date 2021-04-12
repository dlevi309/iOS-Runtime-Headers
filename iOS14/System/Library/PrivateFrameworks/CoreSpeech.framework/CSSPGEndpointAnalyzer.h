/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/EARCaesuraSilencePosteriorGeneratorDelegate.h>

@protocol CSSPGEndpointAnalyzerDelegate, OS_dispatch_queue;
@class NSObject, EARCaesuraSilencePosteriorGenerator, NSString;

@interface CSSPGEndpointAnalyzer : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate> {

	BOOL _hasReported;
	BOOL _isAnalyzeMode;
	float _endpointThreshold;
	id<CSSPGEndpointAnalyzerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	EARCaesuraSilencePosteriorGenerator* _caesuraSPG;
	double _lastSilencePosterior;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) EARCaesuraSilencePosteriorGenerator * caesuraSPG;               //@synthesize caesuraSPG=_caesuraSPG - In the implementation block
@property (assign,nonatomic) float endpointThreshold;                                        //@synthesize endpointThreshold=_endpointThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasReported;                                               //@synthesize hasReported=_hasReported - In the implementation block
@property (assign,nonatomic) BOOL isAnalyzeMode;                                             //@synthesize isAnalyzeMode=_isAnalyzeMode - In the implementation block
@property (assign,nonatomic) double lastSilencePosterior;                                    //@synthesize lastSilencePosterior=_lastSilencePosterior - In the implementation block
@property (assign,nonatomic,__weak) id<CSSPGEndpointAnalyzerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<CSSPGEndpointAnalyzerDelegate>)delegate;
-(void)start;
-(void)stop;
-(void)setDelegate:(id<CSSPGEndpointAnalyzerDelegate>)arg1 ;
-(void)reset;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)clientSilenceFeaturesAvailable:(id)arg1 ;
-(void)silenceDurationEstimateAvailable:(float*)arg1 numEstimates:(unsigned long long)arg2 clientProcessedAudioMs:(float)arg3 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)initWithAnalyzeMode;
-(long long)getFrameDurationMs;
-(id)initWithEndpointThreshold:(float)arg1 ;
-(EARCaesuraSilencePosteriorGenerator *)caesuraSPG;
-(void)setCaesuraSPG:(EARCaesuraSilencePosteriorGenerator *)arg1 ;
-(float)endpointThreshold;
-(void)setEndpointThreshold:(float)arg1 ;
-(BOOL)hasReported;
-(void)setHasReported:(BOOL)arg1 ;
-(BOOL)isAnalyzeMode;
-(void)setIsAnalyzeMode:(BOOL)arg1 ;
-(double)lastSilencePosterior;
-(void)setLastSilencePosterior:(double)arg1 ;
@end

