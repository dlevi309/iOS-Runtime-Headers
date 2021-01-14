/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/


@protocol CoreTelephonyShimDelegate <NSObject>
@optional
-(void)signalStrengthChangedForSubscription:(id)arg1;
-(void)infoDataTransferTimeEnabledChangedForSubscription:(id)arg1;
-(void)infoHighThroughputChangedForSubscription:(id)arg1;
-(void)infoTrafficClassChangedForSubscription:(id)arg1;
-(void)infoDataStallChangedForSubscription:(id)arg1;
-(void)operatorNameChangedForSubscription:(id)arg1;
-(void)signalStrengthChanged:(id)arg1;
-(void)ratSelectionChangedForSubscription:(id)arg1;
-(void)infoNRServingCellTypeChangedForSubscription:(id)arg1;
-(void)cellInfoChangedForSubscription:(id)arg1;
-(void)infoLinkQualityFingeprintChangedForSubscription:(id)arg1;
-(void)currentDataSIMIdentifier:(id)arg1;
-(void)infoLinkPowerCostChangedForSubscription:(id)arg1;
-(void)ctDataStatusChangedForSubscription:(id)arg1;
-(void)infoLinkStateChangedForSubscription:(id)arg1;
-(void)infoDataTransferTimeChangedForSubscription:(id)arg1;
-(void)ctServerConnectionNotification:(CFStringRef)arg1 notificationInfo:(CFDictionaryRef)arg2;
-(void)smartDataModeChangedToUserEnabled:(BOOL)arg1;
-(void)rnfSettingChangedToFeatureEnabled:(BOOL)arg1 userEnabled:(BOOL)arg2;

@end

