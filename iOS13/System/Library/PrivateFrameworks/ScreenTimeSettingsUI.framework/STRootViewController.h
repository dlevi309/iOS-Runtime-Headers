/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STPINListViewController.h>

@class STEnableScreenTimeGroupSpecifierProvider, STScreenTimeGroupSpecifierProvider;

@interface STRootViewController : STPINListViewController {

	BOOL _shouldRefreshUsageData;
	STEnableScreenTimeGroupSpecifierProvider* _enableScreenTimeGroupSpecifierProvider;
	STScreenTimeGroupSpecifierProvider* _screenTimeGroupSpecifierProvider;

}

@property (readonly) STEnableScreenTimeGroupSpecifierProvider * enableScreenTimeGroupSpecifierProvider;              //@synthesize enableScreenTimeGroupSpecifierProvider=_enableScreenTimeGroupSpecifierProvider - In the implementation block
@property (readonly) STScreenTimeGroupSpecifierProvider * screenTimeGroupSpecifierProvider;                          //@synthesize screenTimeGroupSpecifierProvider=_screenTimeGroupSpecifierProvider - In the implementation block
@property (assign,nonatomic) BOOL shouldRefreshUsageData;                                                            //@synthesize shouldRefreshUsageData=_shouldRefreshUsageData - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithRootViewModelCoordinator:(id)arg1 ;
-(STScreenTimeGroupSpecifierProvider *)screenTimeGroupSpecifierProvider;
-(void)setShouldRefreshUsageData:(BOOL)arg1 ;
-(STEnableScreenTimeGroupSpecifierProvider *)enableScreenTimeGroupSpecifierProvider;
-(BOOL)shouldRefreshUsageData;
@end

