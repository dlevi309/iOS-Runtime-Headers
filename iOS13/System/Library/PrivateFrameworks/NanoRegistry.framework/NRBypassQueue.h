/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@protocol OS_dispatch_queue;
#import <NanoRegistry/NanoRegistry-Structs.h>
@class NSObject;

@interface NRBypassQueue : NSObject {

	NSObject*<OS_dispatch_queue> _suspendableQueue;
	NSObject*<OS_dispatch_queue> _bypassQueue;
	BOOL _suspended;
	os_unfair_lock_s _lock;

}
-(id)init;
-(void)invalidate;
-(void)resume;
-(void)suspend;
-(void)assertOnQueue;
-(void)enqueueBlock:(/*^block*/id)arg1 ;
-(void)enqueueBlockAsync:(/*^block*/id)arg1 ;
-(void)enqueueBypassBlock:(/*^block*/id)arg1 ;
-(void)enqueueBypassBlockAsync:(/*^block*/id)arg1 ;
@end

