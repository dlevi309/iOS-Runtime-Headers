/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <UIKitCore/UITabBarController.h>
#import <UIKit/UITabBarControllerDelegate.h>

@class NSArray;

@interface TeaUI.TabBarController : UITabBarController <UITabBarControllerDelegate> {

	 barView;
	 tabBarOrder;
	 primaryTabBarItemIdentifier;
	 extendedDelegate;
	 styler;

}

@property (copy,nonatomic) NSArray * viewControllers; 
-(BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2 ;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
@end

