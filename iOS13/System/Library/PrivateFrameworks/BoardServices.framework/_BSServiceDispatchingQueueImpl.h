/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithQueue:(id)arg1 ;
-(void)performAsync:(/*^block*/id)arg1 ;
-(void)assertOnQueue;
-(id)backingQueueIfExists;
-(void)performAsync:(/*^block*/id)arg1 withHandoff:(id)arg2 ;
@end

