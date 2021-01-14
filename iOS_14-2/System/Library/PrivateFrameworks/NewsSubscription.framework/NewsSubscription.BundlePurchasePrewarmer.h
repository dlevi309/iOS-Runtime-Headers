/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
*/

#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>
#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>

@interface NewsSubscription.BundlePurchasePrewarmer : NSObject <FCNetworkReachabilityObserving, FCBundleSubscriptionChangeObserver> {

	 _purchase;
	 configurationManager;
	 networkReachability;
	 bundleSubscriptionManager;
	 purchaseManager;
	 deduper;

}
-(void)networkReachabilityDidChange:(id)arg1 ;
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(id)init;
@end

