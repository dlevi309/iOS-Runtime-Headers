/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class PPSQLDatabase, PPLocalNamedEntityStore, PPLocalTopicStore, PPLocalLocationStore, PPLocalQuickTypeBroker, PPLocalContactStore, PPLocalEventStore, PPLocalConnectionsStore;

@interface PPFeedbackStorage : NSObject {

	PPSQLDatabase* _db;
	PPLocalNamedEntityStore* _namedEntityStoreOverride;
	PPLocalTopicStore* _topicStoreOverride;
	PPLocalLocationStore* _locationStoreOverride;
	PPLocalQuickTypeBroker* _quickTypeBrokerOverride;
	PPLocalContactStore* _contactStoreOverride;
	PPLocalEventStore* _eventStoreOverride;
	PPLocalConnectionsStore* _connectionsStoreOverride;

}
+(id)storeTypeDescription:(unsigned char)arg1 ;
+(void)transformOfferedItemsIntoEngagementAndRejection:(id)arg1 ;
+(void)logFeedback:(id)arg1 domain:(unsigned char)arg2 domainStatus:(int)arg3 ;
-(id)eventStore;
-(id)contactStore;
-(id)locationStore;
-(BOOL)processPendingFeedbackWithStoreType:(unsigned char)arg1 shouldContinueBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)init;
-(id)topicStore;
-(id)namedEntityStore;
-(void)filterPendingFeedbackItems:(id)arg1 storeType:(unsigned char)arg2 timestamp:(double)arg3 clientIdentifier:(id)arg4 clientBundleId:(id)arg5 mappingId:(id)arg6 ;
-(BOOL)deleteAllPendingFeedbackOlderThanDate:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)storePendingFeedback:(id)arg1 storeType:(unsigned char)arg2 error:(id*)arg3 ;
-(id)connectionsStore;
-(void)_emitMaxRowCountEvent;
-(id)initWithDatabase:(id)arg1 namedEntityStoreOverride:(id)arg2 topicStoreOverride:(id)arg3 locationStoreOverride:(id)arg4 quickTypeBrokerOverride:(id)arg5 contactStoreOverride:(id)arg6 eventStoreOverride:(id)arg7 connectionsStoreOverride:(id)arg8 ;
-(BOOL)_clearPendingFeedbackRecordsWithStoreType:(unsigned char)arg1 limit:(int)arg2 ;
-(id)quickTypeBroker;
@end

