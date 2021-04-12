/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@protocol ASDStoreKitClientProtocol <ASDNotificationCenterDialogObserver>
@required
-(void)storefrontChanged:(id)arg1;
-(void)downloadRemoved:(id)arg1;
-(void)downloadStatusChanged:(id)arg1;
-(void)shouldContinueTransaction:(id)arg1 withNewStorefront:(id)arg2 replyBlock:(/*^block*/id)arg3;
-(void)removedTransactions:(id)arg1;
-(void)downloadAdded:(id)arg1;
-(void)updatedTransactions:(id)arg1;
-(void)askToShowMessageWithReplyBlock:(/*^block*/id)arg1;
-(void)removedEntitlementsForProductIdentifiers:(id)arg1;

@end

