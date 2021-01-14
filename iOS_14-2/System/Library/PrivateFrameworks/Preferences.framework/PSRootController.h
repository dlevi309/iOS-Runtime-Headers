/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)writePreference:(id)arg1 ;
+(BOOL)processedBundle:(id)arg1 parentController:(id)arg2 parentSpecifier:(id)arg3 bundleControllers:(id*)arg4 settings:(id)arg5 ;
+(id)readPreferenceValue:(id)arg1 ;
+(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(void)willBecomeActive;
-(void)addTask:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(id)specifier;
-(void)suspend;
-(id)specifiers;
-(BOOL)busy;
-(id)rootController;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didLock;
-(void)didWake;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)sendWillBecomeActive;
-(void)sendWillResignActive;
-(void)statusBarWillChangeHeight:(id)arg1 ;
-(void)_delayedControllerReleaseAfterPop:(id)arg1 ;
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
-(void)showLeftButton:(id)arg1 withStyle:(long long)arg2 rightButton:(id)arg3 withStyle:(long long)arg4 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setParentController:(id)arg1 ;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 ;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_setNavigationBarHidden:(BOOL)arg1 edge:(unsigned long long)arg2 duration:(double)arg3 ;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)parentController;
-(void)didUnlock;
-(void)willResignActive;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setRootController:(id)arg1 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)showController:(id)arg1 ;
-(void)pushController:(id)arg1 ;
-(void)willUnlock;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(void)pushController:(id)arg1 animate:(BOOL)arg2 ;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(id)aggregateDictionaryPath;
-(void)dealloc;
@end

