/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@protocol WFAirportViewControllerDelegate <NSObject,WFNetworkListDelegate>
@required
-(BOOL)networkListViewControllerNetworkRestrictionActive:(id)arg1;
-(BOOL)networkListViewControllerPowerModificationDisabled:(id)arg1;
-(id)airportSettingsViewController:(id)arg1 unconfiguredAccessoriesGroupHeaderTitle:(id)arg2;
-(long long)airportSettingsViewControllerAskToJoinMode:(id)arg1;
-(void)airportSettingsViewController:(id)arg1 setAskToJoinMode:(long long)arg2;
-(BOOL)airportSettingsViewControllerShouldShowDiagnosticsMode:(id)arg1;
-(void)airportSettingsViewControllerDidTapDiagnosticsMode:(id)arg1;
-(BOOL)airportSettingsViewControllerCurrentNetworkConnectionIsProblematic:(id)arg1;
-(void)airportSettingsViewControllerDidTapDataUsage:(id)arg1;
-(BOOL)airportSettingsViewControllerShouldShowKnownNetworks:(id)arg1;
-(void)airportSettingsViewControllerDidTapKnownNetworks:(id)arg1;
-(BOOL)airportSettingsViewControllerCoreWiFiEnabled:(id)arg1;
-(void)airportSettingsViewController:(id)arg1 SetCoreWiFiEnabled:(BOOL)arg2;

@end

