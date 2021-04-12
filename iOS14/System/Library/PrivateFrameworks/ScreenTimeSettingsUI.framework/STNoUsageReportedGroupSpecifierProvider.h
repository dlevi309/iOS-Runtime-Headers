/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

@interface STNoUsageReportedGroupSpecifierProvider : STRootGroupSpecifierProvider {

	PSSpecifier* _noUsageReportedAlertSpecifier;

}

@property (retain) PSSpecifier * noUsageReportedAlertSpecifier;              //@synthesize noUsageReportedAlertSpecifier=_noUsageReportedAlertSpecifier - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)setCoordinator:(id)arg1 ;
-(void)dealloc;
-(void)_devicesDidChange:(id)arg1 ;
-(PSSpecifier *)noUsageReportedAlertSpecifier;
-(void)setNoUsageReportedAlertSpecifier:(PSSpecifier *)arg1 ;
@end

