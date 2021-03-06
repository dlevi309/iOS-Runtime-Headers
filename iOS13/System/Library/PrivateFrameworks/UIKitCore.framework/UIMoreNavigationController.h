/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UINavigationController.h>

@class UIMoreListController, UINavigationController, UIViewController, NSArray;

@interface UIMoreNavigationController : UINavigationController {

	UIMoreListController* _moreListController;
	UINavigationController* _originalNavigationController;
	UIViewController* _originalRootViewController;

}

@property (nonatomic,readonly) UIViewController * moreListController;                 //@synthesize moreListController=_moreListController - In the implementation block
@property (nonatomic,retain) NSArray * moreViewControllers; 
@property (assign,nonatomic) BOOL allowsCustomizing; 
@property (assign,nonatomic) UIViewController * displayedViewController; 
@property (assign,nonatomic) BOOL moreViewControllersChanged; 
+(Class)_moreListControllerClass;
-(id)init;
-(BOOL)allowsCustomizing;
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(NSArray *)moreViewControllers;
-(void)setMoreViewControllers:(NSArray *)arg1 ;
-(BOOL)moreViewControllersChanged;
-(void)setMoreViewControllersChanged:(BOOL)arg1 ;
-(void)setAllowsCustomizing:(BOOL)arg1 ;
-(void)_restoreOriginalNavigationController;
-(id)_preparedViewController:(id)arg1 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_ensureChildrenHaveParentViewController;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)restoreOriginalNavigationControllerIfNecessary:(id)arg1 ;
-(UIViewController *)displayedViewController;
-(void)setDisplayedViewController:(UIViewController *)arg1 ;
-(id)_stateRestorationParentForChildViewController:(id)arg1 index:(unsigned long long*)arg2 ;
-(void)_redisplayMoreTableView;
-(UIViewController *)moreListController;
@end

