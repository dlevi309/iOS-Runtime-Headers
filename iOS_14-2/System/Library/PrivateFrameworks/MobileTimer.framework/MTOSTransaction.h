/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)transactionWithDescription:(id)arg1 timeout:(double)arg2 ;
+(id)transactionWithDescription:(id)arg1 timeout:(double)arg2 timeoutBlock:(/*^block*/id)arg3 ;
+(id)transactionWithDescription:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)end;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
-(void)_cancel;
-(id)initWithDescription:(id)arg1 timeout:(double)arg2 timeoutBlock:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
@end

