/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)suspend;
-(id)init;
-(void)enqueueBlock:(/*^block*/id)arg1 ;
-(void)enqueueBlockAsync:(/*^block*/id)arg1 ;
-(void)enqueueBypassBlock:(/*^block*/id)arg1 ;
-(void)enqueueBypassBlockAsync:(/*^block*/id)arg1 ;
-(void)invalidate;
-(void)resume;
@end

