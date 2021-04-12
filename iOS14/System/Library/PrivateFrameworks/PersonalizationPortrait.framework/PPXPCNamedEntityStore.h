/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PPNamedEntityStore.h>

@class PPRecordMonitoringHelper, PPClientFeedbackHelper, NSDate;

@interface PPXPCNamedEntityStore : PPNamedEntityStore {

	PPRecordMonitoringHelper* _monitoringHelper;
	PPClientFeedbackHelper* _clientFeedbackHelper;
	NSDate* _lastCallDate;

}
-(BOOL)flushDonationsWithError:(id*)arg1 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(id)mapItemForPlaceName:(id)arg1 error:(id*)arg2 ;
-(/*^block*/id)_recordGenerator;
-(BOOL)removeMapItemForPlaceName:(id)arg1 error:(id*)arg2 ;
-(void)setClientIdentifier:(id)arg1 ;
-(BOOL)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 ;
-(BOOL)cloudSyncWithError:(id*)arg1 ;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2 ;
-(BOOL)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(id)_getLastCallDate;
-(BOOL)loadNamedEntityRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id*)arg2 ;
-(BOOL)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 sentimentScore:(double)arg5 error:(id*)arg6 ;
-(void)_loadNamedEntityRecordsWithDelegate:(id)arg1 ;
-(BOOL)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)iterRankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(void)_setLastCallDate;
-(BOOL)removeMapItemsBeforeCutoffDate:(id)arg1 error:(id*)arg2 ;
-(void)_sendResetToAllDelegates;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 error:(id*)arg4 ;
-(id)_init;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(id)clientIdentifier;
-(void)_sendChangesToDelegates;
-(id)namedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 ;
@end

