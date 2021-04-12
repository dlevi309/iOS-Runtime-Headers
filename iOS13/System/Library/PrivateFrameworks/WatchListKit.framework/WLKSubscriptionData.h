/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSDictionary, NSArray;

@interface WLKSubscriptionData : NSObject {

	NSDictionary* _backingDictionary;
	NSArray* _subscriptionArray;
	NSDictionary* _account;
	NSDictionary* _family;
	NSDictionary* _subscriptionsByAdamID;
	unsigned long long _activeSubscriptionsCount;
	NSDictionary* _activeTVPlusSubscription;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)subscriptions;
-(id)currentAccount;
-(BOOL)isTVPlusSubscriber;
-(unsigned long long)activeSubscriptionsCount;
-(id)subscriptionByAdamID:(id)arg1 ;
-(id)currentFamily;
-(id)activeTVPlusSubscription;
-(BOOL)isEqualToSubscriptionData:(id)arg1 ;
@end

