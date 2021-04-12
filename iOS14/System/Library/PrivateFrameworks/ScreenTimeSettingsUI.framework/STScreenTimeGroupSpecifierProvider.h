/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

@interface STScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider {

	PSSpecifier* _usageSummarySpecifier;
	PSSpecifier* _seeAllActivitySpecifier;

}

@property (readonly) PSSpecifier * usageSummarySpecifier;                //@synthesize usageSummarySpecifier=_usageSummarySpecifier - In the implementation block
@property (readonly) PSSpecifier * seeAllActivitySpecifier;              //@synthesize seeAllActivitySpecifier=_seeAllActivitySpecifier - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)setCoordinator:(id)arg1 ;
-(void)_hasWatchOSDevicesOnlyDidChange:(BOOL)arg1 ;
-(id)_usageDetailsCoordinator:(id)arg1 ;
-(void)_showUsageDetailListController:(id)arg1 ;
-(void)_screenTimeEnabledDidChange:(BOOL)arg1 ;
-(void)_usageReportDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)_displayNameDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)_refreshingDidChange:(BOOL)arg1 ;
-(PSSpecifier *)usageSummarySpecifier;
-(PSSpecifier *)seeAllActivitySpecifier;
@end

