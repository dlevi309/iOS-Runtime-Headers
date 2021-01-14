/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface TRILogger : NSObject {

	int _projectId;
	NSObject*<OS_dispatch_queue> _loggingQueue;

}
-(void)logWithTrackingId:(id)arg1 metric:(id)arg2 ;
-(id)init;
-(void)logWithTrackingId:(id)arg1 logLevel:(long long)arg2 message:(id)arg3 ;
-(unsigned long long)_incrementedLogEventCount;
-(id)messageWithOneofField:(id)arg1 withName:(id)arg2 ;
-(void)logWithTrackingId:(id)arg1 logLevel:(long long)arg2 message:(id)arg3 args:(char*)arg4 ;
-(void)logWithTrackingId:(id)arg1 metrics:(id)arg2 dimensions:(id)arg3 ;
-(void)logWithTrackingId:(id)arg1 message:(id)arg2 ;
-(id)initWithProjectId:(int)arg1 ;
-(void)logEvent:(id)arg1 ;
-(void)_dispatchLogEvent:(id)arg1 ;
-(void)logWithTrackingId:(id)arg1 metric:(id)arg2 dimensions:(id)arg3 ;
@end

