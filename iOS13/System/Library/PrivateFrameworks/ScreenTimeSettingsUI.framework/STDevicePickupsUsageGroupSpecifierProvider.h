/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STShowMoreUsageGroupSpecifierProvider.h>

@interface STDevicePickupsUsageGroupSpecifierProvider : STShowMoreUsageGroupSpecifierProvider
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCoordinator:(id)arg1 ;
-(void)showMostUsedDetailListController:(id)arg1 ;
-(id)_usageDetailsCoordinator:(id)arg1 ;
-(void)_specifierIdentifierDidChange:(id)arg1 ;
-(void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(id)getPickupsInfo:(id)arg1 ;
-(id)newSpecifierWithUsageItem:(id)arg1 ;
-(void)updateSpecifier:(id)arg1 usageItem:(id)arg2 ;
@end

