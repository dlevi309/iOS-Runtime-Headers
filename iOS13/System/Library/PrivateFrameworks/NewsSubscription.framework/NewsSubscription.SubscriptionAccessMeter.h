/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
*/

#import <libobjc.A.dylib/NPSubscriptionAccessMeterType.h>

@interface NewsSubscription.SubscriptionAccessMeter : _UKNOWN_SUPERCLASS_ <NPSubscriptionAccessMeterType> {

	 userInfo;
	 readingHistory;
	 purchaseProvider;
	 bundleSubscriptionManager;
	 offeredBundlePurchaseIDs;
	 aLaCarteSubscriptionMeteredCountMaxLimit;
	 bundleSubscriptionMeteredCountMaxLimit;

}
-(BOOL)canAccessArticleWithHeadline:(id)arg1 articleAccess:(long long)arg2 ;
-(void)incrementCountForHeadline:(id)arg1 ;
@end

