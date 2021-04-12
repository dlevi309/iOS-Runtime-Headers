/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@end

