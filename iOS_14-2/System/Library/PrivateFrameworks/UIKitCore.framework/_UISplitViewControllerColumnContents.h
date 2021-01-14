/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIViewController, UINavigationController;

@interface _UISplitViewControllerColumnContents : NSObject {

	UIViewController* _viewController;
	UINavigationController* _navigationController;
	UIViewController* _navigationControllerWrapper;

}

@property (nonatomic,readonly) UINavigationController * navigationController;               //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;                           //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) UIViewController * navigationControllerWrapper;              //@synthesize navigationControllerWrapper=_navigationControllerWrapper - In the implementation block
-(id)initWithViewController:(id)arg1 navigationController:(id)arg2 navigationControllerWrapper:(id)arg3 ;
-(id)description;
-(UIViewController *)viewController;
-(UIViewController *)navigationControllerWrapper;
-(UINavigationController *)navigationController;
@end

