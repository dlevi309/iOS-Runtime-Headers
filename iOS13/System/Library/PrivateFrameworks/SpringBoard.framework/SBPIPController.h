/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/PGPictureInPictureControllerDelegate.h>
#import <libobjc.A.dylib/SBAlertItemsControllerObserver.h>
#import <libobjc.A.dylib/SBAssistantObserver.h>

@protocol BSInvalidatable;
@class PGPictureInPictureController, SBPIPWindow, NSMutableSet, NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface SBPIPController : NSObject <PGPictureInPictureControllerDelegate, SBAlertItemsControllerObserver, SBAssistantObserver> {

	PGPictureInPictureController* _pictureInPictureController;
	SBPIPWindow* _pictureInPictureWindow;
	UIEdgeInsets _pictureInPictureWindowMargin;
	BOOL _expectKeyboardVisible;
	NSMutableSet* _pictureInPictureWindowHiddenReasons;
	NSMutableDictionary* _pictureInPictureInsetsForSource;
	NSMutableSet* _pictureInPictureMorphAnimatorControllers;
	id<BSInvalidatable> _stateCaptureInvalidatable;
	NSMutableOrderedSet* _pictureInPictureWindowLevelOverrides;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)isPictureInPictureSupported;
+(BOOL)isAutoPictureInPictureSupported;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(void)pictureInPictureController:(id)arg1 didCreatePictureInPictureViewController:(id)arg2 ;
-(void)pictureInPictureController:(id)arg1 willDestroyPictureInPictureViewController:(id)arg2 ;
-(void)pictureInPictureController:(id)arg1 willHidePictureInPictureViewController:(id)arg2 ;
-(void)pictureInPictureController:(id)arg1 didHidePictureInPictureViewController:(id)arg2 ;
-(BOOL)pictureInPictureController:(id)arg1 shouldDenyNewConnection:(id)arg2 ;
-(void)pictureInPictureInterruptionBegan;
-(void)pictureInPictureInterruptionEnded;
-(void)_keyboardWillShowOrHide:(id)arg1 ;
-(void)_lockStateDidChange:(id)arg1 ;
-(void)updatePictureInPictureWindowLevel;
-(void)assistantWillAppear:(id)arg1 ;
-(void)alertItemsController:(id)arg1 willActivateAlertItem:(id)arg2 ;
-(void)alertItemsController:(id)arg1 didActivateAlertItem:(id)arg2 ;
-(void)alertItemsController:(id)arg1 didDeactivateAlertItem:(id)arg2 forReason:(int)arg3 ;
-(id)pictureInPictureMorphAnimatorControllerForProcessIdentifier:(int)arg1 ;
-(void)applyPictureInPictureInsets:(UIEdgeInsets)arg1 fromSource:(long long)arg2 duration:(double)arg3 ;
-(void)assistantDidDisappear:(id)arg1 ;
-(void)removePictureInPictureWindowLevelOverrideForReason:(id)arg1 ;
-(void)setPictureInPictureWindowLevelOverride:(unsigned long long)arg1 withReason:(id)arg2 ;
-(BOOL)isPictureInPictureWindowVisible;
-(BOOL)shouldStartPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 scenePersistenceIdentifier:(id)arg2 ;
-(void)setPictureInPictureWindowHidden:(BOOL)arg1 withReason:(id)arg2 ;
-(void)startPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 scenePersistenceIdentifier:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 scenePersistenceIdentifier:(id)arg2 ;
-(id)_pipWindow;
-(BOOL)_pointInside:(CGPoint)arg1 ;
-(CGRect)initialFrameForInteractivePictureInPictureAnimationEnteringBackgroundForApplicationWithProcessIdentifier:(int)arg1 scenePersistenceIdentifier:(id)arg2 ;
-(CGSize)preferredContentSizeForInteractivePictureInPictureAnimationEnteringBackgroundForApplicationWithProcessIdentifier:(int)arg1 scenePersistenceIdentifier:(id)arg2 ;
-(CGRect)defaultHomeScreenInitialPiPFrame:(CGRect)arg1 withPreferredContentSize:(CGSize)arg2 ;
-(void)addPictureInPictureMorphAnimatorController:(id)arg1 ;
-(void)removePictureInPictureMorphAnimatorController:(id)arg1 ;
-(void)_appSwitcherWillQuitApp:(id)arg1 ;
-(void)_keyboardWillRotate:(id)arg1 ;
-(void)_bulletinWillPresent:(id)arg1 ;
-(void)_bulletinWillDismiss:(id)arg1 ;
-(void)_floatingDockHeightWillChange:(id)arg1 ;
-(void)_managePictureInPictureWindowVisibilityAnimated:(BOOL)arg1 ;
-(void)_managePictureInPictureWindowLevel;
-(id)_pictureInPictureApplicationForProcessIdentifier:(int)arg1 ;
-(void)_updateFloatingDockInsets;
-(UIEdgeInsets)_updatePictureInPictureOverlayInsetsWithDuration:(double)arg1 withCurrentLayoutState:(BOOL)arg2 ;
-(id)_morphAnimatorControllerForProcessIdentifier:(int)arg1 ;
-(void)_adjustPIPInsetsForKeyboardFrameChangeNotification:(id)arg1 ;
-(void)_updateFloatingDockInsetsWithHeight:(double)arg1 ;
-(void)_setPictureInPictureWindowMargin:(UIEdgeInsets)arg1 animationDuration:(double)arg2 animationOptions:(unsigned long long)arg3 ;
-(void)_createWindowAndRootViewControllerIfNeeded;
-(void)_destroyWindowAndRootViewControllerIfPossible;
@end

