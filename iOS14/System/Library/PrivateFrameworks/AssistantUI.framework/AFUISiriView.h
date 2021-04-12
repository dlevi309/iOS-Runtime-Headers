/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SiriUISiriStatusViewDelegate.h>
#import <libobjc.A.dylib/AFUIPasscodeContainerViewDelegate.h>
#import <libobjc.A.dylib/AFUISiriContent.h>

@protocol SiriUISiriStatusViewProtocol, AFUISiriViewDataSource, AFUISiriViewDelegate;
@class _UIBackdropView, UIView, SiriUIAudioRoutePickerButton, SiriUIHelpButton, SiriUIContentButton, SiriUIConfiguration, AFUIPasscodeContainerView, SiriUIVisualEffectView, UIImageView, UILabel, NSString;

@interface AFUISiriView : UIView <SiriUISiriStatusViewDelegate, AFUIPasscodeContainerViewDelegate, AFUISiriContent> {

	_UIBackdropView* _backdropView;
	BOOL _backdropViewVisible;
	UIEdgeInsets _suspendedSafeAreaInsets;
	BOOL _safeAreaInsetsSuspended;
	UIView* _dimmingAndLockContainer;
	UIView* _statusViewContainer;
	SiriUIAudioRoutePickerButton* _audioRoutePickerButton;
	SiriUIHelpButton* _helpButton;
	SiriUIContentButton* _reportBugButton;
	UIView* _voiceActivationMaskView;
	SiriUIConfiguration* _configuration;
	AFUIPasscodeContainerView* _lockContainerView;
	BOOL _inShowUnlockViewAnimation;
	BOOL _inHideUnlockViewAnimation;
	BOOL _remoteContentViewHidden;
	BOOL _lockViewHidden;
	BOOL _flamesViewDeferred;
	BOOL _helpButtonDeferred;
	BOOL _inFluidDismissal;
	BOOL _statusViewHidden;
	BOOL _flamesViewPaused;
	BOOL _keepStatusViewHidden;
	SiriUIVisualEffectView* _eyesFreeEffectView;
	UIImageView* _eyesFreeLogoView;
	UILabel* _assistantVersionLabel;
	SiriUIVisualEffectView* _assistantVersionVisualEffectView;
	UIView* _foregroundView;
	UIView* _foregroundContainerView;
	_UIBackdropView* _backgroundBlurView;
	long long _siriSessionState;
	long long _mode;
	double _statusViewHeight;
	UIView*<SiriUISiriStatusViewProtocol> _siriStatusView;
	BOOL _disabled;
	UIView* _remoteContentView;
	id<AFUISiriViewDataSource> _dataSource;
	id<AFUISiriViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AFUISiriViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                             //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,readonly) UIView * foregroundView;                                 //@synthesize foregroundView=_foregroundView - In the implementation block
@property (nonatomic,readonly) UIView * foregroundContainerView;                        //@synthesize foregroundContainerView=_foregroundContainerView - In the implementation block
@property (nonatomic,readonly) _UIBackdropView * backgroundBlurView; 
@property (nonatomic,readonly) double statusViewHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long siriSessionState;                                //@synthesize siriSessionState=_siriSessionState - In the implementation block
@property (assign,nonatomic) long long mode;                                            //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) UIView * remoteContentView;                                //@synthesize remoteContentView=_remoteContentView - In the implementation block
+(void)_animateView:(id)arg1 fromYPosition:(double)arg2 toYPosition:(double)arg3 fade:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(UIEdgeInsets)safeAreaInsets;
-(void)setDisabled:(BOOL)arg1 ;
-(long long)mode;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)fadeOutCurrentAura;
-(id<AFUISiriViewDelegate>)delegate;
-(void)setBackdropVisible:(BOOL)arg1 ;
-(UIView *)foregroundView;
-(id<AFUISiriViewDataSource>)dataSource;
-(void)setMode:(long long)arg1 ;
-(void)setDelegate:(id<AFUISiriViewDelegate>)arg1 ;
-(void)setDataSource:(id<AFUISiriViewDataSource>)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 ;
-(void)reloadData;
-(_UIBackdropView *)backgroundBlurView;
-(void)safeAreaInsetsDidChange;
-(BOOL)disabled;
-(void)dealloc;
-(void)siriStatusViewWasTapped:(id)arg1 ;
-(void)siriStatusViewHoldDidBegin:(id)arg1 ;
-(void)siriStatusViewHoldDidEnd:(id)arg1 ;
-(UIEdgeInsets)safeAreaInsetsForSiriStatusView:(id)arg1 ;
-(float)audioLevelForSiriStatusView:(id)arg1 ;
-(void)setupOrbIfNeeded;
-(void)setFlamesViewDeferred:(BOOL)arg1 ;
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
-(void)setInFluidDismissal:(BOOL)arg1 ;
-(void)_setupContentViews;
-(void)_updateSiriStatusViewForMode:(long long)arg1 ;
-(BOOL)_wantsBackdropView:(long long)arg1 ;
-(BOOL)_reducesMotionEffects;
-(void)_destroyAssistantVersionLabelIfNecessary;
-(BOOL)_isTextInputEnabled;
-(void)_updateControlsAppearance;
-(void)_configureEyesFreeLogo;
-(void)_configureHelpButton;
-(void)configureReportBugButtonToShowHoldToTalkState:(BOOL)arg1 ;
-(void)_createAssistantVersionLabelIfNecessary;
-(CGRect)_remoteContentViewFrame;
-(CGRect)_lockViewFrame;
-(CGRect)_statusViewContainerFrame;
-(double)_buttonInset;
-(void)_layoutReportBugButton;
-(void)_setSafeAreaInsetsSuspended:(BOOL)arg1 ;
-(void)_animateButtonsHidden:(BOOL)arg1 ;
-(void)_setupButtonsIfNecessary;
-(id)dimBackdropSettings;
-(void)_placeRemoteContentView;
-(void)_setupVoiceActivationMaskView;
-(void)setStatusViewHidden:(BOOL)arg1 ;
-(void)_createReportBugButtonWithTemplateImage:(id)arg1 andConfigureWithHoldToTalkState:(BOOL)arg2 ;
-(void)_configureReportBugButtonWithHoldToTalkState:(BOOL)arg1 ;
-(BOOL)_shouldIndicateHoldToTalkMode;
-(BOOL)_helpButtonIsVisible;
-(void)showPasscodeUnlockWithStatusText:(id)arg1 subtitle:(id)arg2 completionHandler:(/*^block*/id)arg3 unlockCompletionHandler:(/*^block*/id)arg4 ;
-(void)cancelShowingPasscodeUnlock;
-(void)_animateLockViewIsAnimatingIn:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(UIView *)foregroundContainerView;
-(void)passcodeView:(id)arg1 hideLockViewWithResult:(long long)arg2 unlockCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)passcodeView:(id)arg1 attemptUnlockWithPassword:(id)arg2 ;
-(void)passcodeView:(id)arg1 animateShowPasscodeWithCompletionHandler:(/*^block*/id)arg2 ;
-(UIView *)remoteContentView;
-(void)setRemoteContentView:(UIView *)arg1 ;
-(long long)siriSessionState;
-(void)setSiriSessionState:(long long)arg1 ;
-(void)setVoiceActivationMaskViewVisible:(BOOL)arg1 ;
-(void)setContentViewsAlpha:(double)arg1 ;
-(void)setStatusViewUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)flamesViewPaused;
-(void)setFlamesViewPaused:(BOOL)arg1 ;
-(void)teardownStatusView;
-(void)setBackdropShouldRasterize:(BOOL)arg1 ;
-(void)updateForPercentageRevealed:(double)arg1 ;
-(void)_preferencesDidChange:(id)arg1 ;
-(void)setBugReportingAvailable:(BOOL)arg1 ;
-(void)setHelpButtonEmphasized:(BOOL)arg1 ;
-(void)setHelpButtonDeferred:(BOOL)arg1 ;
-(void)pulseHelpButton;
-(void)siriDidActivateFromSource:(long long)arg1 ;
@end

