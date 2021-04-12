/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(id)init;
-(id)_stateRestorationParentForChildViewController:(id)arg1 index:(unsigned long long*)arg2 ;
-(void)restoreOriginalNavigationControllerIfNecessary:(id)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)allowsCustomizing;
-(NSArray *)moreViewControllers;
-(void)setMoreViewControllers:(NSArray *)arg1 ;
-(void)setAllowsCustomizing:(BOOL)arg1 ;
-(BOOL)moreViewControllersChanged;
-(void)setMoreViewControllersChanged:(BOOL)arg1 ;
-(UIViewController *)moreListController;
-(void)_restoreOriginalNavigationController;
-(id)_preparedViewController:(id)arg1 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_ensureChildrenHaveParentViewController;
-(UIViewController *)displayedViewController;
-(void)setDisplayedViewController:(UIViewController *)arg1 ;
-(void)_redisplayMoreTableView;
@end

