/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCBundleSubscriptionManagerType.h>

@class FCBundleSubscription;

@interface NewsUI2.StubBundleSubscriptionManager : _UKNOWN_SUPERCLASS_ <FCBundleSubscriptionManagerType> {

	 cachedSubscription;
	 bundleSubscription;
	 entitlementsOverrideProvider;

}

@property (readonly,nonatomic) FCBundleSubscription * cachedSubscription; 
@property (readonly,nonatomic) FCBundleSubscription * bundleSubscription; 
@property (retain,nonatomic) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider; 
-(void)addObserver:(id)arg1 ;
-(void)renewalNoticeShownWithPurchaseID:(id)arg1 ;
-(void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearBundleSubscription;
-(FCBundleSubscription *)bundleSubscription;
-(void)prepareForUseWithCompletion:(/*^block*/id)arg1 ;
-(FCBundleSubscription *)cachedSubscription;
-(id<FCEntitlementsOverrideProviderType>)entitlementsOverrideProvider;
-(void)prewarmBundleTagIDsWithPurchaseID:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)forceExpireBundleSubscriptionBasedOnInternalSettings;
-(void)silentExpireBundleSubscription;
-(id)bundleSubscriptionLookupEntry;
-(void)setEntitlementsOverrideProvider:(id<FCEntitlementsOverrideProviderType>)arg1 ;
@end

