/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSMetricsController.h>

@class SSMetricsEventTable;

@interface SSMetricsEventController : SSMetricsController {

	SSMetricsEventTable* _table;

}
-(id)init;
-(void)flushUnreportedEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_serialQueueInsertEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(int)_maximumUnreportedToSelect;
-(id)_collectUnreportedPIDsFromDatabase:(id)arg1 matchingReportURLString:(id)arg2 since:(long long)arg3 suppressUserInfo:(BOOL)arg4 ;
-(id)unreportedEventsForURL:(id)arg1 since:(long long)arg2 suppressDSID:(BOOL)arg3 ;
-(long long)countUnreportedEventsBefore:(long long)arg1 ;
-(BOOL)deleteEventsInsertedBefore:(long long)arg1 ;
-(BOOL)deleteReportedEvents;
-(BOOL)insertEventSummaries:(id)arg1 error:(id*)arg2 ;
-(BOOL)markEventsAsReported:(id)arg1 ;
-(id)unreportedEventsForURL:(id)arg1 since:(long long)arg2 suppressUserInfo:(BOOL)arg3 ;
-(id)unreportedEventURLsSince:(long long)arg1 ;
@end

