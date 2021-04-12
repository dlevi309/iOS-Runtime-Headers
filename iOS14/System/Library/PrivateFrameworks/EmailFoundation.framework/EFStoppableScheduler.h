/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <libobjc.A.dylib/EFSuspendableScheduler.h>
#import <libobjc.A.dylib/EFAssertableScheduler.h>
#import <libobjc.A.dylib/EFScheduler.h>

@class EFLocked, NSString;

@interface EFStoppableScheduler : NSObject <EFSuspendableScheduler, EFAssertableScheduler, EFScheduler> {

	EFAtomicObject _scheduler;
	EFLocked* _tokens;

}

@property (nonatomic,readonly) id<EFScheduler> scheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assertableSchedulerWithScheduler:(id)arg1 ;
+(id)suspendableSchedulerWithScheduler:(id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(void)suspend;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(void)performSyncBlock:(/*^block*/id)arg1 ;
-(void)assertIsExecuting:(BOOL)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id)initWithScheduler:(id)arg1 ;
-(void)_cancelAllTokens;
-(void)performVoucherPreservingBlock:(/*^block*/id)arg1 ;
-(id)performWithObject:(id)arg1 ;
-(void)_addCancelationToken:(id)arg1 ;
-(void)performSyncBarrierBlock:(/*^block*/id)arg1 ;
-(void)_removeCancelationToken:(id)arg1 ;
-(void)stopAndWait;
-(void)resume;
-(void)dealloc;
-(id<EFScheduler>)scheduler;
@end

