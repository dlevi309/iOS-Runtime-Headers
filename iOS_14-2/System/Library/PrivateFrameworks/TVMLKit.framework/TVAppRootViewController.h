/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

@class UINavigationController, UIViewController, IKAppTabBar;


@protocol TVAppRootViewController <NSObject>
@property (nonatomic,readonly) UINavigationController * currentNavigationController; 
@property (nonatomic,readonly) UIViewController * currentViewController; 
@property (nonatomic,readonly) id<IKAppNavigationController> appNavigationController; 
@property (nonatomic,readonly) IKAppTabBar * appTabBar; 
@required
-(UIViewController *)currentViewController;
-(UINavigationController *)currentNavigationController;
-(void)setAppNavigationControllersDelegate:(id)arg1;
-(id<IKAppNavigationController>)appNavigationController;
-(IKAppTabBar *)appTabBar;

@end

