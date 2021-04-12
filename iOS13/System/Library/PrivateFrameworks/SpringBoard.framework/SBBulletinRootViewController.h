/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>

@class SBBulletinRootView, SBBulletinWindowController, _SBBulletinRootViewControllerTransitionContext;

@interface SBBulletinRootViewController : UIViewController {

	SBBulletinRootView* _rootView;
	SBBulletinWindowController* _windowController;
	_SBBulletinRootViewControllerTransitionContext* _activeTransitionContext;

}
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_getRotationContentSettings:(SCD_Struct_SB4*)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)wantsFullScreenLayout;
-(id)initWithBulletinWindowController:(id)arg1 ;
@end

