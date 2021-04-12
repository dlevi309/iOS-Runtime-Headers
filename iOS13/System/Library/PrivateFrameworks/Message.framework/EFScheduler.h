/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol EFScheduler <NSObject>
@required
-(void)performBlock:(/*^block*/id)arg1;
-(void)performSyncBlock:(/*^block*/id)arg1;
-(id)performCancelableBlock:(/*^block*/id)arg1;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2;
-(void)performVoucherPreservingBlock:(/*^block*/id)arg1;
-(id)performWithObject:(id)arg1;

@end

