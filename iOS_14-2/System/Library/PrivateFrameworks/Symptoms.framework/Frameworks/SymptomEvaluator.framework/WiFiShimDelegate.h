/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol WiFiShimDelegate <NSObject>
@optional
-(void)wifiShim_LQMAsystoleDetected:(double)arg1;
-(void)wifiShim_L2TriggerDisconnectEdge:(BOOL)arg1 forInterface:(id)arg2;
-(void)wifiShim_PreferredNetworksChanged:(id)arg1;
-(void)wifiShim_WiFiManagerHasRestarted;
-(void)wifiShim_InfraAdminDisable:(id)arg1 bssid:(id)arg2;
-(void)wifiShim_HintForFallback:(BOOL)arg1 reasons:(id)arg2;
-(void)wifiShim_L2NewMetrics:(id)arg1 forInterface:(id)arg2;
-(void)wifiShim_BSSIDChangedForInterface:(id)arg1;
-(void)wifiShim_RSSIChangedTo:(long long)arg1 forInterface:(id)arg2;
-(void)wifiShim_AWDLLinkUp:(BOOL)arg1;

@end

