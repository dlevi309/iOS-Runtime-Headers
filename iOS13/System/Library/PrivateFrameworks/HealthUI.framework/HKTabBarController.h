/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITabBarController.h>
#import <UIKit/UITabBarControllerDelegate.h>

@class UIViewController, NSString;

@interface HKTabBarController : UITabBarController <UITabBarControllerDelegate> {

	UIViewController* _previousViewController;

}

@property (assign,nonatomic,__weak) UIViewController * previousViewController;              //@synthesize previousViewController=_previousViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(UIViewController *)previousViewController;
-(void)setPreviousViewController:(UIViewController *)arg1 ;
-(void)setTabBarControlsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

