/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)stopSubscriptionLeaseForAccountUniqueIdentifier:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getKeyStatusListWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleSubscriptionFairPlayKeyStatusChangedDistributedNotification:(id)arg1 ;
-(void)getKeyStatusForAccountUniqueIdentifier:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)importSubscriptionKeyBagData:(id)arg1 leaseInfoData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_init;
-(void)generateSubscriptionLeaseRequestWithAccountUniqueID:(unsigned long long)arg1 transactionType:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)importSubscriptionKeyBagData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(unsigned long long)arg1 transactionType:(unsigned)arg2 machineIDData:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

