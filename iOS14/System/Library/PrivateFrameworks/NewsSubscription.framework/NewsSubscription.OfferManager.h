/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
*/

#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>
#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>

@interface NewsSubscription.OfferManager : NSObject <FCNetworkReachabilityObserving, FCBundleSubscriptionChangeObserver> {

	 clientIdentifier;
	 clientVersion;
	 serviceType;
	 deDuperKey;
	 cachedBestOffers;
	 cachedServicesBundleOffers;
	 cachedNewsPlusOffers;
	 lastSeenBestOffers;
	 configurationManager;
	 processQueue;
	 observers;
	 offersResetTimeInterval;
	 bundleSubscriptionManager;
	 deduper;

}
-(void)networkReachabilityDidChange:(id)arg1 ;
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(id)init;
@end

