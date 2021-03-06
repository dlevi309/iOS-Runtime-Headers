/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/


@protocol PREResponsesTrialProtocol, PREResponsesMetricsProtocol, PREResponsesProtocol;
@class NSObject, RKMessageResponseManager, _PASLRUCache, PREResponsesGeneratedEvent;

@interface PREResponsesExperiment : NSObject {

	NSObject*<PREResponsesTrialProtocol> _trial;
	NSObject*<PREResponsesMetricsProtocol> _metrics;
	NSObject*<PREResponsesProtocol> _xpcClient;
	RKMessageResponseManager* _rkClient;
	_PASLRUCache* _cache;
	PREResponsesGeneratedEvent* _cachedResponsesGeneratedEvent;
	BOOL _registerDisplayed;

}

@property (assign,nonatomic) BOOL registerDisplayed;              //@synthesize registerDisplayed=_registerDisplayed - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)initWithTrialClient:(id)arg1 metricsClient:(id)arg2 xpcClient:(id)arg3 rkClient:(id)arg4 ;
-(id)clippedMessageIfNecessary:(id)arg1 ;
-(id)cacheKeyForMessage:(id)arg1 maxResponses:(unsigned long long)arg2 time:(id)arg3 language:(id)arg4 ;
-(id)activeExperimentName;
-(id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 recipients:(id)arg7 options:(unsigned long long)arg8 ;
-(id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 recipientHandles:(id)arg7 options:(unsigned long long)arg8 ;
-(void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 recipients:(id)arg7 options:(unsigned long long)arg8 completionBlock:(/*^block*/id)arg9 ;
-(void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 recipientHandles:(id)arg7 options:(unsigned long long)arg8 completionBlock:(/*^block*/id)arg9 ;
-(void)preResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 recipientHandles:(id)arg7 options:(unsigned long long)arg8 completionBlock:(/*^block*/id)arg9 ;
-(void)registerResponse:(id)arg1 forMessage:(id)arg2 time:(id)arg3 metadata:(id)arg4 withLanguage:(id)arg5 ;
-(void)primeResponsesExperimentsIfNeeded;
-(id)responsesCache;
-(void)registerImpressionWithPreResponseItems:(id)arg1 language:(id)arg2 isCached:(BOOL)arg3 responseTimePerf:(unsigned long long)arg4 promptMessage:(id)arg5 generationStatus:(int)arg6 ;
-(id)waitForPreResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 recipientHandles:(id)arg7 options:(unsigned long long)arg8 ;
-(id)stringArrayFromConversationTurns:(id)arg1 ;
-(id)stringArrayFromPreResponseItems:(id)arg1 ;
-(id)handlesFromRecipients:(id)arg1 ;
-(BOOL)shouldUseDefaultRKTreatment;
-(id)inputMethodStringFrom:(int)arg1 ;
-(int)preInputMethodFrom:(id)arg1 ;
-(BOOL)isStringEmpty:(id)arg1 ;
-(BOOL)registerDisplayed;
-(void)setRegisterDisplayed:(BOOL)arg1 ;
@end

