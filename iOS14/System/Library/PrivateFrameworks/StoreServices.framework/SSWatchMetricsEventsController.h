/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class SSWatchMetricsEventTable, NSObject;

@interface SSWatchMetricsEventsController : NSObject {

	SSWatchMetricsEventTable* _table;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,readonly) SSWatchMetricsEventTable * table; 
@property (readonly) NSObject*<OS_dispatch_queue> serialQueue; 
+(id)_numberFormatter;
-(SSWatchMetricsEventTable *)table;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)markAsCompleted:(id)arg1 ;
-(void)markAsFailed:(id)arg1 ;
-(BOOL)insertWatchMetricEvent:(id)arg1 error:(id*)arg2 ;
-(id)unreportedEventsSinceTimestamp:(long long)arg1 ;
-(void)discardUnreportableEvents;
@end

