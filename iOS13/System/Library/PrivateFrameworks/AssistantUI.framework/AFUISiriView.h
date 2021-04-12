/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SiriUISiriStatusViewDelegate.h>
#import <libobjc.A.dylib/SBUIPasscodeLockViewDelegate.h>
#import <libobjc.A.dylib/AFUISiriRemoteViewHosting.h>

@protocol SBUIPasscodeLockView, AFUISiriViewDataSource, AFUISiriViewDelegate, SiriUISiriStatusViewProtocol;
@class UIView, _UIBackdropView, AFUISiriCarPlayView, SiriUIAudioRoutePickerButton, SiriUIHelpButton, SiriUIContentButton, SiriUIConfiguration, SiriUIVisualEffectView, UIImageView, UILabel, NSString;

@interface AFUISiriView : UIView <SiriUISiriStatusViewDelegate, SBUIPasscodeLockViewDelegate, AFUISiriRemoteViewHosting> {

	_UIBackdropView* _backdropView;
	BOOL _backdropViewVisible;
	AFUISiriCarPlayView* _carPlayView;
	UIEdgeInsets _suspendedSafeAreaInsets;
	BOOL _safeAreaInsetsSuspended;
	UIView* _dimmingAndLockContainer;
	UIView* _statusViewContainer;
	SiriUIAudioRoutePickerButton* _audioRoutePickerButton;
	SiriUIHelpButton* _helpButton;
	SiriUIContentButton* _reportBugButton;
	SiriUIConfiguration* _configuration;
	UIView*<SBUIPasscodeLockView> _lockView;
	unsigned long long _unlockAttemptCount;
	/*^block*/id _unlockCompletion;
	BOOL _inShowUnlockViewAnimation;
	BOOL _inHideUnlockViewanimation;
	BOOL _remoteContentViewHidden;
	BOOL _lockViewHidden;
	SiriUIVisualEffectView* _eyesFreeEffectView;
	UIImageView* _eyesFreeLogoView;
	UILabel* _assistantVersionLabel;
	SiriUIVisualEffectView* _assistantVersionVisualEffectView;
	BOOL _disabled;
	BOOL _statusViewHidden;
	BOOL _keepStatusViewHidden;
	BOOL _flamesViewDeferred;
	BOOL _helpButtonDeferred;
	BOOL _inFluidDismissal;
	UIView* _remoteContentView;
	UIView* _foregroundView;
	UIView* _foregroundContainerView;
	id<AFUISiriViewDataSource> _dataSource;
	id<AFUISiriViewDelegate> _delegate;
	long long _siriSessionState;
	long long _mode;
	UIView*<SiriUISiriStatusViewProtocol> _siriStatusView;

}

@property (nonatomic,readonly) UIView * foregroundView;                                         //@synthesize foregroundView=_foregroundView - In the implementation block
@property (nonatomic,readonly) UIView * foregroundContainerView;                                //@synthesize foregroundContainerView=_foregroundContainerView - In the implementation block
@property (nonatomic,readonly) _UIBackdropView * backgroundBlurView; 
@property (assign,nonatomic,__weak) id<AFUISiriViewDataSource> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                                     //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL statusViewHidden;                                             //@synthesize statusViewHidden=_statusViewHidden - In the implementation block
@property (assign,nonatomic) BOOL keepStatusViewHidden;                                         //@synthesize keepStatusViewHidden=_keepStatusViewHidden - In the implementation block
@property (assign,nonatomic) BOOL flamesViewDeferred;                                           //@synthesize flamesViewDeferred=_flamesViewDeferred - In the implementation block
@property (assign,nonatomic) BOOL flamesViewPaused; 
@property (assign,nonatomic) BOOL helpButtonDeferred;                                           //@synthesize helpButtonDeferred=_helpButtonDeferred - In the implementation block
@property (assign,getter=isInUITrackingMode,nonatomic) BOOL inUITrackingMode; 
@property (assign,getter=isInFluidDismissal,nonatomic) BOOL inFluidDismissal;                   //@synthesize inFluidDismissal=_inFluidDismissal - In the implementation block
@property (assign,nonatomic) long long siriSessionState;                                        //@synthesize siriSessionState=_siriSessionState - In the implementation block
@property (assign,nonatomic) long long mode;                                                    //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) double statusViewHeight; 
@property (nonatomic,retain) UIView*<SiriUISiriStatusViewProtocol> siriStatusView;              //@synthesize siriStatusView=_siriStatusView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIView * remoteContentView;                                        //@synthesize remoteContentView=_remoteContentView - In the implementation block
+(void)_animateView:(id)arg1 fromYPosition:(double)arg2 toYPosition:(double)arg3 fade:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)dealloc;
-(id<AFUISiriViewDelegate>)delegate;
-(void)setDelegate:(id<AFUISiriViewDelegate>)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(BOOL)disabled;
-(id<AFUISiriViewDataSource>)dataSource;
-(void)setDataSource:(id<AFUISiriViewDataSource>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)safeAreaInsets;
-(void)layoutSubviews;
-(void)reloadData;
-(void)setDisabled:(BOOL)arg1 ;
-(void)safeAreaInsetsDidChange;
-(void)setBackdropVisible:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 ;
-(_UIBackdropView *)backgroundBlurView;
-(UIView *)foregroundView;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg1 ;
-(void)passcodeLockViewPasscodeEntered:(id)arg1 ;
-(void)fadeOutCurrentAura;
-(void)siriDidActivateFromSource:(long long)arg1 ;
-(void)siriStatusViewWasTapped:(id)arg1 ;
-(void)siriStatusViewHoldDidBegin:(id)arg1 ;
-(void)siriStatusViewHoldDidEnd:(id)arg1 ;
-(UIEdgeInsets)safeAreaInsetsForSiriStatusView:(id)arg1 ;
-(float)audioLevelForSiriStatusView:(id)arg1 ;
-(void)setupOrbIfNeeded;
-(BOOL)flamesViewDeferred;
-(void)setFlamesViewDeferred:(BOOL)arg1 ;
-(BOOL)isInUITrackingMode;
-(void)setInUITrackingMode:(BOOL)arg1 ;
-(double)statusViewHeight;
-(void)_helpButtonTapped:(id)arg1 ;
-(void)_audioRouteButtonTapped:(id)arg1 ;
-(BOOL)_showsReportBugButton;
-(void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(/*^block*/id)arg1 ;
-(void)_reportBugButtonTapped;
-(void)_reportBugButtonLongPressed;
-(void)setShowAudioRoutePicker:(BOOL)arg1 ;
-(void)setAudioRoutePickerBluetoothOn:(BOOL)arg1 ;
-(BOOL)_isCarPlayMode:(long long)arg1 ;
-(BOOL)_reducesMotionEffects;
-(void)_updateSiriStatusViewForMode:(long long)arg1 ;
-(void)_destroyAssistantVersionLabelIfNecessary;
-(BOOL)_isTextInputEnabled;
-(void)_updateControlsAppearance;
-(void)_configureEyesFreeLogo;
-(void)_configureHelpButton;
-(void)configureReportBugButtonToShowHoldToTalkState:(BOOL)arg1 ;
-(void)_createAssistantVersionLabelIfNecessary;
-(CGRect)_remoteContentViewFrame;
-(BOOL)isInFluidDismissal;
-(CGRect)_lockViewFrame;
-(CGRect)_statusViewContainerFrame;
-(double)_buttonInset;
-(void)_layoutReportBugButton;
-(void)_setSafeAreaInsetsSuspended:(BOOL)arg1 ;
-(void)_animateButtonsHidden:(BOOL)arg1 ;
-(void)_setupButtonsIfNecessary;
-(id)dimBackdropSettings;
-(void)_createReportBugButtonWithTemplateImage:(id)arg1 andConfigureWithHoldToTalkState:(BOOL)arg2 ;
-(void)_configureReportBugButtonWithHoldToTalkState:(BOOL)arg1 ;
-(BOOL)_shouldIndicateHoldToTalkMode;
-(BOOL)_helpButtonIsVisible;
-(id)_lockViewLegibilityProvider;
-(void)_animateLockViewIsAnimatingIn:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hideLockViewWithResult:(long long)arg1 hideCompletion:(/*^block*/id)arg2 ;
-(void)setStatusViewHidden:(BOOL)arg1 ;
-(void)_hideLockViewWithResult:(long long)arg1 ;
-(UIView *)remoteContentView;
-(void)setRemoteContentView:(UIView *)arg1 ;
-(void)setInFluidDismissal:(BOOL)arg1 ;
-(void)setCarDisplaySnippetMode:(long long)arg1 ;
-(void)setStatusViewUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)flamesViewPaused;
-(void)setFlamesViewPaused:(BOOL)arg1 ;
-(void)teardownStatusView;
-(void)setBackdropShouldRasterize:(BOOL)arg1 ;
-(void)updateForPercentageRevealed:(double)arg1 ;
-(void)_preferencesDidChange:(id)arg1 ;
-(void)setSiriSessionState:(long long)arg1 ;
-(void)setBugReportingAvailable:(BOOL)arg1 ;
-(void)setHelpButtonEmphasized:(BOOL)arg1 ;
-(void)pulseHelpButton;
-(void)showPasscodeUnlockWithStatusText:(id)arg1 subTitle:(id)arg2 completionHandler:(/*^block*/id)arg3 unlockCompletionHandler:(/*^block*/id)arg4 ;
-(void)cancelShowingPasscodeUnlock;
-(UIView *)foregroundContainerView;
-(BOOL)statusViewHidden;
-(BOOL)keepStatusViewHidden;
-(void)setKeepStatusViewHidden:(BOOL)arg1 ;
-(BOOL)helpButtonDeferred;
-(void)setHelpButtonDeferred:(BOOL)arg1 ;
-(long long)siriSessionState;
-(UIView*<SiriUISiriStatusViewProtocol>)siriStatusView;
-(void)setSiriStatusView:(UIView*<SiriUISiriStatusViewProtocol>)arg1 ;
@end

