/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTimeSettingsUI.framework/SchoolTimeSettingsUI
*/

#import <SchoolTimeSettingsUI/SCLListViewController.h>

@protocol SCLCustomDayViewControllerDelegate;
@class SCLSettingsViewModel;

@interface SCLCustomDayViewController : SCLListViewController {

	SCLSettingsViewModel* _viewModel;
	id<SCLCustomDayViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) SCLSettingsViewModel * viewModel;                                  //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<SCLCustomDayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SCLCustomDayViewControllerDelegate>)delegate;
-(SCLSettingsViewModel *)viewModel;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setDelegate:(id<SCLCustomDayViewControllerDelegate>)arg1 ;
-(id)initWithViewModel:(id)arg1 title:(id)arg2 ;
-(void)loadSpecifierSource;
@end

