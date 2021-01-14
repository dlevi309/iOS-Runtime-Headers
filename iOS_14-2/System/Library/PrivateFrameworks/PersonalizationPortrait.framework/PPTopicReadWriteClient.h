/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/


@class PPXPCClientHelper;

@interface PPTopicReadWriteClient : NSObject {

	PPXPCClientHelper* _clientHelper;

}
+(id)sharedInstance;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 sentimentScore:(double)arg5 exactMatchesInSourceText:(id)arg6 error:(id*)arg7 ;
-(BOOL)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 ;
-(BOOL)deleteAllTopicsWithTopicId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)cloudSyncWithError:(id*)arg1 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(id)init;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)_doSyncCallWithError:(id*)arg1 syncCall:(/*^block*/id)arg2 ;
-(BOOL)_doDeletionSyncCallWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 syncCall:(/*^block*/id)arg3 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
@end

