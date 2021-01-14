/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

