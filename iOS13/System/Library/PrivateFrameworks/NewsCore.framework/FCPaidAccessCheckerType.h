/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCPaidAccessCheckerType
@property (nonatomic,readonly) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider; 
@property (nonatomic,readonly) id<FCPurchaseProviderType> purchaseProvider; 
@required
-(void)prepareForUseWithCompletion:(/*^block*/id)arg1;
-(id<FCBundleSubscriptionProviderType>)bundleSubscriptionProvider;
-(id<FCPurchaseProviderType>)purchaseProvider;
-(BOOL)canGetAccessToItemPaid:(BOOL)arg1 bundlePaid:(BOOL)arg2 channel:(id)arg3;
-(BOOL)canGetSubscriptionToChannel:(id)arg1;
-(BOOL)canGetBundleSubscriptionToChannel:(id)arg1;
-(BOOL)isPreparedForUse;

@end

