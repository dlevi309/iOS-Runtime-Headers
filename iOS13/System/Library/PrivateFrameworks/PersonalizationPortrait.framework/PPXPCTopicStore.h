/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PPTopicStore.h>

@class PPClientFeedbackHelper;

@interface PPXPCTopicStore : PPTopicStore {

	PPClientFeedbackHelper* _clientFeedbackHelper;

}
-(id)_init;
-(void)setClientIdentifier:(id)arg1 ;
-(id)clientIdentifier;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 sentimentScore:(double)arg5 error:(id*)arg6 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)deleteAllTopicsWithTopicId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)cloudSyncWithError:(id*)arg1 ;
-(BOOL)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 ;
-(BOOL)iterRankedTopicsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)rankedTopicsWithQuery:(id)arg1 error:(id*)arg2 ;
-(BOOL)iterScoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(id)scoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id*)arg3 ;
-(BOOL)iterTopicRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)topicRecordsWithQuery:(id)arg1 error:(id*)arg2 ;
-(id)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 error:(id*)arg3 ;
@end

