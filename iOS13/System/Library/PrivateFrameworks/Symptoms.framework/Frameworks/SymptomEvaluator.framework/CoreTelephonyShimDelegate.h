/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol CoreTelephonyShimDelegate <NSObject>
@optional
-(void)operatorNameChangedForSubscription:(id)arg1;
-(void)signalStrengthChangedForSubscription:(id)arg1;
-(void)infoLinkStateChangedForSubscription:(id)arg1;
-(void)infoLinkQualityFingeprintChangedForSubscription:(id)arg1;
-(void)infoTrafficClassChangedForSubscription:(id)arg1;
-(void)infoDataTransferTimeChangedForSubscription:(id)arg1;
-(void)infoDataTransferTimeEnabledChangedForSubscription:(id)arg1;
-(void)infoLinkPowerCostChangedForSubscription:(id)arg1;
-(void)infoDataStallChangedForSubscription:(id)arg1;
-(void)cellInfoChangedForSubscription:(id)arg1;
-(void)ctServerConnectionNotification:(CFStringRef)arg1 notificationInfo:(CFDictionaryRef)arg2;
-(void)currentDataSIMIdentifier:(id)arg1;
-(void)rnfSettingChangedToFeatureEnabled:(BOOL)arg1 userEnabled:(BOOL)arg2;
-(void)signalStrengthChanged:(id)arg1;

@end

