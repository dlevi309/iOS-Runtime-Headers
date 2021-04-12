/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol BLTBulletinSendQueueDelegate;
@interface BLTBulletinSendQueuePassthrough : NSObject {

	id<BLTBulletinSendQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BLTBulletinSendQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<BLTBulletinSendQueueDelegate>)delegate;
-(void)setDelegate:(id<BLTBulletinSendQueueDelegate>)arg1 ;
-(void)sendNow;
-(void)sendRequest:(id)arg1 withTimeout:(id)arg2 isTrafficRestricted:(BOOL)arg3 didSend:(/*^block*/id)arg4 ;
-(BOOL)handleFileURL:(id)arg1 ;
-(void)queuePending;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(/*^block*/id)arg3 didQueue:(/*^block*/id)arg4 ;
@end

