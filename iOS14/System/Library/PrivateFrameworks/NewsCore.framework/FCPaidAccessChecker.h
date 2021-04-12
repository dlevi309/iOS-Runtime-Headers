/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCPaidAccessCheckerType.h>

@protocol FCPurchaseProviderType, FCBundleSubscriptionProviderType, FCCoreConfigurationManager;
@interface FCPaidAccessChecker : NSObject <FCPaidAccessCheckerType> {

	id<FCPurchaseProviderType> _purchaseProvider;
	id<FCBundleSubscriptionProviderType> _bundleSubscriptionProvider;
	id<FCCoreConfigurationManager> _configurationManager;

}

@property (nonatomic,readonly) id<FCCoreConfigurationManager> configurationManager;                          //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,readonly) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider;              //@synthesize bundleSubscriptionProvider=_bundleSubscriptionProvider - In the implementation block
@property (nonatomic,readonly) id<FCPurchaseProviderType> purchaseProvider;                                  //@synthesize purchaseProvider=_purchaseProvider - In the implementation block
-(id<FCCoreConfigurationManager>)configurationManager;
-(BOOL)_canGetALaCarteSubscriptionToChannel:(id)arg1 ;
-(BOOL)canGetBundleSubscriptionToChannel:(id)arg1 ;
-(void)prepareForUseWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)canGetSubscriptionToChannel:(id)arg1 ;
-(BOOL)isPreparedForUse;
-(id<FCPurchaseProviderType>)purchaseProvider;
-(id)initWithPurchaseProvider:(id)arg1 bundleSubscriptionProvider:(id)arg2 configurationManager:(id)arg3 ;
-(BOOL)canGetAccessToItemPaid:(BOOL)arg1 bundlePaid:(BOOL)arg2 channel:(id)arg3 ;
-(id<FCBundleSubscriptionProviderType>)bundleSubscriptionProvider;
-(BOOL)_canGetBundleSubscriptionToChannel:(id)arg1 ;
@end

