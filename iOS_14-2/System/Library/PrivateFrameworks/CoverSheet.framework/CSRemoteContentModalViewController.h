/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSModalViewControllerBase.h>
#import <libobjc.A.dylib/CSRemoteContentHostDelegate.h>
#import <libobjc.A.dylib/CSDismissableModalViewControllerDelegate.h>
#import <libobjc.A.dylib/CSRemoteModalContentViewTouchDelegate.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@protocol CSRemoteContentModalViewControllerDelegate, SBFAuthenticationStatusProvider;
@class UIViewFloatAnimatableProperty, SBFFluidBehaviorSettings, UIView, SBSRemoteContentDefinition, CSRemoteContentHostViewController, SBSRemoteContentPreferences, CSLockScreenSettings, UIImpactFeedbackGenerator, CSComponent, CSDashBoardRemoteContentSettings, NSString;

@interface CSRemoteContentModalViewController : CSModalViewControllerBase <CSRemoteContentHostDelegate, CSDismissableModalViewControllerDelegate, CSRemoteModalContentViewTouchDelegate, PTSettingsKeyObserver> {

	CGPoint _previousTranslation;
	UIViewFloatAnimatableProperty* _scaleProperty;
	SBFFluidBehaviorSettings* _scaleSettings;
	UIViewFloatAnimatableProperty* _alphaProperty;
	SBFFluidBehaviorSettings* _alphaSettings;
	UIView* _grabberView;
	BOOL _suppressingWhitePointReduction;
	BOOL _dismissing;
	SBSRemoteContentDefinition* _definition;
	CSRemoteContentHostViewController* _contentViewController;
	SBSRemoteContentPreferences* _remoteContentPreferences;
	id<CSRemoteContentModalViewControllerDelegate> _delegate;
	id<SBFAuthenticationStatusProvider> _authenticationStatusProvider;
	CSLockScreenSettings* _lockScreenSettings;
	UIImpactFeedbackGenerator* _rubberBandFeedbackGenerator;
	CSComponent* _scalableContent;
	CSDashBoardRemoteContentSettings* _remoteContentSettings;

}

@property (nonatomic,retain) CSLockScreenSettings * lockScreenSettings;                                       //@synthesize lockScreenSettings=_lockScreenSettings - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * rubberBandFeedbackGenerator;                         //@synthesize rubberBandFeedbackGenerator=_rubberBandFeedbackGenerator - In the implementation block
@property (nonatomic,retain) CSComponent * scalableContent;                                                   //@synthesize scalableContent=_scalableContent - In the implementation block
@property (nonatomic,retain) CSDashBoardRemoteContentSettings * remoteContentSettings;                        //@synthesize remoteContentSettings=_remoteContentSettings - In the implementation block
@property (assign,nonatomic,__weak) id<CSRemoteContentModalViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;              //@synthesize authenticationStatusProvider=_authenticationStatusProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBFAuthenticationStatusProvider>)authenticationStatusProvider;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setRubberBandFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(CSLockScreenSettings *)lockScreenSettings;
-(id)displayLayoutElementIdentifier;
-(void)setLockScreenSettings:(CSLockScreenSettings *)arg1 ;
-(CSComponent *)scalableContent;
-(void)_setCornerRounded:(BOOL)arg1 ;
-(id<CSRemoteContentModalViewControllerDelegate>)delegate;
-(BOOL)handleEvent:(id)arg1 ;
-(void)_createProperties;
-(BOOL)_shouldCancelInteractiveDismissGesture;
-(void)aggregateBehavior:(id)arg1 ;
-(void)_updateForPropertyChanged;
-(UIImpactFeedbackGenerator *)rubberBandFeedbackGenerator;
-(void)setDelegate:(id<CSRemoteContentModalViewControllerDelegate>)arg1 ;
-(long long)_dateTimeStyle;
-(void)aggregateAppearance:(id)arg1 ;
-(void)viewDidLoad;
-(long long)_backgroundStyle;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)didInvalidate;
-(void)loadView;
-(void)didChangeStyle;
-(void)configureDisplayLayoutElement:(id)arg1 ;
-(long long)_homeGestureMode;
-(BOOL)_reducesWhitePoint;
-(BOOL)_suppressesBottomEdgeContent;
-(void)dealloc;
-(void)addGrabberView:(id)arg1 ;
-(void)handleSecondaryActionForView:(id)arg1 ;
-(void)handleBottomEdgeGestureBegan:(id)arg1 ;
-(void)handleBottomEdgeGestureChanged:(id)arg1 ;
-(void)handleBottomEdgeGestureEnded:(id)arg1 ;
-(void)dismissForHomeButton;
-(BOOL)dismissForDismissType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isInUnlockGestureMode;
-(BOOL)shouldCaptureHomeGesture;
-(BOOL)suppressesDismissalForNotification;
-(id)initWithContentDefinition:(id)arg1 preferences:(id)arg2 authenticationStatusProvider:(id)arg3 ;
-(void)didReceiveTouch;
-(void)_updateSecondaryActionButtonText;
-(BOOL)shouldHideHomeAffordance;
-(void)_updateGrabberViewVisibility;
-(void)_dismissForced:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)suppressesDismissalGesture;
-(void)_updateContentScale:(double)arg1 interactive:(BOOL)arg2 ;
-(void)_updateContentAlpha:(double)arg1 interactive:(BOOL)arg2 ;
-(BOOL)_supportsLuminanceReductionForCurrentBackgroundStyle;
-(void)remoteContentHostViewController:(id)arg1 didTerminateWithError:(id)arg2 ;
-(void)setScalableContent:(CSComponent *)arg1 ;
-(CSDashBoardRemoteContentSettings *)remoteContentSettings;
-(void)setRemoteContentSettings:(CSDashBoardRemoteContentSettings *)arg1 ;
@end

