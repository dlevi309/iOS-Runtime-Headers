/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardUI/SBAlertItem.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol OS_dispatch_source, BSInvalidatable;
@class NSString, NSObject, NSDictionary, NSTimer, NSURL, _SBSUICFUserNotificationContentHostViewController, _SBLegacyRemoteAlertContentHostViewController, NSArray, SBUISound, BKSProcessAssertion, _SBUserNotificationImageDescriptor, UIAlertControllerVisualStyle, UIViewController;

@interface SBUserNotificationAlert : SBAlertItem <UITextFieldDelegate> {

	NSString* _alertSource;
	int _originatingPID;
	unsigned _replyPort;
	NSObject*<OS_dispatch_source> _portWatcher;
	NSObject*<OS_dispatch_source> _expirationTimer;
	BOOL _sentResponse;
	BOOL _cleanedUp;
	int _token;
	int _timeout;
	unsigned long long _requestFlags;
	NSString* _alertHeader;
	id _alertMessage;
	NSString* _alertMessageDelimiter;
	NSString* _lockScreenAlertHeader;
	id _lockScreenAlertMessage;
	NSString* _lockScreenAlertMessageDelimiter;
	NSString* _defaultButtonTitle;
	NSString* _alternateButtonTitle;
	NSString* _otherButtonTitle;
	NSString* _soundPath;
	unsigned _soundID;
	unsigned _soundIDBehavior;
	NSDictionary* _vibrationPattern;
	long long _soundAlertType;
	NSString* _soundAlertTopic;
	double _soundRepeatDuration;
	NSTimer* _soundStopTimer;
	id _keyboardTypes;
	id _autocapitalizationTypes;
	id _autocorrectionTypes;
	id _textFieldTitles;
	id _textFieldValues;
	double _creationTime;
	int _defaultButtonTag;
	int _unlockActionButtonTag;
	unsigned _replyFlags;
	NSString* _defaultResponseLaunchBundleID;
	NSURL* _defaultResponseLaunchURL;
	NSString* _remoteViewControllerClassName;
	NSString* _remoteServiceBundleIdentifier;
	_SBSUICFUserNotificationContentHostViewController* _extensionContentViewController;
	_SBLegacyRemoteAlertContentHostViewController* _viewServiceContentViewController;
	NSArray* _textFieldDefinitions;
	NSArray* _customButtonDefinitions;
	long long _defaultButtonActionStyle;
	long long _alternateButtonActionStyle;
	long long _otherButtonActionStyle;
	unsigned _allowedInLoginWindow : 1;
	unsigned _canceled : 1;
	unsigned _isActivated : 1;
	unsigned _aboveLock : 1;
	unsigned _displayActionButtonOnLockScreen : 1;
	unsigned _dismissOnLock : 1;
	unsigned _dontDismissOnUnlock : 1;
	unsigned _behavesSuperModally : 1;
	unsigned _allowMenuButtonDismissal : 1;
	unsigned _wakeDisplay : 1;
	unsigned _forcesModalAlertAppearance : 1;
	unsigned _dismissesOverlaysOnLockScreen : 1;
	unsigned _disableIdleSleepWhileVisible : 1;
	unsigned _hideOnClonedDisplay : 1;
	unsigned _configuredLocked : 1;
	unsigned _configuredNeedsPasscode : 1;
	unsigned _defaultResponseAppLaunchWaitingForPasscode : 1;
	unsigned _deactivatingForPresentationUpdate : 1;
	SBUISound* _sound;
	BKSProcessAssertion* _processAssertion;
	unsigned _allowLockscreenDismissal : 1;
	id<BSInvalidatable> _idleTimerDisableAssertion;
	_SBUserNotificationImageDescriptor* _headerImageDescriptor;
	_SBUserNotificationImageDescriptor* _iconImageDescriptor;
	_SBUserNotificationImageDescriptor* _attachmentImageDescriptor;
	UIAlertControllerVisualStyle* _visualStyle;
	NSString* _extensionIdentifier;
	UIViewController* _contentViewControllerForAlertController;

}

@property (retain) id keyboardTypes;                                                        //@synthesize keyboardTypes=_keyboardTypes - In the implementation block
@property (retain) id autocapitalizationTypes;                                              //@synthesize autocapitalizationTypes=_autocapitalizationTypes - In the implementation block
@property (retain) id autocorrectionTypes;                                                  //@synthesize autocorrectionTypes=_autocorrectionTypes - In the implementation block
@property (retain) id textFieldTitles;                                                      //@synthesize textFieldTitles=_textFieldTitles - In the implementation block
@property (retain) id textFieldValues;                                                      //@synthesize textFieldValues=_textFieldValues - In the implementation block
@property (retain) NSString * soundPath;                                                    //@synthesize soundPath=_soundPath - In the implementation block
@property (assign) unsigned soundID;                                                        //@synthesize soundID=_soundID - In the implementation block
@property (assign) unsigned soundIDBehavior;                                                //@synthesize soundIDBehavior=_soundIDBehavior - In the implementation block
@property (retain) NSDictionary * vibrationPattern;                                         //@synthesize vibrationPattern=_vibrationPattern - In the implementation block
@property (assign) long long soundAlertType;                                                //@synthesize soundAlertType=_soundAlertType - In the implementation block
@property (retain) NSString * soundAlertTopic;                                              //@synthesize soundAlertTopic=_soundAlertTopic - In the implementation block
@property (retain) NSString * alertHeader;                                                  //@synthesize alertHeader=_alertHeader - In the implementation block
@property (retain) NSString * alertMessage;                                                 //@synthesize alertMessage=_alertMessage - In the implementation block
@property (retain) NSString * alertMessageDelimiter;                                        //@synthesize alertMessageDelimiter=_alertMessageDelimiter - In the implementation block
@property (retain) NSString * lockScreenAlertHeader;                                        //@synthesize lockScreenAlertHeader=_lockScreenAlertHeader - In the implementation block
@property (retain) NSString * lockScreenAlertMessage;                                       //@synthesize lockScreenAlertMessage=_lockScreenAlertMessage - In the implementation block
@property (retain) NSString * lockScreenAlertMessageDelimiter;                              //@synthesize lockScreenAlertMessageDelimiter=_lockScreenAlertMessageDelimiter - In the implementation block
@property (retain) NSString * defaultButtonTitle;                                           //@synthesize defaultButtonTitle=_defaultButtonTitle - In the implementation block
@property (retain) NSString * alternateButtonTitle;                                         //@synthesize alternateButtonTitle=_alternateButtonTitle - In the implementation block
@property (retain) NSString * otherButtonTitle;                                             //@synthesize otherButtonTitle=_otherButtonTitle - In the implementation block
@property (retain) NSString * defaultResponseLaunchBundleID;                                //@synthesize defaultResponseLaunchBundleID=_defaultResponseLaunchBundleID - In the implementation block
@property (retain) NSURL * defaultResponseLaunchURL;                                        //@synthesize defaultResponseLaunchURL=_defaultResponseLaunchURL - In the implementation block
@property (retain) NSString * remoteViewControllerClassName;                                //@synthesize remoteViewControllerClassName=_remoteViewControllerClassName - In the implementation block
@property (retain) NSString * remoteServiceBundleIdentifier;                                //@synthesize remoteServiceBundleIdentifier=_remoteServiceBundleIdentifier - In the implementation block
@property (retain) NSString * extensionIdentifier;                                          //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (retain) UIViewController * contentViewControllerForAlertController;              //@synthesize contentViewControllerForAlertController=_contentViewControllerForAlertController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sound;
-(void)setSoundIDBehavior:(unsigned)arg1 ;
-(void)setAlternateButtonTitle:(NSString *)arg1 ;
-(void)_cleanup;
-(void)dismissIfNecessaryWithResponse:(int)arg1 ;
-(id)initWithMessage:(id)arg1 replyPort:(unsigned)arg2 requestFlags:(int)arg3 auditToken:(id)arg4 ;
-(void)setAutocorrectionTypes:(id)arg1 ;
-(void)setAlertMessage:(NSString *)arg1 ;
-(void)setDefaultResponseLaunchBundleID:(NSString *)arg1 ;
-(void)didDeactivateForReason:(int)arg1 ;
-(NSString *)alternateButtonTitle;
-(id)_headerImage;
-(void)setSoundPath:(NSString *)arg1 ;
-(void)performUnlockAction;
-(id)iconImage;
-(NSString *)remoteViewControllerClassName;
-(NSURL *)defaultResponseLaunchURL;
-(BOOL)reappearsAfterLock;
-(NSDictionary *)vibrationPattern;
-(BOOL)behavesSuperModally;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(id)_attachmentImage;
-(void)setLockScreenAlertMessageDelimiter:(NSString *)arg1 ;
-(void)_sendResponseAndCleanUp:(int)arg1 customButtonResponse:(int)arg2 ;
-(BOOL)hideOnClonedDisplay;
-(void)presentationStateDidChangeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(NSString *)lockScreenAlertMessageDelimiter;
-(void)_activateApplication:(id)arg1 withURL:(id)arg2 ;
-(NSString *)lockScreenAlertHeader;
-(void)setTextFieldValues:(id)arg1 ;
-(NSString *)remoteServiceBundleIdentifier;
-(id)_parseCustomButtonDefinitions:(id)arg1 locBundle:(id)arg2 ;
-(void)setKeyboardTypes:(id)arg1 ;
-(id)_imageDescriptorForPath:(id)arg1 catalogPath:(id)arg2 catalogImageKey:(id)arg3 ;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)_sendResponseAndCleanUp:(int)arg1 ;
-(BOOL)allowMenuButtonDismissal;
-(void)dismissIfNecessaryWithResponse:(int)arg1 customButtonResponse:(int)arg2 ;
-(NSString *)defaultResponseLaunchBundleID;
-(void)willDeactivateForReason:(int)arg1 ;
-(void)didFailToActivate;
-(BOOL)dismissesOverlaysOnLockScreen;
-(BOOL)_displayActionButtonOnLockScreen;
-(NSString *)description;
-(id)parseVisualStyleForMessage:(id)arg1 ;
-(void)setVibrationPattern:(NSDictionary *)arg1 ;
-(void)setSoundAlertType:(long long)arg1 ;
-(id)_publicDescription;
-(NSString *)alertMessageDelimiter;
-(BOOL)reappearsAfterUnlock;
-(void)_noteVolumeOrLockPressed;
-(void)setAutocapitalizationTypes:(id)arg1 ;
-(id)textFieldValues;
-(void)setContentViewControllerForAlertController:(UIViewController *)arg1 ;
-(void)_cleanupCustomContentViewControllers;
-(void)setTextFieldTitles:(id)arg1 ;
-(NSString *)defaultButtonTitle;
-(BOOL)dismissOnLock;
-(id)textFieldTitles;
-(void)setLockScreenAlertMessage:(NSString *)arg1 ;
-(long long)_uiAlertActionStyleFromSBUserNotificationButtonPresentationStyle:(int)arg1 ;
-(void)doCleanupAfterDeactivationAnimation;
-(id)keyboardTypes;
-(BOOL)shouldShowInLockScreen;
-(long long)soundAlertType;
-(id)_parseTextFieldDefinitions:(id)arg1 locBundle:(id)arg2 ;
-(unsigned)soundIDBehavior;
-(void)setLockScreenAlertHeader:(NSString *)arg1 ;
-(id)_prepareNewAlertControllerWithLockedState:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)setSoundAlertTopic:(NSString *)arg1 ;
-(BOOL)allowLockScreenDismissal;
-(id)autocorrectionTypes;
-(void)willActivate;
-(id)autocapitalizationTypes;
-(NSString *)extensionIdentifier;
-(NSString *)soundPath;
-(int)token;
-(void)_setActivated:(BOOL)arg1 ;
-(void)setSoundID:(unsigned)arg1 ;
-(NSString *)soundAlertTopic;
-(void)setAlertHeader:(NSString *)arg1 ;
-(NSString *)alertMessage;
-(void)setDefaultButtonTitle:(NSString *)arg1 ;
-(NSString *)otherButtonTitle;
-(void)setDefaultResponseLaunchURL:(NSURL *)arg1 ;
-(long long)_uiAlertActionLayoutDirectionFromSBUserNotificationButtonLayoutDirection:(unsigned)arg1 ;
-(void)setAlertMessageDelimiter:(NSString *)arg1 ;
-(id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3 ;
-(UIViewController *)contentViewControllerForAlertController;
-(void)cancel;
-(BOOL)wakeDisplay;
-(void)setRemoteServiceBundleIdentifier:(NSString *)arg1 ;
-(BOOL)forcesModalAlertAppearance;
-(unsigned)soundID;
-(NSString *)lockScreenAlertMessage;
-(id)_safeLocalizedValue:(id)arg1 withBundle:(id)arg2 ;
-(BOOL)allowInLoginWindow;
-(void)_clearRemoteViewControllerIfPresent;
-(void)setOtherButtonTitle:(NSString *)arg1 ;
-(void)dealloc;
-(void)setRemoteViewControllerClassName:(NSString *)arg1 ;
-(id)_parseLegacyTextFieldDefinitions:(id)arg1 locBundle:(id)arg2 ;
-(NSString *)alertHeader;
-(void)updateWithMessage:(id)arg1 requestFlags:(int)arg2 ;
@end

