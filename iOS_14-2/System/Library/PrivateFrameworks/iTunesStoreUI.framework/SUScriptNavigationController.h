/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class UINavigationController, SUScriptNavigationBar, SUScriptViewController;

@interface SUScriptNavigationController : SUScriptViewController {

	UINavigationController* _navController;

}

@property (readonly) SUScriptNavigationBar * navigationBar; 
@property (assign) BOOL navigationBarHidden; 
@property (copy) id toolbarHidden; 
@property (readonly) SUScriptViewController * topViewController; 
@property (retain) id viewControllers; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)setViewControllers:(id)arg1 ;
-(id)viewControllers;
-(id)attributeKeys;
-(SUScriptViewController *)topViewController;
-(SUScriptNavigationBar *)navigationBar;
-(void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setToolbarHidden:(id)arg1 ;
-(id)_navigationController;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setNavigationBar:(SUScriptNavigationBar *)arg1 ;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(id)_className;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(void)popViewControllerAnimated:(BOOL)arg1 ;
-(BOOL)navigationBarHidden;
-(void)dealloc;
-(void)_setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(id)scriptAttributeKeys;
-(id)newNativeViewController;
-(id)initWithRootScriptViewController:(id)arg1 clientInterface:(id)arg2 ;
-(void)didPerformBatchedInvocations;
-(void)willPerformBatchedInvocations;
-(void)_popToRootViewControllerAnimated:(BOOL)arg1 ;
-(void)_popViewControllerAnimated:(BOOL)arg1 ;
-(void)_pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)_filteredViewControllers;
-(id)_copyNativeViewControllersFromScriptViewControllers:(id)arg1 ;
-(void)setTopViewController:(SUScriptViewController *)arg1 ;
-(id)toolbarHidden;
@end

