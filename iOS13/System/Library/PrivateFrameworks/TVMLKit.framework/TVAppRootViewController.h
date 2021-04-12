/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(IKAppTabBar *)appTabBar;
-(id<IKAppNavigationController>)appNavigationController;
-(UINavigationController *)currentNavigationController;
-(void)setAppNavigationControllersDelegate:(id)arg1;

@end

