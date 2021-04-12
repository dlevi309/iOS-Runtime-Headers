/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/


@protocol PREResponsesTrialProtocol, PREResponsesMetricsProtocol, PREResponsesProtocol;
@class NSObject, RKMessageResponseManager, _PASLock, PREResponsesGeneratedEvent;

@interface PREResponsesExperiment : NSObject {

	NSObject*<PREResponsesTrialProtocol> _trial;
	NSObject*<PREResponsesMetricsProtocol> _metrics;
	NSObject*<PREResponsesProtocol> _xpcClient;
	RKMessageResponseManager* _rkClient;
	_PASLock* _cacheLock;
	PREResponsesGeneratedEvent* _cachedResponsesGeneratedEvent;
	BOOL _registerDisplayed;

}

@property (assign,nonatomic) BOOL registerDisplayed;              //@synthesize registerDisplayed=_registerDisplayed - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)activeExperimentName;
-(id)initWithTrialClient:(id)arg1 metricsClient:(id)arg2 xpcClient:(id)arg3 rkClient:(id)arg4 ;
-(id)clippedMessageIfNecessary:(id)arg1 ;
-(id)cacheKeyForMessage:(id)arg1 maxResponses:(unsigned long long)arg2 time:(id)arg3 language:(id)arg4 ;
-(id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 options:(unsigned long long)arg7 ;
-(void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 options:(unsigned long long)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)preResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 options:(unsigned long long)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)registerResponse:(id)arg1 forMessage:(id)arg2 time:(id)arg3 metadata:(id)arg4 withLanguage:(id)arg5 ;
-(void)primeResponsesExperimentsIfNeeded;
-(id)responsesCacheLock;
-(void)registerImpressionWithPreResponseItems:(id)arg1 language:(id)arg2 isCached:(BOOL)arg3 responseTimePerf:(unsigned long long)arg4 promptMessage:(id)arg5 generationStatus:(int)arg6 ;
-(id)waitForPreResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 options:(unsigned long long)arg7 ;
-(id)stringArrayFromConversationTurns:(id)arg1 ;
-(id)stringArrayFromPreResponseItems:(id)arg1 ;
-(BOOL)shouldUseDefaultRKTreatment;
-(id)inputMethodStringFrom:(int)arg1 ;
-(int)preInputMethodFrom:(id)arg1 ;
-(BOOL)isStringEmpty:(id)arg1 ;
-(BOOL)registerDisplayed;
-(void)setRegisterDisplayed:(BOOL)arg1 ;
@end

