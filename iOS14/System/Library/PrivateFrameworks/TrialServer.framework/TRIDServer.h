/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


@protocol OS_dispatch_queue;
@class NSObject, TRIServerContext, TRITaskQueue, TRIXPCActivityManager;

@interface TRIDServer : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	TRIServerContext* _context;
	TRITaskQueue* _taskQueue;
	TRIXPCActivityManager* _xpcActivityManager;
	BOOL _isRunning;

}

@property (nonatomic,readonly) BOOL isRunning;              //@synthesize isRunning=_isRunning - In the implementation block
+(id)sharedServer;
+(id)_triPath;
-(id)init;
-(void)start;
-(id)initWithPath:(id)arg1 ;
-(BOOL)isRunning;
-(void)_updateSystemInfo;
-(void)_dispatchIfUnlocked:(/*^block*/id)arg1 ;
-(id)_getFreeDiskSpace;
-(void)_asyncStartWithMetrics:(id)arg1 ;
-(void)_registerXpcStreamEventHandler;
-(void)_logMetrics:(id)arg1 stopwatch:(id)arg2 ;
-(unsigned long long)_getDiskUsageInBytes;
-(BOOL)_shouldContinue;
@end

