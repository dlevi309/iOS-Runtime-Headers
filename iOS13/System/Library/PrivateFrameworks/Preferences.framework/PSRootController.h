/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/PSController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class PSSpecifier, NSMutableSet, PSStackPushAnimationController, NSString;

@interface PSRootController : UINavigationController <PSController, UINavigationControllerDelegate> {

	PSSpecifier* _specifier;
	NSMutableSet* _tasks;
	BOOL _deallocating;
	PSStackPushAnimationController* _stackAnimationController;
	unsigned long long _supportedOrientationsOverride;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
+(id)readPreferenceValue:(id)arg1 ;
+(void)writePreference:(id)arg1 ;
+(BOOL)processedBundle:(id)arg1 parentController:(id)arg2 parentSpecifier:(id)arg3 bundleControllers:(id*)arg4 settings:(id)arg5 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)specifier;
-(void)suspend;
-(void)addTask:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)showLeftButton:(id)arg1 withStyle:(long long)arg2 rightButton:(id)arg3 withStyle:(long long)arg4 ;
-(void)willBecomeActive;
-(void)willResignActive;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(void)_setNavigationBarHidden:(BOOL)arg1 edge:(unsigned long long)arg2 duration:(double)arg3 ;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)specifiers;
-(void)setSpecifier:(id)arg1 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)setParentController:(id)arg1 ;
-(id)parentController;
-(void)setRootController:(id)arg1 ;
-(id)rootController;
-(void)showController:(id)arg1 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(void)pushController:(id)arg1 ;
-(void)pushController:(id)arg1 animate:(BOOL)arg2 ;
-(id)aggregateDictionaryPath;
-(void)sendWillBecomeActive;
-(void)sendWillResignActive;
-(void)statusBarWillChangeHeight:(id)arg1 ;
-(BOOL)busy;
-(void)_delayedControllerReleaseAfterPop:(id)arg1 ;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 ;
-(id)tasksDescription;
-(BOOL)taskIsRunning:(id)arg1 ;
-(void)taskFinished:(id)arg1 ;
-(id)contentViewForTopController;
-(BOOL)deallocating;
-(void)willDismissPopupView;
-(void)didDismissPopupView;
-(void)willDismissFormSheetView;
-(void)didDismissFormSheetView;
-(void)pushControllersAsStack:(id)arg1 ;
@end

