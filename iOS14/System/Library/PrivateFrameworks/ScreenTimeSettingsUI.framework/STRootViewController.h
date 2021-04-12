/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STPINListViewController.h>

@class STEnableScreenTimeGroupSpecifierProvider, STNoUsageReportedGroupSpecifierProvider, STScreenTimeGroupSpecifierProvider;

@interface STRootViewController : STPINListViewController {

	BOOL _shouldRefreshUsageData;
	STEnableScreenTimeGroupSpecifierProvider* _enableScreenTimeGroupSpecifierProvider;
	STNoUsageReportedGroupSpecifierProvider* _noUsageReportedGroupSpecifierProvider;
	STScreenTimeGroupSpecifierProvider* _screenTimeGroupSpecifierProvider;

}

@property (readonly) STEnableScreenTimeGroupSpecifierProvider * enableScreenTimeGroupSpecifierProvider;              //@synthesize enableScreenTimeGroupSpecifierProvider=_enableScreenTimeGroupSpecifierProvider - In the implementation block
@property (readonly) STNoUsageReportedGroupSpecifierProvider * noUsageReportedGroupSpecifierProvider;                //@synthesize noUsageReportedGroupSpecifierProvider=_noUsageReportedGroupSpecifierProvider - In the implementation block
@property (readonly) STScreenTimeGroupSpecifierProvider * screenTimeGroupSpecifierProvider;                          //@synthesize screenTimeGroupSpecifierProvider=_screenTimeGroupSpecifierProvider - In the implementation block
@property (assign,nonatomic) BOOL shouldRefreshUsageData;                                                            //@synthesize shouldRefreshUsageData=_shouldRefreshUsageData - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(id)initWithRootViewModelCoordinator:(id)arg1 ;
-(STScreenTimeGroupSpecifierProvider *)screenTimeGroupSpecifierProvider;
-(void)setShouldRefreshUsageData:(BOOL)arg1 ;
-(STEnableScreenTimeGroupSpecifierProvider *)enableScreenTimeGroupSpecifierProvider;
-(BOOL)shouldRefreshUsageData;
-(STNoUsageReportedGroupSpecifierProvider *)noUsageReportedGroupSpecifierProvider;
@end

