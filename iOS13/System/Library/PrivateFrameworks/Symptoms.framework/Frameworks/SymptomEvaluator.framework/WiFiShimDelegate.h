/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol WiFiShimDelegate <NSObject>
@optional
-(void)wifiShim_L2NewMetrics:(id)arg1 forInterface:(id)arg2;
-(void)wifiShim_BSSIDChangedForInterface:(id)arg1;
-(void)wifiShim_WiFiManagerHasRestarted;
-(void)wifiShim_RSSIChangedTo:(long long)arg1 forInterface:(id)arg2;
-(void)wifiShim_L2TriggerDisconnectEdge:(BOOL)arg1 forInterface:(id)arg2;
-(void)wifiShim_AWDLLinkUp:(BOOL)arg1;
-(void)wifiShim_InfraAdminDisable:(id)arg1 bssid:(id)arg2;
-(void)wifiShim_HintForFallback:(BOOL)arg1 reasons:(id)arg2;
-(void)wifiShim_PreferredNetworksChanged:(id)arg1;

@end

