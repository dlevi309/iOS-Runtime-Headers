/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/SBUIPasscodeLockViewDelegate.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@protocol SBUIPasscodeLockView_Internal, CSPasscodeViewControllerDelegate, CSCoverSheetContextProviding, CSWallpaperColorProvider;
@class SBFAuthenticationAssertion, UIView, CSPasscodeBackgroundView, CSLockScreenPearlSettings, SBUIProudLockContainerViewController, NSString, UIColor;

@interface CSPasscodeViewController : CSCoverSheetViewControllerBase <SBUIPasscodeLockViewDelegate, PTSettingsKeyObserver> {

	BOOL _attemptingUnlock;
	SBFAuthenticationAssertion* _sustainAuthenticationAssertion;
	unsigned long long _options;
	UIView*<SBUIPasscodeLockView_Internal> _passcodeLockView;
	CSPasscodeBackgroundView* _backgroundView;
	BOOL _isBeingDismissedAfterInterstitialTransitionCancelled;
	CSLockScreenPearlSettings* _pearlSettings;
	BOOL _useBiometricPresentation;
	BOOL _biometricButtonsInitiallyVisible;
	BOOL _showProudLock;
	BOOL _confirmedNotInPocket;
	id<CSPasscodeViewControllerDelegate> _delegate;
	SBUIProudLockContainerViewController* _proudLockContainerViewControllerToUpdate;
	NSString* _unlockDestination;
	UIColor* _wallpaperAverageColorOverride;
	id<CSCoverSheetContextProviding> _coverSheetContext;
	id<CSWallpaperColorProvider> _wallpaperColorProvider;

}

@property (assign,nonatomic,__weak) id<CSPasscodeViewControllerDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL useBiometricPresentation;                                                                //@synthesize useBiometricPresentation=_useBiometricPresentation - In the implementation block
@property (assign,nonatomic) BOOL biometricButtonsInitiallyVisible;                                                        //@synthesize biometricButtonsInitiallyVisible=_biometricButtonsInitiallyVisible - In the implementation block
@property (assign,nonatomic) BOOL showProudLock;                                                                           //@synthesize showProudLock=_showProudLock - In the implementation block
@property (nonatomic,retain) SBUIProudLockContainerViewController * proudLockContainerViewControllerToUpdate;              //@synthesize proudLockContainerViewControllerToUpdate=_proudLockContainerViewControllerToUpdate - In the implementation block
@property (nonatomic,copy) NSString * unlockDestination;                                                                   //@synthesize unlockDestination=_unlockDestination - In the implementation block
@property (assign,nonatomic) UIColor * wallpaperAverageColorOverride;                                                      //@synthesize wallpaperAverageColorOverride=_wallpaperAverageColorOverride - In the implementation block
@property (assign,nonatomic) BOOL confirmedNotInPocket;                                                                    //@synthesize confirmedNotInPocket=_confirmedNotInPocket - In the implementation block
@property (nonatomic,retain) id<CSCoverSheetContextProviding> coverSheetContext;                                           //@synthesize coverSheetContext=_coverSheetContext - In the implementation block
@property (nonatomic,retain) id<CSWallpaperColorProvider> wallpaperColorProvider;                                          //@synthesize wallpaperColorProvider=_wallpaperColorProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(id<CSPasscodeViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CSPasscodeViewControllerDelegate>)arg1 ;
-(void)loadView;
-(long long)presentationStyle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(long long)presentationType;
-(long long)presentationTransition;
-(NSString *)unlockDestination;
-(void)setUnlockDestination:(NSString *)arg1 ;
-(BOOL)confirmedNotInPocket;
-(void)setConfirmedNotInPocket:(BOOL)arg1 ;
-(void)passcodeLockViewStateChange:(id)arg1 ;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg1 ;
-(void)passcodeLockViewEmergencyCallButtonPressed:(id)arg1 ;
-(void)passcodeLockViewPasscodeEntered:(id)arg1 ;
-(void)passcodeLockViewPasscodeDidChange:(id)arg1 ;
-(id<CSCoverSheetContextProviding>)coverSheetContext;
-(void)setCoverSheetContext:(id<CSCoverSheetContextProviding>)arg1 ;
-(long long)presentationPriority;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(void)setWallpaperColorProvider:(id<CSWallpaperColorProvider>)arg1 ;
-(id<CSWallpaperColorProvider>)wallpaperColorProvider;
-(void)_updateProudLockViewControllerConfiguration;
-(void)setWallpaperAverageColorOverride:(UIColor *)arg1 ;
-(void)setUseBiometricPresentation:(BOOL)arg1 ;
-(void)setBiometricButtonsInitiallyVisible:(BOOL)arg1 ;
-(void)setShowProudLock:(BOOL)arg1 ;
-(void)setProudLockContainerViewControllerToUpdate:(SBUIProudLockContainerViewController *)arg1 ;
-(void)beginInteractivePresentationTransitionForInitialTransition:(BOOL)arg1 ;
-(void)updateInteractiveTransitionWithPercent:(double)arg1 forInitialTransition:(BOOL)arg2 ;
-(void)endInteractiveTransitionToPresented:(BOOL)arg1 forInitialTransition:(BOOL)arg2 ;
-(void)commitingToEndTransitionToPresented:(BOOL)arg1 forInitialTransition:(BOOL)arg2 ;
-(BOOL)presentationCancelsTouches;
-(void)_setBiometricAuthenticationEnabledForTransientAppearanceTransition:(BOOL)arg1 ;
-(BOOL)_shouldUseLightStylePasscodeView;
-(BOOL)useBiometricPresentation;
-(BOOL)biometricButtonsInitiallyVisible;
-(void)_updateReduceTransparencyBackingColor;
-(SBUIProudLockContainerViewController *)proudLockContainerViewControllerToUpdate;
-(BOOL)showProudLock;
-(void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(BOOL)arg2 ;
-(BOOL)_shouldEmulateInteractivePresentation;
-(void)_emulateInteractivePresentation;
-(id)_effectiveAverageWallpaperColor;
-(id)displayLayoutElementIdentifier;
-(void)performCustomTransitionToVisible:(BOOL)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(UIColor *)wallpaperAverageColorOverride;
@end

