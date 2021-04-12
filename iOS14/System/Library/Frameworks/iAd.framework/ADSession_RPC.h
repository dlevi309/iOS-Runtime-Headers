/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@protocol ADSession_RPC
@required
-(void)_remote_openURL:(id)arg1 forAdSpaceWithIdentifier:(id)arg2;
-(void)_remote_requestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2 forAdSpaceWithIdentifier:(id)arg3;
-(void)_remote_adImpressionReportedWithIdentifier:(id)arg1;
-(void)_remote_contentProxyURLDidChange:(id)arg1;
-(void)_remote_deviceInfo:(/*^block*/id)arg1;
-(void)_remote_configVersionDidChange:(id)arg1;
-(void)_remote_actionViewControllerReadyForPresentationForAdSpaceWithIdentifier:(id)arg1;
-(void)_remote_contentProxyURLConnectDidChange:(id)arg1;
-(void)_remote_policyEngineDidIdleDisable;
-(void)_remote_adDataForAdSpace:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_remote_setRequiresFastVisibilityTestOnly:(BOOL)arg1 withIdentifier:(id)arg2;
-(void)_remote_adImpressionDidLoadWithPublicAttributes:(id)arg1 identifier:(id)arg2;
-(void)_remote_creativeWithAdSpaceIdentifier:(id)arg1 didFailWithError:(id)arg2;
-(void)_remote_dismissViewControllerForAdSpaceWithIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)_remote_closeClientAdSpaceWithIdentifier:(id)arg1;
-(void)_remote_dismissViewControllerForAdSpaceWithIdentifier:(id)arg1;
-(void)_remote_proxyTypeDidChange:(long long)arg1;

@end

