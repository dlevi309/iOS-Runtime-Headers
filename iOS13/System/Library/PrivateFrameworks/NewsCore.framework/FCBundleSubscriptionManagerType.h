/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class FCBundleSubscription;


@protocol FCBundleSubscriptionManagerType <FCBundleSubscriptionProviderType>
@property (nonatomic,readonly) FCBundleSubscription * cachedSubscription; 
@property (nonatomic,retain) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider; 
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(id<FCEntitlementsOverrideProviderType>)entitlementsOverrideProvider;
-(void)setEntitlementsOverrideProvider:(id)arg1;
-(FCBundleSubscription *)cachedSubscription;
-(void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(id)bundleSubscriptionLookupEntry;
-(void)renewalNoticeShownWithPurchaseID:(id)arg1;
-(void)prewarmBundleTagIDsWithPurchaseID:(id)arg1;
-(void)clearBundleSubscription;
-(void)forceExpireBundleSubscriptionBasedOnInternalSettings;

@end

