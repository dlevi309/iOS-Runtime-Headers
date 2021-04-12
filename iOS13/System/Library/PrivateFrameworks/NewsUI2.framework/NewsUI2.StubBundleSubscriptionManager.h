/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)removeObserver:(id)arg1 ;
-(void)prepareForUseWithCompletion:(/*^block*/id)arg1 ;
-(FCBundleSubscription *)bundleSubscription;
-(id<FCEntitlementsOverrideProviderType>)entitlementsOverrideProvider;
-(void)setEntitlementsOverrideProvider:(id<FCEntitlementsOverrideProviderType>)arg1 ;
-(FCBundleSubscription *)cachedSubscription;
-(void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)bundleSubscriptionLookupEntry;
-(void)renewalNoticeShownWithPurchaseID:(id)arg1 ;
-(void)prewarmBundleTagIDsWithPurchaseID:(id)arg1 ;
-(void)clearBundleSubscription;
-(void)forceExpireBundleSubscriptionBasedOnInternalSettings;
@end

