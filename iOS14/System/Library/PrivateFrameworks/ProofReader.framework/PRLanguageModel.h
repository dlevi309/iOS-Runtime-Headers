/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/


@class NSString, PRLexicon;

@interface PRLanguageModel : NSObject {

	NSString* _localization;
	NSString* _appIdentifier;
	void* _model;
	PRLexicon* _lexicon;

}
+(void)setLogLevel:(long long)arg1 ;
+(void)performMaintenance;
+(id)languageModelWithLocalization:(id)arg1 appIdentifier:(id)arg2 lexicon:(id)arg3 ;
-(id)appIdentifier;
-(id)description;
-(unsigned)tokenIDForString:(id)arg1 ;
-(void)enumerateCompletionEntriesForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)reset;
-(void)enumerateEntriesForString:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateCompletionsForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)localization;
-(void)dealloc;
-(id)stringForTokenID:(unsigned)arg1 ;
-(void)flushDynamicData;
-(BOOL)tokenSequenceIsBlocklisted:(const unsigned*)arg1 length:(unsigned long long)arg2 ;
-(void)enumeratePredictionsForContext:(const unsigned*)arg1 length:(unsigned long long)arg2 maxPredictions:(unsigned long long)arg3 maxTokensPerPrediction:(unsigned long long)arg4 withBlock:(/*^block*/id)arg5 ;
-(BOOL)getUnigramProbabilityForString:(id)arg1 probability:(double*)arg2 ;
-(BOOL)getConditionalProbabilityForTokenID:(unsigned)arg1 context:(const unsigned*)arg2 length:(unsigned long long)arg3 probability:(double*)arg4 ;
-(BOOL)getFirstDynamicTokenID:(unsigned*)arg1 lastDynamicTokenID:(unsigned*)arg2 ;
-(float)usageCountForTokenID:(unsigned)arg1 ;
-(id)initWithLocalization:(id)arg1 appIdentifier:(id)arg2 lexicon:(id)arg3 ;
-(id)_descriptionForTokenSequence:(const unsigned*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)addTokenForString:(id)arg1 tokenID:(unsigned*)arg2 ;
-(BOOL)shouldAdaptToTokenSequence:(const unsigned*)arg1 length:(unsigned long long)arg2 ;
-(void)incrementUsageCountForTokenID:(unsigned)arg1 context:(const unsigned*)arg2 length:(unsigned long long)arg3 ;
-(void)recordWithDifferentialPrivacy:(id)arg1 ;
-(void)countDynamicNgramsForOrder:(unsigned long long)arg1 threshold:(float)arg2 dynamicModelCount:(unsigned long long*)arg3 cacheCount:(unsigned long long*)arg4 ;
-(void)applyExponentialDecay;
-(void)pruneToSize:(unsigned long long)arg1 ;
@end

