/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSMetricsController.h>

@class SSMetricsEventTable;

@interface SSMetricsEventController : SSMetricsController {

	SSMetricsEventTable* _table;

}
-(int)_maximumUnreportedToSelect;
-(id)_collectUnreportedPIDsFromDatabase:(id)arg1 matchingReportURLString:(id)arg2 since:(long long)arg3 suppressUserInfo:(BOOL)arg4 ;
-(id)init;
-(BOOL)deleteReportedEvents;
-(BOOL)markEventsAsReported:(id)arg1 ;
-(id)unreportedEventURLsSince:(long long)arg1 ;
-(void)_serialQueueInsertEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)insertEventSummaries:(id)arg1 error:(id*)arg2 ;
-(id)unreportedEventsForURL:(id)arg1 since:(long long)arg2 suppressUserInfo:(BOOL)arg3 ;
-(BOOL)deleteEventsInsertedBefore:(long long)arg1 ;
-(void)flushUnreportedEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)countUnreportedEventsBefore:(long long)arg1 ;
-(id)unreportedEventsForURL:(id)arg1 since:(long long)arg2 suppressDSID:(BOOL)arg3 ;
@end

