/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
*/


@protocol OS_dispatch_queue, OS_os_log;
@class NSObject;

@interface STYFrameworkHelper : NSObject {

	NSObject*<OS_dispatch_queue> _sharedSerialQueueAtUtility;
	NSObject*<OS_dispatch_queue> _sharedConcurrentQueueAtUtility;
	NSObject*<OS_dispatch_queue> _sharedConcurrentQueueAtBackground;
	NSObject*<OS_os_log> _logHandle;

}

@property (retain) NSObject*<OS_dispatch_queue> sharedSerialQueueAtUtility;                     //@synthesize sharedSerialQueueAtUtility=_sharedSerialQueueAtUtility - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> sharedConcurrentQueueAtUtility;                 //@synthesize sharedConcurrentQueueAtUtility=_sharedConcurrentQueueAtUtility - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> sharedConcurrentQueueAtBackground;              //@synthesize sharedConcurrentQueueAtBackground=_sharedConcurrentQueueAtBackground - In the implementation block
@property (retain) NSObject*<OS_os_log> logHandle;                                              //@synthesize logHandle=_logHandle - In the implementation block
+(id)sharedHelper;
-(void)setLogHandle:(NSObject*<OS_os_log>)arg1 ;
-(NSObject*<OS_os_log>)logHandle;
-(NSObject*<OS_dispatch_queue>)sharedSerialQueueAtUtility;
-(void)setSharedSerialQueueAtUtility:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSharedConcurrentQueueAtUtility:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSharedConcurrentQueueAtBackground:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)subsystemForSignposts;
-(NSObject*<OS_dispatch_queue>)sharedConcurrentQueueAtUtility;
-(NSObject*<OS_dispatch_queue>)sharedConcurrentQueueAtBackground;
@end

