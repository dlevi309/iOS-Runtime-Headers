/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class FCBundleSubscription;


@protocol FCBundleSubscriptionManagerType <FCBundleSubscriptionProviderType>
@property (nonatomic,readonly) FCBundleSubscription * cachedSubscription; 
@property (nonatomic,retain) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider; 
@required
-(void)addObserver:(id)arg1;
-(void)renewalNoticeShownWithPurchaseID:(id)arg1;
-(void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)clearBundleSubscription;
-(FCBundleSubscription *)cachedSubscription;
-(id<FCEntitlementsOverrideProviderType>)entitlementsOverrideProvider;
-(void)prewarmBundleTagIDsWithPurchaseID:(id)arg1;
-(void)removeObserver:(id)arg1;
-(void)forceExpireBundleSubscriptionBasedOnInternalSettings;
-(void)silentExpireBundleSubscription;
-(id)bundleSubscriptionLookupEntry;
-(void)setEntitlementsOverrideProvider:(id)arg1;

@end

