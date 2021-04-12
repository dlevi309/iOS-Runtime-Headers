/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/


@protocol STGroupSpecifierProviderDelegate <PSController>
@required
-(void)specifierProvider:(id)arg1 reloadSpecifier:(id)arg2 animated:(BOOL)arg3;
-(void)specifierProvider:(id)arg1 reloadSectionHeaderFootersWithAnimation:(long long)arg2;
-(void)specifierProvider:(id)arg1 showController:(id)arg2 animated:(BOOL)arg3;
-(void)specifierProvider:(id)arg1 presentViewController:(id)arg2 animated:(BOOL)arg3;
-(void)specifierProvider:(id)arg1 dismissViewControllerAnimated:(BOOL)arg2;
-(void)specifierProvider:(id)arg1 showConfirmationViewForSpecifier:(id)arg2;
-(void)specifierProvider:(id)arg1 popToViewControllerAnimated:(BOOL)arg2;
-(void)specifierProvider:(id)arg1 presentViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)specifierProviderBeginUpdates:(id)arg1;
-(void)specifierProviderEndUpdates:(id)arg1;
-(void)specifierProvider:(id)arg1 lazyLoadBundle:(id)arg2;
-(void)specifierProvider:(id)arg1 showPINSheet:(id)arg2;

@end
