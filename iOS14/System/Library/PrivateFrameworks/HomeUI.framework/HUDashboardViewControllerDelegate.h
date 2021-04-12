/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUDashboardViewControllerDelegate <NSObject,HULockAuthorizationDelegate>
@property (assign,nonatomic,__weak) id<HUDashboardNavigator> dashboardNavigator; 
@required
-(void)setDashboardNavigator:(id)arg1;
-(void)presentDashboardEditorForDashboardViewController:(id)arg1;
-(void)presentDashboardListPickerForDashboardViewController:(id)arg1 fromView:(id)arg2;
-(id<HUDashboardNavigator>)dashboardNavigator;
-(void)presentDashboard:(id)arg1 animated:(BOOL)arg2;

@end

