/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

