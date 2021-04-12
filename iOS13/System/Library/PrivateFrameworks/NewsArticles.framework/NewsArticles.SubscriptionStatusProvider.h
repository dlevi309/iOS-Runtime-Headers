/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>
#import <libobjc.A.dylib/SXSubscriptionStatusProviding.h>

@interface NewsArticles.SubscriptionStatusProvider : NSObject <FCBundleSubscriptionChangeObserver, SXSubscriptionStatusProviding> {

	 headline;
	 purchaseProvider;
	 bundleSubscriptionManager;
	 bundlePurchasePrewarmer;
	 observers;
	 bundleSubscriptionStatus;
	 channelSubscriptionStatus;

}

@property (assign,nonatomic) long long bundleSubscriptionStatus; 
@property (assign,nonatomic) long long channelSubscriptionStatus; 
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(long long)bundleSubscriptionStatus;
-(void)setBundleSubscriptionStatus:(long long)arg1 ;
-(void)setChannelSubscriptionStatus:(long long)arg1 ;
-(long long)channelSubscriptionStatus;
-(void)purchaseListChangedWithNotification:(id)arg1 ;
@end

