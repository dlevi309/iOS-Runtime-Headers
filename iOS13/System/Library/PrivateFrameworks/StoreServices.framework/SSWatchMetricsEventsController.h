/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(SSWatchMetricsEventTable *)table;
-(BOOL)insertWatchMetricEvent:(id)arg1 error:(id*)arg2 ;
-(id)unreportedEventsSinceTimestamp:(long long)arg1 ;
-(void)discardUnreportableEvents;
-(void)markAsCompleted:(id)arg1 ;
-(void)markAsFailed:(id)arg1 ;
@end

