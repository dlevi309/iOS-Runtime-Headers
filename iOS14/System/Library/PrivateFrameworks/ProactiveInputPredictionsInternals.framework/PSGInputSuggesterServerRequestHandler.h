/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictionsInternals.framework/ProactiveInputPredictionsInternals
*/

#import <libobjc.A.dylib/PSGInputSuggesterProtocol.h>

@protocol PSGInputSuggesterProtocol;
@class PSGExperimentResolver, PSGInputSuggesterMetricsLogger, NSString, _PASBundleIdResolver;

@interface PSGInputSuggesterServerRequestHandler : NSObject <PSGInputSuggesterProtocol> {

	id<PSGInputSuggesterProtocol> _clientProxy;
	PSGExperimentResolver* _experimentResolver;
	PSGInputSuggesterMetricsLogger* _metricsLogger;
	NSString* _clientProcessName;
	_PASBundleIdResolver* _bundleIdResolver;

}

@property (nonatomic,copy) NSString * clientProcessName;                           //@synthesize clientProcessName=_clientProcessName - In the implementation block
@property (nonatomic,retain) _PASBundleIdResolver * bundleIdResolver;              //@synthesize bundleIdResolver=_bundleIdResolver - In the implementation block
-(void)inputSuggestionsWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)logErrorForRequest:(id)arg1 trigger:(id)arg2 errorType:(unsigned char)arg3 ;
-(id)init;
-(_PASBundleIdResolver *)bundleIdResolver;
-(NSString *)clientProcessName;
-(void)warmUpWithCompletion:(/*^block*/id)arg1 ;
-(id)_zkwResponseForRequest:(id)arg1 config:(id)arg2 ;
-(void)setClientProcessName:(NSString *)arg1 ;
-(void)setRemoteObjectProxy:(id)arg1 ;
-(void)logTrigger:(id)arg1 request:(id)arg2 ;
-(id)_quickTypeTriggerForContext:(id)arg1 localeIdentifier:(id)arg2 modelConfigPath:(id)arg3 espressoBinFilePath:(id)arg4 ;
-(void)logImpression:(id)arg1 request:(id)arg2 ;
-(id)_wordBoundaryResponseForRequest:(id)arg1 config:(id)arg2 ;
-(void)logSpeedMetricForLocaleIdentifier:(id)arg1 messageDurationMilliseconds:(int)arg2 messageLength:(int)arg3 messageWords:(int)arg4 ;
-(void)setBundleIdResolver:(_PASBundleIdResolver *)arg1 ;
-(void)_logRequest:(id)arg1 config:(id)arg2 ;
-(id)_quickResponsesForResponseContext:(id)arg1 conversationTurns:(id)arg2 localeIdentifier:(id)arg3 maxResponses:(unsigned long long)arg4 recipients:(id)arg5 chunkPath:(id)arg6 plistPath:(id)arg7 espressoBinFilePath:(id)arg8 ;
-(void)logEngagement:(id)arg1 request:(id)arg2 position:(unsigned long long)arg3 ;
-(void)logPrediction:(id)arg1 request:(id)arg2 latencyMillis:(double)arg3 ;
-(id)initWithExperimentResolver:(id)arg1 metricsLogger:(id)arg2 ;
-(id)_getExperimentConfigForLogging:(id)arg1 ;
@end

