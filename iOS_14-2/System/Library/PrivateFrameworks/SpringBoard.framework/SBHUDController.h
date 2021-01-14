/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/_SBHUDHostViewControllerDelegate.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol BSInvalidatable;
@class NSCountedSet, UIScreen, SBMainScreenActiveInterfaceOrientationWindow, _SBHUDHostViewController, SBHUDSettings, NSString;

@interface SBHUDController : NSObject <_SBHUDHostViewControllerDelegate, PTSettingsKeyObserver, BSDescriptionProviding, UIViewControllerTransitioningDelegate> {

	NSCountedSet* _hudHiddenAssertions;
	id<BSInvalidatable> _stateCaptureHandle;
	UIScreen* _screen;
	SBMainScreenActiveInterfaceOrientationWindow* _hudWindow;
	_SBHUDHostViewController* _hudViewController;
	SBHUDSettings* _settings;

}

@property (nonatomic,readonly) SBMainScreenActiveInterfaceOrientationWindow * hudWindow;              //@synthesize hudWindow=_hudWindow - In the implementation block
@property (nonatomic,readonly) _SBHUDHostViewController * hudViewController;                          //@synthesize hudViewController=_hudViewController - In the implementation block
@property (nonatomic,readonly) SBHUDSettings * settings;                                              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) UIScreen * screen;                                                     //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) BOOL anyHUDsVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultCrossfadeAnimatorForHUDController:(id)arg1 ;
-(id)succinctDescription;
-(void)hudViewController:(id)arg1 willDismissHUD:(id)arg2 ;
-(void)hudViewController:(id)arg1 didPresentHUD:(id)arg2 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)init;
-(void)_finishedTransitionForHUD:(id)arg1 intendedState:(long long)arg2 finalState:(long long)arg3 ;
-(id)knownHUDControllerForIdentifier:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentingHUDs;
-(id)knownHUDs;
-(id)presentedHUDs;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_createHUDWindowIfNeeded;
-(void)_presentHUD:(id)arg1 animated:(BOOL)arg2 ;
-(NSString *)description;
-(void)hudViewController:(id)arg1 didDismissHUD:(id)arg2 ;
-(id)initWithScreen:(id)arg1 ;
-(void)_tearDownIfNoHuds;
-(void)_setupStateCapture;
-(SBHUDSettings *)settings;
-(void)dismissHUDs:(BOOL)arg1 ;
-(SBMainScreenActiveInterfaceOrientationWindow *)hudWindow;
-(id)acquireHUDHiddenAssertionForIdentifier:(id)arg1 withReason:(id)arg2 ;
-(void)_tearDown;
-(void)hudViewController:(id)arg1 willPresentHUD:(id)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(UIScreen *)screen;
-(id)HUDSessionForViewController:(id)arg1 identifier:(id)arg2 ;
-(void)_dismissHUD:(id)arg1 animated:(BOOL)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)anyHUDsVisible;
-(void)_notificationWhichWeWantToUseToTearEverythingDown:(id)arg1 ;
-(_SBHUDHostViewController *)hudViewController;
-(void)dealloc;
-(id)presentedHUDControllerForIdentifier:(id)arg1 ;
@end

