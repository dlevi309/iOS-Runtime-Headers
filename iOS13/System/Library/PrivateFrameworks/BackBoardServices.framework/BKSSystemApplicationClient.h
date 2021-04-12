/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BaseBoard/BSBaseXPCClient.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, BKSSystemApplicationClientDelegate;
@class NSObject;

@interface BKSSystemApplicationClient : BSBaseXPCClient {

	NSObject*<OS_dispatch_queue> _callOutQueue;
	BOOL _pendingCheckIn;
	BOOL _sentConnect;
	BOOL _waitingForPing;
	NSObject*<OS_dispatch_semaphore> _checkinSemaphore;
	NSObject*<OS_dispatch_semaphore> _pingSemaphore;
	double _systemIdleSleepInterval;
	id<BKSSystemApplicationClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BKSSystemApplicationClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double systemIdleSleepInterval;                                      //@synthesize systemIdleSleepInterval=_systemIdleSleepInterval - In the implementation block
-(id<BKSSystemApplicationClientDelegate>)delegate;
-(void)setDelegate:(id<BKSSystemApplicationClientDelegate>)arg1 ;
-(BOOL)ping;
-(void)queue_connectionWasResumed;
-(void)queue_connectionWasInterrupted;
-(void)queue_connectionWasInvalidated;
-(void)queue_handleMessage:(id)arg1 ;
-(void)connect;
-(void)sendActions:(id)arg1 ;
-(id)initWithCalloutQueue:(id)arg1 ;
-(void)_connect;
-(void)setSystemIdleSleepInterval:(double)arg1 ;
-(void)finishBooting;
-(double)systemIdleSleepInterval;
-(void)checkInAndWaitForDataMigration:(BOOL)arg1 ;
-(void)_queue_handleWatchdogPing:(id)arg1 ;
-(void)_sendMessageOfType:(long long)arg1 packer:(/*^block*/id)arg2 ;
-(void)_sendMessageOfType:(long long)arg1 packer:(/*^block*/id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)_sendMessageOfType:(long long)arg1 packer:(/*^block*/id)arg2 replyHandler:(/*^block*/id)arg3 waitForReply:(BOOL)arg4 waitDuration:(unsigned long long)arg5 ;
@end

