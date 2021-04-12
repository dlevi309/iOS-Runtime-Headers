/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/


@protocol OS_dispatch_queue, OS_dispatch_source, BCCloudKitTransactionDelegate;
@class NSString, BUCoalescingCallBlock, BDSOSTransaction, NSObject;

@interface BCCloudKitTransaction : NSObject {

	NSString* _entityName;
	BUCoalescingCallBlock* _coalescedNotification;
	BDSOSTransaction* _osTransaction;
	NSObject*<OS_dispatch_queue> _lifecycleAccessQueue;
	NSObject*<OS_dispatch_source> _transactionLifetime;
	id<BCCloudKitTransactionDelegate> _delegate;
	long long _clientCount;

}

@property (nonatomic,copy) NSString * entityName;                                            //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,retain) BUCoalescingCallBlock * coalescedNotification;                  //@synthesize coalescedNotification=_coalescedNotification - In the implementation block
@property (nonatomic,retain) BDSOSTransaction * osTransaction;                               //@synthesize osTransaction=_osTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lifecycleAccessQueue;              //@synthesize lifecycleAccessQueue=_lifecycleAccessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> transactionLifetime;              //@synthesize transactionLifetime=_transactionLifetime - In the implementation block
@property (assign,nonatomic,__weak) id<BCCloudKitTransactionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long clientCount;                                          //@synthesize clientCount=_clientCount - In the implementation block
+(id)transactionNameForEntityName:(id)arg1 ;
-(id<BCCloudKitTransactionDelegate>)delegate;
-(void)setDelegate:(id<BCCloudKitTransactionDelegate>)arg1 ;
-(void)signal;
-(NSString *)entityName;
-(void)setEntityName:(NSString *)arg1 ;
-(long long)clientCount;
-(void)setClientCount:(long long)arg1 ;
-(void)setOsTransaction:(BDSOSTransaction *)arg1 ;
-(BDSOSTransaction *)osTransaction;
-(id)initWithEntityName:(id)arg1 delegate:(id)arg2 ;
-(void)performWorkWithCompletion:(/*^block*/id)arg1 ;
-(double)coalescingDelay;
-(double)transactionLifetimeTimout;
-(id)transactionName;
-(void)clientConnected;
-(NSObject*<OS_dispatch_queue>)lifecycleAccessQueue;
-(NSObject*<OS_dispatch_source>)transactionLifetime;
-(BUCoalescingCallBlock *)coalescedNotification;
-(void)laq_scheduleTransactionLifetime;
-(void)setTransactionLifetime:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setCoalescedNotification:(BUCoalescingCallBlock *)arg1 ;
-(void)setLifecycleAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

