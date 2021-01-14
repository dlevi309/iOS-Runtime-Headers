/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol EFScheduler <NSObject>
@required
-(id)performCancelableBlock:(/*^block*/id)arg1;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2;
-(void)performSyncBlock:(/*^block*/id)arg1;
-(void)performBlock:(/*^block*/id)arg1;
-(void)performVoucherPreservingBlock:(/*^block*/id)arg1;
-(id)performWithObject:(id)arg1;
-(void)performSyncBarrierBlock:(/*^block*/id)arg1;

@end

