/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject;

@interface SiriCoreConnectionQueueMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _watcher;

}
-(id)init;
-(void)dealloc;
-(void)_startWatcher;
-(void)_signalWatcher;
-(void)startWatcher;
-(void)signalWatcher;
@end

