/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSuspendableScheduler.h>
#import <libobjc.A.dylib/EFAssertableScheduler.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface EFQueueScheduler : NSObject <EFSuspendableScheduler, EFAssertableScheduler> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) BOOL prefersImmediateExecution; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(void)suspend;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)performSyncBlock:(/*^block*/id)arg1 ;
-(void)assertIsExecuting:(BOOL)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)performVoucherPreservingBlock:(/*^block*/id)arg1 ;
-(id)performWithObject:(id)arg1 ;
-(void)performSyncBarrierBlock:(/*^block*/id)arg1 ;
-(void)resume;
-(BOOL)prefersImmediateExecution;
@end

