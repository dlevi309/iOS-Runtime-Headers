/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class _SBAlertController, NSArray, NSString, UIImage;

@interface SBAlertItem : NSObject <BSDescriptionProviding> {

	_SBAlertController* _alertController;
	NSArray* _allowedBundleIDs;
	NSString* _iconImagePath;
	UIImage* _iconImage;
	BOOL _didEverActivate;
	BOOL _didEverDeactivate;
	BOOL _ignoreIfAlreadyDisplaying;
	BOOL _didPlayPresentationSound;
	BOOL _allowInSetup;
	BOOL _pendInSetupIfNotAllowed;
	BOOL _pendWhileKeyBagLocked;
	BOOL _allowInCar;
	BOOL _allowMessageInCar;
	BOOL _presented;
	BOOL _ignoresQuietMode;
	BOOL _suppressForKeynote;
	unsigned long long _presentationState;
	UIImage* _headerImage;
	UIImage* _attachmentImage;

}

@property (assign,setter=_setPresentationState:,nonatomic) unsigned long long _presentationState;              //@synthesize presentationState=_presentationState - In the implementation block
@property (assign,setter=_setPresented:,getter=_isPresented,nonatomic) BOOL presented;                         //@synthesize presented=_presented - In the implementation block
@property (setter=_setHeaderImage:,nonatomic,retain) UIImage * _headerImage;                                   //@synthesize headerImage=_headerImage - In the implementation block
@property (setter=_setAttachmentImage:,nonatomic,retain) UIImage * _attachmentImage;                           //@synthesize attachmentImage=_attachmentImage - In the implementation block
@property (assign,setter=_setIgnoresQuietMode:,nonatomic) BOOL _ignoresQuietMode;                              //@synthesize ignoresQuietMode=_ignoresQuietMode - In the implementation block
@property (setter=setIconImage:,nonatomic,retain) UIImage * iconImage;                                         //@synthesize iconImage=_iconImage - In the implementation block
@property (getter=_iconImagePath,nonatomic,retain) NSString * iconImagePath;                                   //@synthesize iconImagePath=_iconImagePath - In the implementation block
@property (assign,nonatomic) BOOL ignoreIfAlreadyDisplaying;                                                   //@synthesize ignoreIfAlreadyDisplaying=_ignoreIfAlreadyDisplaying - In the implementation block
@property (assign,nonatomic) BOOL allowInSetup;                                                                //@synthesize allowInSetup=_allowInSetup - In the implementation block
@property (assign,nonatomic) BOOL pendInSetupIfNotAllowed;                                                     //@synthesize pendInSetupIfNotAllowed=_pendInSetupIfNotAllowed - In the implementation block
@property (assign,nonatomic) BOOL pendWhileKeyBagLocked;                                                       //@synthesize pendWhileKeyBagLocked=_pendWhileKeyBagLocked - In the implementation block
@property (nonatomic,retain) NSArray * allowedBundleIDs;                                                       //@synthesize allowedBundleIDs=_allowedBundleIDs - In the implementation block
@property (assign,nonatomic) BOOL suppressForKeynote;                                                          //@synthesize suppressForKeynote=_suppressForKeynote - In the implementation block
@property (assign,nonatomic) BOOL allowInCar;                                                                  //@synthesize allowInCar=_allowInCar - In the implementation block
@property (assign,nonatomic) BOOL allowMessageInCar;                                                           //@synthesize allowMessageInCar=_allowMessageInCar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_alertItemsController;
+(void)activateAlertItem:(id)arg1 ;
-(id)succinctDescription;
-(id)sound;
-(id)_alertController;
-(id)init;
-(void)didDeactivateForReason:(int)arg1 ;
-(UIImage *)_headerImage;
-(void)performUnlockAction;
-(UIImage *)iconImage;
-(BOOL)reappearsAfterLock;
-(BOOL)behavesSuperModally;
-(UIImage *)_attachmentImage;
-(BOOL)_ignoresQuietMode;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)hideOnClonedDisplay;
-(void)presentationStateDidChangeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(BOOL)allowInCar;
-(void)setAllowInCar:(BOOL)arg1 ;
-(void)deactivate;
-(id)lockLabel;
-(id)shortLockLabel;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(id)alertController;
-(BOOL)allowMenuButtonDismissal;
-(void)willDeactivateForReason:(int)arg1 ;
-(void)didFailToActivate;
-(BOOL)dismissesOverlaysOnLockScreen;
-(BOOL)_displayActionButtonOnLockScreen;
-(NSString *)description;
-(BOOL)_isPresented;
-(id)_publicDescription;
-(BOOL)reappearsAfterUnlock;
-(void)_noteVolumeOrLockPressed;
-(void)dismiss:(int)arg1 ;
-(void)_setPresented:(BOOL)arg1 ;
-(BOOL)dismissOnLock;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)_setPresentationState:(unsigned long long)arg1 ;
-(void)doCleanupAfterDeactivationAnimation;
-(BOOL)shouldShowInLockScreen;
-(unsigned long long)_presentationState;
-(id)_prepareNewAlertControllerWithLockedState:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)allowLockScreenDismissal;
-(void)willActivate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3 ;
-(BOOL)wakeDisplay;
-(BOOL)forcesModalAlertAppearance;
-(BOOL)allowInLoginWindow;
-(void)dismiss;
-(void)_setHeaderImage:(id)arg1 ;
-(void)deactivateForButton;
-(void)setSuppressForKeynote:(BOOL)arg1 ;
-(void)setPendInSetupIfNotAllowed:(BOOL)arg1 ;
-(void)setAllowInSetup:(BOOL)arg1 ;
-(void)setPendWhileKeyBagLocked:(BOOL)arg1 ;
-(void)setAllowedBundleIDs:(NSArray *)arg1 ;
-(void)_setIgnoresQuietMode:(BOOL)arg1 ;
-(void)playPresentationSound;
-(BOOL)suppressForKeynote;
-(BOOL)ignoreIfAlreadyDisplaying;
-(BOOL)allowInSetup;
-(BOOL)pendInSetupIfNotAllowed;
-(NSArray *)allowedBundleIDs;
-(BOOL)pendWhileKeyBagLocked;
-(BOOL)_didEverActivate;
-(BOOL)shouldShowInEmergencyCall;
-(void)didActivate;
-(void)_deactivationCompleted;
-(void)setAllowMessageInCar:(BOOL)arg1 ;
-(void)_clearAlertController;
-(void)deactivateForReason:(int)arg1 ;
-(void)setIgnoreIfAlreadyDisplaying:(BOOL)arg1 ;
-(BOOL)allowMessageInCar;
-(BOOL)undimsScreen;
-(BOOL)unlocksScreen;
-(BOOL)didPlayPresentationSound;
-(void)alertItemDidAppear;
-(void)alertItemDidDisappear;
-(void)willRelockForButtonPress:(BOOL)arg1 ;
-(void)setIconImagePath:(NSString *)arg1 ;
-(int)alertPriority;
-(BOOL)_hasActiveKeyboardOnScreen;
-(void)buttonDismissed;
-(id)_iconImagePath;
-(void)_setAttachmentImage:(id)arg1 ;
@end
