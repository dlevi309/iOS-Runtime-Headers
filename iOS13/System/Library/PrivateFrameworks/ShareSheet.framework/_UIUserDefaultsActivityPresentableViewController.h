/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <UIKitCore/UIViewController.h>

@class UIViewController;

@interface _UIUserDefaultsActivityPresentableViewController : UIViewController {

	UIViewController* _navigationController;
	UIViewController* _userDefaultsViewController;

}

@property (nonatomic,retain) UIViewController * navigationController;                    //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) UIViewController * userDefaultsViewController;              //@synthesize userDefaultsViewController=_userDefaultsViewController - In the implementation block
-(void)viewDidLoad;
-(UIViewController *)navigationController;
-(void)setNavigationController:(UIViewController *)arg1 ;
-(void)setUserDefaultsViewController:(UIViewController *)arg1 ;
-(void)_loadNavigationController;
-(UIViewController *)userDefaultsViewController;
-(id)initWithUserDefaultsViewController:(id)arg1 ;
@end

