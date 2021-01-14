/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@protocol OS_dispatch_queue;
@class NSObject, PETScalarEventTracker;

@interface ATXMetrics : NSObject {

	NSObject*<OS_dispatch_queue> _loggingQueue;
	PETScalarEventTracker* _viewTracker;
	PETScalarEventTracker* _executeTracker;
	PETScalarEventTracker* _errorTracker;

}
+(id)_sharedInstance;
+(void)logError:(long long)arg1 inContext:(long long)arg2 ;
+(void)logActionViewForType:(long long)arg1 inContext:(long long)arg2 ;
+(void)logActionExecuteForType:(long long)arg1 inContext:(long long)arg2 ;
-(id)init;
-(void)_logError:(long long)arg1 inContext:(long long)arg2 ;
-(void)_logActionViewForType:(long long)arg1 inContext:(long long)arg2 ;
-(void)_logActionExecuteForType:(long long)arg1 inContext:(long long)arg2 ;
@end

