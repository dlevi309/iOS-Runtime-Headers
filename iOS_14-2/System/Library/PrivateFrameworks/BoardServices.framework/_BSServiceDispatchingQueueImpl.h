/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <libobjc.A.dylib/BSServiceDispatchingQueue.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface _BSServiceDispatchingQueueImpl : NSObject <BSServiceDispatchingQueue> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performAsync:(/*^block*/id)arg1 withHandoff:(id)arg2 ;
-(id)backingQueueIfExists;
-(void)assertBarrierOnQueue;
-(void)performAsync:(/*^block*/id)arg1 ;
@end

