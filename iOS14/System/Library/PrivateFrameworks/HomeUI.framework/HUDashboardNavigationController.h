/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/HUDashboardNavigationBarDelegate.h>

@class UINavigationBar, NSString;

@interface HUDashboardNavigationController : UINavigationController <HUDashboardNavigationBarDelegate> {

	UINavigationBar* _displayedNavigationBar;

}

@property (nonatomic,retain) UINavigationBar * displayedNavigationBar;              //@synthesize displayedNavigationBar=_displayedNavigationBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_targetNavigationBarForUISplitViewControllerSidebarButton;
-(id)childViewControllerForStatusBarStyle;
-(BOOL)_canShowWhileLocked;
-(long long)preferredStatusBarStyle;
-(void)setDisplayedNavigationBar:(UINavigationBar *)arg1 ;
-(UINavigationBar *)displayedNavigationBar;
-(void)navigationBar:(id)arg1 didChangeBackgroundVisibility:(BOOL)arg2 ;
@end

