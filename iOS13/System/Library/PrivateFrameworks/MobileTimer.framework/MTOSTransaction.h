/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol OS_os_transaction, OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface MTOSTransaction : NSObject {

	NSObject*<OS_os_transaction> _transaction;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                   //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
+(id)transactionWithDescription:(id)arg1 ;
+(id)transactionWithDescription:(id)arg1 timeout:(double)arg2 ;
+(id)transactionWithDescription:(id)arg1 timeout:(double)arg2 timeoutBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)end;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)_cancel;
-(id)initWithDescription:(id)arg1 timeout:(double)arg2 timeoutBlock:(/*^block*/id)arg3 ;
@end

