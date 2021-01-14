/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCPaidAccessCheckerType
@property (nonatomic,readonly) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider; 
@property (nonatomic,readonly) id<FCPurchaseProviderType> purchaseProvider; 
@required
-(BOOL)canGetBundleSubscriptionToChannel:(id)arg1;
-(void)prepareForUseWithCompletion:(/*^block*/id)arg1;
-(BOOL)canGetSubscriptionToChannel:(id)arg1;
-(BOOL)isPreparedForUse;
-(id<FCPurchaseProviderType>)purchaseProvider;
-(BOOL)canGetAccessToItemPaid:(BOOL)arg1 bundlePaid:(BOOL)arg2 channel:(id)arg3;
-(id<FCBundleSubscriptionProviderType>)bundleSubscriptionProvider;

@end

