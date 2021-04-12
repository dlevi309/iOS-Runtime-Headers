/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PPNamedEntityStore.h>

@class PPRecordMonitoringHelper, PPClientFeedbackHelper, NSDate;

@interface PPXPCNamedEntityStore : PPNamedEntityStore {

	PPRecordMonitoringHelper* _monitoringHelper;
	PPClientFeedbackHelper* _clientFeedbackHelper;
	NSDate* _lastCallDate;

}
-(id)_init;
-(void)setClientIdentifier:(id)arg1 ;
-(id)clientIdentifier;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)cloudSyncWithError:(id*)arg1 ;
-(BOOL)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 ;
-(void)_setLastCallDate;
-(id)_getLastCallDate;
-(BOOL)iterRankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2 ;
-(BOOL)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)namedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 ;
-(BOOL)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 sentimentScore:(double)arg5 error:(id*)arg6 ;
-(BOOL)flushDonationsWithError:(id*)arg1 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id*)arg3 ;
-(id)mapItemForPlaceName:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeMapItemForPlaceName:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeMapItemsBeforeCutoffDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 error:(id*)arg4 ;
-(/*^block*/id)_recordGenerator;
-(void)_sendResetToAllDelegates;
-(void)_sendChangesToDelegates;
-(void)_loadNamedEntityRecordsWithDelegate:(id)arg1 ;
-(BOOL)loadNamedEntityRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id*)arg2 ;
@end

