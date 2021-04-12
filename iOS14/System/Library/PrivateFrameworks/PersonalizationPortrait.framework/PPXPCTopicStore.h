/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PPTopicStore.h>

@class PPClientFeedbackHelper;

@interface PPXPCTopicStore : PPTopicStore {

	PPClientFeedbackHelper* _clientFeedbackHelper;

}
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(id)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)rankedTopicsWithQuery:(id)arg1 error:(id*)arg2 ;
-(id)scoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id*)arg3 ;
-(BOOL)iterScoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 sentimentScore:(double)arg5 exactMatchesInSourceText:(id)arg6 error:(id*)arg7 ;
-(void)setClientIdentifier:(id)arg1 ;
-(BOOL)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 ;
-(BOOL)iterTopicRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)deleteAllTopicsWithTopicId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)cloudSyncWithError:(id*)arg1 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(id)topicRecordsWithQuery:(id)arg1 error:(id*)arg2 ;
-(BOOL)iterRankedTopicsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)topicExtractionsFromText:(id)arg1 error:(id*)arg2 ;
-(id)_init;
-(id)clientIdentifier;
@end

