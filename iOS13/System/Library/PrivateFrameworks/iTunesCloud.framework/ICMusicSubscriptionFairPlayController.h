/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ICMusicSubscriptionFairPlayController : NSObject {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _fairPlaySerialQueue;
	NSMutableDictionary* _subscriptionKeyBagStatusCache;

}
+(id)sharedController;
-(id)_init;
-(void)importSubscriptionKeyBagData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(unsigned long long)arg1 transactionType:(unsigned)arg2 machineIDData:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)importSubscriptionKeyBagData:(id)arg1 leaseInfoData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateSubscriptionLeaseRequestWithAccountUniqueID:(unsigned long long)arg1 transactionType:(unsigned)arg2 certificateData:(id)arg3 assetIDData:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)stopSubscriptionLeaseForAccountUniqueIdentifier:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getKeyStatusListWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleSubscriptionFairPlayKeyStatusChangedDistributedNotification:(id)arg1 ;
-(void)getKeyStatusForAccountUniqueIdentifier:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

