/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface WLKSubscriptionData : NSObject <NSSecureCoding> {

	NSDictionary* _backingDictionary;
	NSArray* _subscriptionArray;
	NSDictionary* _account;
	NSDictionary* _family;
	NSDictionary* _subscriptionsByAdamID;
	long long _activeSubscriptionsCount;
	NSDictionary* _activeTVPlusSubscription;

}
+(BOOL)supportsSecureCoding;
-(id)subscriptions;
-(id)currentFamily;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isTVPlusSubscriber;
-(unsigned long long)activeSubscriptionsCount;
-(id)subscriptionByAdamID:(id)arg1 ;
-(id)currentAccount;
-(id)activeTVPlusSubscription;
-(BOOL)isEqualToSubscriptionData:(id)arg1 ;
@end

