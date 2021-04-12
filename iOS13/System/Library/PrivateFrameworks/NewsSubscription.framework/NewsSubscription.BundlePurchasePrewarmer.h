/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
*/

#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>
#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>

@interface NewsSubscription.BundlePurchasePrewarmer : NSObject <FCBundleSubscriptionChangeObserver, FCNetworkReachabilityObserving> {

	 configurationManager;
	 networkReachability;
	 bundleSubscriptionManager;
	 purchaseManager;
	 cachedPurchaseModel;
	 accessLock;

}
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(void)networkReachabilityDidChange:(id)arg1 ;
-(id)init;
@end

