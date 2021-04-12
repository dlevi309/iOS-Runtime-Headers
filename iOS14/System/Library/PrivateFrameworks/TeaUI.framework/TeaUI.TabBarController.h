/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setViewControllers:(NSArray *)arg1 ;
-(NSArray *)viewControllers;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

