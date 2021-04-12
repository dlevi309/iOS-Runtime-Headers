/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STPINListViewController.h>

@class STUsageItem, STDrillInUsageGroupSpecifierProvider, STDrillInItemInfoGroupSpecifierProvider, STCategoryDetailsGroupSpecifierProvider, STAllowanceProgressGroupSpecifierProvider;

@interface STDrillInDetailListController : STPINListViewController {

	STUsageItem* _usageItem;
	STDrillInUsageGroupSpecifierProvider* _screenTimeGroupSpecifierProvider;
	STDrillInItemInfoGroupSpecifierProvider* _drillInItemInfoGroupSpecifierProvider;
	STCategoryDetailsGroupSpecifierProvider* _categoryDetailsGroupSpecifierProvider;
	STAllowanceProgressGroupSpecifierProvider* _allowanceProgressGroupSpecifierProvider;

}

@property (nonatomic,readonly) STUsageItem * usageItem;                                                                          //@synthesize usageItem=_usageItem - In the implementation block
@property (nonatomic,readonly) STDrillInUsageGroupSpecifierProvider * screenTimeGroupSpecifierProvider;                          //@synthesize screenTimeGroupSpecifierProvider=_screenTimeGroupSpecifierProvider - In the implementation block
@property (nonatomic,readonly) STDrillInItemInfoGroupSpecifierProvider * drillInItemInfoGroupSpecifierProvider;                  //@synthesize drillInItemInfoGroupSpecifierProvider=_drillInItemInfoGroupSpecifierProvider - In the implementation block
@property (nonatomic,readonly) STCategoryDetailsGroupSpecifierProvider * categoryDetailsGroupSpecifierProvider;                  //@synthesize categoryDetailsGroupSpecifierProvider=_categoryDetailsGroupSpecifierProvider - In the implementation block
@property (nonatomic,readonly) STAllowanceProgressGroupSpecifierProvider * allowanceProgressGroupSpecifierProvider;              //@synthesize allowanceProgressGroupSpecifierProvider=_allowanceProgressGroupSpecifierProvider - In the implementation block
-(void)viewDidLoad;
-(BOOL)canBeShownFromSuspendedState;
-(void)_didFetchAppInfo:(id)arg1 ;
-(STUsageItem *)usageItem;
-(id)initWithUsageItem:(id)arg1 coordinator:(id)arg2 ;
-(STDrillInUsageGroupSpecifierProvider *)screenTimeGroupSpecifierProvider;
-(STDrillInItemInfoGroupSpecifierProvider *)drillInItemInfoGroupSpecifierProvider;
-(STCategoryDetailsGroupSpecifierProvider *)categoryDetailsGroupSpecifierProvider;
-(STAllowanceProgressGroupSpecifierProvider *)allowanceProgressGroupSpecifierProvider;
@end

