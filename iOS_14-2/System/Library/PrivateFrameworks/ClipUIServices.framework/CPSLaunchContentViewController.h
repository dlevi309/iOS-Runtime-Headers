/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CPSSessionProxyDelegate.h>
#import <libobjc.A.dylib/CPSPermissionsViewControllerDelegate.h>
#import <libobjc.A.dylib/PRXCardContentProviding.h>

@protocol CPSLaunchContentViewControllerDelegate;
@class UIView, UIImageView, UIVisualEffectView, UIButton, UIStackView, CPSVibrantLabel, CPSButton, CPSAppMetadataView, CPSClipMetadata, CPSSessionProxy, CPSPermissionView, CPSAppClipUnavailableView, CPSPermissionsViewController, NSLayoutConstraint, NSNumber, UIImage, NSString;

@interface CPSLaunchContentViewController : UIViewController <CPSSessionProxyDelegate, CPSPermissionsViewControllerDelegate, PRXCardContentProviding> {

	UIView* _heroContainerView;
	UIImageView* _heroImageView;
	UIImageView* _heroMirrorImageView;
	UIVisualEffectView* _closeButtonEffectView;
	UIButton* _closeButton;
	UIView* _separatorView;
	UIView* _informationContainerView;
	UIStackView* _informationContentView;
	UIView* _clipInformationContainerView;
	CPSVibrantLabel* _clipNameVibrantLabel;
	CPSVibrantLabel* _clipDescriptionVibrantLabel;
	CPSButton* _openButton;
	CPSAppMetadataView* _appMetadataView;
	CPSClipMetadata* _clipMetadata;
	CPSSessionProxy* _sessionProxy;
	CPSPermissionView* _permissionView;
	CPSAppClipUnavailableView* _unavailableView;
	CPSPermissionsViewController* _permissionsViewController;
	NSLayoutConstraint* _heroContainerAspectRatioConstraint;
	BOOL _shouldPlaySoundAndHaptic;
	BOOL _didInstallApplicationPlaceholder;
	BOOL _didSendAnalytics;
	BOOL _dismissalInProgress;
	id<CPSLaunchContentViewControllerDelegate> _delegate;
	NSNumber* _uiMock_openButtonEnabled;

}

@property (setter=_setHeroImage:,nonatomic,retain) UIImage * _heroImage; 
@property (assign,nonatomic,__weak) id<CPSLaunchContentViewControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL dismissalInProgress;                                                             //@synthesize dismissalInProgress=_dismissalInProgress - In the implementation block
@property (setter=uiMock_setOpenButtonEnabled:,nonatomic,retain) NSNumber * uiMock_openButtonEnabled;              //@synthesize uiMock_openButtonEnabled=_uiMock_openButtonEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long cardStyle; 
@property (nonatomic,readonly) BOOL allowsPullToDismiss; 
-(void)updateViewConstraints;
-(id)initWithURL:(id)arg1 ;
-(id<CPSLaunchContentViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(id)initWithMetadata:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(UIImage *)_heroImage;
-(void)cancelSession;
-(void)setDelegate:(id<CPSLaunchContentViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)dismiss:(id)arg1 ;
-(void)_updateContent;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)openAppStore;
-(void)proxyDidUpdateMetadata:(id)arg1 ;
-(void)proxyDidInstallApplicationPlaceholder:(id)arg1 ;
-(void)proxy:(id)arg1 didRetrieveApplicationIcon:(id)arg2 ;
-(void)proxy:(id)arg1 didRetrieveHeroImage:(id)arg2 ;
-(void)proxy:(id)arg1 didFinishLoadingWithError:(id)arg2 ;
-(void)proxyRemoteServiceDidCrash:(id)arg1 ;
-(void)uiMock_setOpenButtonEnabled:(id)arg1 ;
-(BOOL)dismissalInProgress;
-(void)logDismissalFromCloseButton:(BOOL)arg1 ;
-(NSNumber *)uiMock_openButtonEnabled;
-(void)setUpCard;
-(void)setUpHeroSection;
-(void)setUpInformationSection;
-(void)playSoundAndHaptic;
-(void)updatePreferredContentSizeForCardWidth:(double)arg1 ;
-(void)setUpClipInformationContainerView;
-(BOOL)shouldRequestLocationConfirmationPermission;
-(BOOL)_userNotificationAuthorizationDenied;
-(void)_updateHeroImageIfNeeded;
-(void)showUnavailableViewWithReason:(id)arg1 ;
-(void)setUnavailableViewHidden:(BOOL)arg1 ;
-(void)updateOpenButton;
-(void)configurePermissionView;
-(void)determineClipCompatibility;
-(void)enableOpenButton;
-(void)disableOpenButton;
-(void)_openAppClip:(id)arg1 ;
-(void)handlePolicyRecovery;
-(void)signInToAppStore;
-(void)_dismissCardWithClipDidOpen:(BOOL)arg1 andPerformBlockToLaunchApp:(/*^block*/id)arg2 ;
-(void)_dismissWithClipDidOpen:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dismissCardWithClipDidOpen:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_canLaunchAppSimultaneouslyWithInvocationCardDismissal;
-(void)_setHeroImage:(id)arg1 ;
-(void)_sendAnalyticsIfNeeded;
-(id)_reasonStringForError:(id)arg1 ;
-(void)permissionsViewControllerDidFinish:(id)arg1 ;
-(BOOL)allowsPullToDismiss;
-(void)setDismissalInProgress:(BOOL)arg1 ;
@end

