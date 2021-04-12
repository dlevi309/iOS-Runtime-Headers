/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STUsageGroupSpecifierProvider.h>

@class PSSpecifier;

@interface STScreenTimeUsageGroupSpecifierProvider : STUsageGroupSpecifierProvider {

	PSSpecifier* _usageSummaryGraphSpecifier;
	PSSpecifier* _weeklyTotalSpecifier;

}

@property (nonatomic,retain) PSSpecifier * usageSummaryGraphSpecifier;              //@synthesize usageSummaryGraphSpecifier=_usageSummaryGraphSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * weeklyTotalSpecifier;                    //@synthesize weeklyTotalSpecifier=_weeklyTotalSpecifier - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)setCoordinator:(id)arg1 ;
-(id)_usageDetailsCoordinator:(id)arg1 ;
-(void)_specifierIdentifierDidChange:(id)arg1 ;
-(void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)_refreshingDidChange:(BOOL)arg1 ;
-(void)_headerButtonPressed:(id)arg1 ;
-(void)setUsageSummaryGraphSpecifier:(PSSpecifier *)arg1 ;
-(id)_weeklyTotal:(id)arg1 ;
-(void)setWeeklyTotalSpecifier:(PSSpecifier *)arg1 ;
-(void)_lastUpdatedDateDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(PSSpecifier *)usageSummaryGraphSpecifier;
-(PSSpecifier *)weeklyTotalSpecifier;
@end

