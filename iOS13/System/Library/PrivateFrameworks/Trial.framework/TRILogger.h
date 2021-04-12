/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface TRILogger : NSObject {

	int _projectId;
	NSObject*<OS_dispatch_queue> _loggingQueue;

}
-(id)init;
-(void)logEvent:(id)arg1 ;
-(id)initWithProjectId:(int)arg1 ;
-(void)_dispatchLogEvent:(id)arg1 ;
-(void)logWithTrackingId:(id)arg1 metrics:(id)arg2 dimensions:(id)arg3 ;
-(void)logWithTrackingId:(id)arg1 metric:(id)arg2 dimensions:(id)arg3 ;
-(id)messageWithOneofField:(id)arg1 withName:(id)arg2 ;
-(void)logWithTrackingId:(id)arg1 logLevel:(long long)arg2 message:(id)arg3 args:(char*)arg4 ;
-(void)logWithTrackingId:(id)arg1 message:(id)arg2 ;
-(void)logWithTrackingId:(id)arg1 logLevel:(long long)arg2 message:(id)arg3 ;
-(void)logWithTrackingId:(id)arg1 metric:(id)arg2 ;
@end

