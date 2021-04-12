/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class _PASLock;

@interface SGQuickResponsesStore : NSObject {

	_PASLock* _readerWriter;

}
+(id)sharedInstance;
+(BOOL)isProfane:(id)arg1 inLocales:(id)arg2 ;
+(id)keyWithLanguage:(id)arg1 andResponse:(id)arg2 ;
+(id)instanceInMemory;
-(id)init;
-(BOOL)frailWriteTransaction:(/*^block*/id)arg1 ;
-(BOOL)frailReadTransaction:(/*^block*/id)arg1 ;
-(void)designateFilteringBatch:(unsigned long long)arg1 ;
-(void)recordKnownCustomResponsesInBatchWithEmbedder:(/*^block*/id)arg1 compatibilityVersion:(unsigned long long)arg2 ;
-(unsigned long long)countCustomResponsesAfterPruningWithMinimumCountThreshold:(unsigned long long)arg1 ;
-(void)filterBatchWithMinimumDistinctRecipients:(unsigned long long)arg1 minimumReplyOccurences:(unsigned long long)arg2 ;
-(void)recordMessagesInBatchAsCustomResponsesWithEmbedder:(/*^block*/id)arg1 compatibilityVersion:(unsigned long long)arg2 ;
-(void)decayAllCustomResponsesWithDecayFactor:(double)arg1 filteringBatchSize:(int)arg2 ;
-(void)markFilteringBatchCompleted;
-(BOOL)addingMessageExceedsBatchLimit:(unsigned long long)arg1 tableLimit:(unsigned long long)arg2 message:(id)arg3 language:(id)arg4 prompt:(id)arg5 recipientHandle:(id)arg6 sentAt:(id)arg7 ;
-(id)initInDirectory:(id)arg1 inMemory:(BOOL)arg2 withMigration:(BOOL)arg3 ;
-(id)initInDirectory:(id)arg1 inMemory:(BOOL)arg2 withMigration:(BOOL)arg3 forTools:(BOOL)arg4 ;
-(id)recordsForResponses:(id)arg1 language:(id)arg2 ;
-(void)addDisplayedToResponses:(id)arg1 language:(id)arg2 ;
-(void)addSelectedToResponse:(id)arg1 language:(id)arg2 ;
-(void)addWrittenToResponse:(id)arg1 language:(id)arg2 isMatch:(BOOL)arg3 ;
-(id)embeddingForPrompt:(id)arg1 language:(id)arg2 embedder:(/*^block*/id)arg3 ;
-(id)getProfanityLocale;
-(id)getModelVersion;
-(void)setProfanityLocale:(id)arg1 andModelVersion:(long long)arg2 ;
-(BOOL)resetDbIfNeededCompareWithCompatibilityVersion:(unsigned long long)arg1 ;
-(id)nearestCustomResponsesToPromptEmbedding:(id)arg1 limit:(unsigned long long)arg2 withinRadius:(float)arg3 responseCountExponent:(float)arg4 minimumDecayedCount:(float)arg5 compatibilityVersion:(unsigned long long)arg6 language:(id)arg7 locale:(id)arg8 allowProfanity:(BOOL)arg9 minimumTimeInterval:(double)arg10 ;
-(void)destroyInstanceInMemory;
@end

