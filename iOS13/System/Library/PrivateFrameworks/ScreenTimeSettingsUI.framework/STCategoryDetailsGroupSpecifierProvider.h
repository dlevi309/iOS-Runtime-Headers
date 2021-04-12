/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STGroupSpecifierProvider.h>

@protocol STRootViewModelCoordinator;
@class STUsageDetailsViewModel, NSObject;

@interface STCategoryDetailsGroupSpecifierProvider : STGroupSpecifierProvider {

	STUsageDetailsViewModel* _usageDetailsViewModel;
	NSObject*<STRootViewModelCoordinator> _coordinator;

}

@property (nonatomic,readonly) STUsageDetailsViewModel * usageDetailsViewModel;                //@synthesize usageDetailsViewModel=_usageDetailsViewModel - In the implementation block
@property (nonatomic,readonly) NSObject*<STRootViewModelCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
-(NSObject*<STRootViewModelCoordinator>)coordinator;
-(id)totalUsageDescription:(id)arg1 ;
-(void)showMostUsedDetailListController:(id)arg1 ;
-(id)initWithCategoryUsageItem:(id)arg1 coordinator:(id)arg2 ;
-(STUsageDetailsViewModel *)usageDetailsViewModel;
@end

