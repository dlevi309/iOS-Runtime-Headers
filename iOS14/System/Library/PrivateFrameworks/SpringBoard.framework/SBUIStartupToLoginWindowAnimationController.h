/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)animationSettings;
-(void)_startAnimation;
-(void)_setHidden:(BOOL)arg1 ;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(BOOL)_shouldDismissBanner;
-(id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2 ;
-(void)_cleanupAnimation;
-(id)_getTransitionWindow;
-(void)loginAppDidFinishLaunching:(id)arg1 ;
@end

