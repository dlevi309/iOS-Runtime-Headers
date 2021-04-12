/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>
#import <libobjc.A.dylib/SBLoginAppContainerViewControllerObserver.h>

@class SBWindow, BKSDisplayRenderOverlay, BSTransaction, NSString;

@interface SBUIStartupToLoginWindowAnimationController : SBUIMainScreenAnimationController <SBLoginAppContainerViewControllerObserver> {

	SBWindow* _transitionWindow;
	BKSDisplayRenderOverlay* _persistentSnapshotOverlay;
	BSTransaction* _waitForLoginAppToFinishLaunchingTransaction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setHidden:(BOOL)arg1 ;
-(id)animationSettings;
-(void)_startAnimation;
-(void)_cleanupAnimation;
-(id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2 ;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(id)_getTransitionWindow;
-(BOOL)_shouldDismissBanner;
-(void)loginAppDidFinishLaunching:(id)arg1 ;
@end

