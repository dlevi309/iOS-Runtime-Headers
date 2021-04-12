/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class PPSQLDatabase, PPLocalNamedEntityStore, PPLocalTopicStore, PPLocalLocationStore, PPLocalQuickTypeBroker, PPLocalContactStore, PPLocalEventStore;

@interface PPFeedbackStorage : NSObject {

	PPSQLDatabase* _db;
	PPLocalNamedEntityStore* _namedEntityStoreOverride;
	PPLocalTopicStore* _topicStoreOverride;
	PPLocalLocationStore* _locationStoreOverride;
	PPLocalQuickTypeBroker* _quickTypeBrokerOverride;
	PPLocalContactStore* _contactStoreOverride;
	PPLocalEventStore* _eventStoreOverride;

}
+(void)transformOfferedItemsIntoEngagementAndRejection:(id)arg1 ;
+(id)storeTypeDescription:(unsigned char)arg1 ;
-(id)init;
-(id)contactStore;
-(id)eventStore;
-(id)namedEntityStore;
-(id)topicStore;
-(id)locationStore;
-(id)quickTypeBroker;
-(id)initWithDatabase:(id)arg1 namedEntityStoreOverride:(id)arg2 topicStoreOverride:(id)arg3 locationStoreOverride:(id)arg4 quickTypeBrokerOverride:(id)arg5 contactStoreOverride:(id)arg6 eventStoreOverride:(id)arg7 ;
-(void)processFilteredPendingFeedbackWithItems:(id)arg1 timestamp:(double)arg2 clientIdentifier:(id)arg3 clientBundleId:(id)arg4 mappingId:(id)arg5 store:(id)arg6 ;
-(id)filteredLocationsFromPendingFeedbackItems:(id)arg1 maxCount:(unsigned long long)arg2 scoringDate:(id)arg3 ;
-(void)filterPendingFeedbackItems:(id)arg1 storeType:(unsigned char)arg2 timestamp:(double)arg3 clientIdentifier:(id)arg4 clientBundleId:(id)arg5 mappingId:(id)arg6 ;
-(BOOL)processPendingFeedbackWithStoreType:(unsigned char)arg1 error:(id*)arg2 ;
-(BOOL)storePendingFeedback:(id)arg1 storeType:(unsigned char)arg2 error:(id*)arg3 ;
@end

