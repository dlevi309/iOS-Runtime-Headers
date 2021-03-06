/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NCNotificationCustomContentDelegate.h>
#import <libobjc.A.dylib/PLExpandedPlatterPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>

@protocol PLContentSizeManaging, PLPlatterNCNotificationStaticContentAccepting, NCNotificationViewControllerDelegate, NCNotificationStaticContentProviding, NCNotificationCustomContentProviding, NCAuxiliaryOptionsProviding, UIViewControllerTransitionCoordinator, NCNotificationCustomContent;
@class NSString, NSHashTable, UIView, NCNotificationRequest, UIPanGestureRecognizer, UIViewController, NCNotificationViewControllerView;

@interface NCNotificationViewController : UIViewController <NCNotificationCustomContentDelegate, PLExpandedPlatterPresentationControllerDelegate, PLContentSizeCategoryAdjusting> {

	BOOL _didQueryCanPan;
	BOOL _canPan;
	long long _ncTransitionAnimationState;
	NSHashTable* _observers;
	UIView*<PLContentSizeManaging> _contentSizeManagingView;
	UIView*<PLPlatter>*<NCNotificationStaticContentAccepting> _lookView;
	BOOL _revealAdditionalContentOnPresentation;
	BOOL _customContentHomeAffordanceVisible;
	BOOL _notificationContentViewHidden;
	BOOL _hasShadow;
	BOOL _contentReplacedWithSnapshot;
	BOOL _interactionEnabled;
	BOOL _shouldRestorePresentingShortLookOnDismiss;
	id<NCNotificationViewControllerDelegate> _delegate;
	NCNotificationRequest* _notificationRequest;
	NSString* _materialGroupNameBase;
	UIPanGestureRecognizer* _customContentHomeAffordanceGestureRecognizer;
	id<NCNotificationStaticContentProviding> _staticContentProvider;
	id<NCNotificationCustomContentProviding> _customContentProvider;
	id<NCAuxiliaryOptionsProviding> _auxiliaryOptionsContentProvider;
	id<UIViewControllerTransitionCoordinator> _activeTransitionCoordinator;
	UIView* _associatedView;
	/*^block*/id _pendingPresentationTransitionDidEndBlock;
	UIViewController*<NCNotificationCustomContent> _customContentProvidingViewController;
	/*^block*/id _dismissalCompletion;

}

@property (getter=_presentedLongLookViewController,nonatomic,readonly) NCNotificationViewController * presentedLongLookViewController; 
@property (getter=isLookStyleLongLook,nonatomic,readonly) BOOL lookStyleLongLook; 
@property (nonatomic,retain) id<NCNotificationStaticContentProviding> staticContentProvider;                                                                                                                                 //@synthesize staticContentProvider=_staticContentProvider - In the implementation block
@property (nonatomic,retain) id<NCNotificationCustomContentProviding> customContentProvider;                                                                                                                                 //@synthesize customContentProvider=_customContentProvider - In the implementation block
@property (nonatomic,retain) id<NCAuxiliaryOptionsProviding> auxiliaryOptionsContentProvider;                                                                                                                                //@synthesize auxiliaryOptionsContentProvider=_auxiliaryOptionsContentProvider - In the implementation block
@property (setter=_setActiveTransitionCoordinator:,getter=_activeTransitionCoordinator,nonatomic,retain) id<UIViewControllerTransitionCoordinator> activeTransitionCoordinator;                                              //@synthesize activeTransitionCoordinator=_activeTransitionCoordinator - In the implementation block
@property (assign,getter=isInteractionEnabled,nonatomic) BOOL interactionEnabled;                                                                                                                                            //@synthesize interactionEnabled=_interactionEnabled - In the implementation block
@property (assign,nonatomic,__weak) UIView * associatedView;                                                                                                                                                                 //@synthesize associatedView=_associatedView - In the implementation block
@property (setter=_setPendingPresentationTransitionDidEndBlock:,getter=_pendingPresentationTransitionDidEndBlock,nonatomic,copy) id pendingPresentationTransitionDidEndBlock;                                                //@synthesize pendingPresentationTransitionDidEndBlock=_pendingPresentationTransitionDidEndBlock - In the implementation block
@property (getter=_notificationViewControllerView,nonatomic,readonly) NCNotificationViewControllerView * notificationViewControllerView; 
@property (setter=_setCustomContentProvidingViewController:,getter=_customContentProvidingViewController,nonatomic,retain) UIViewController*<NCNotificationCustomContent> customContentProvidingViewController;              //@synthesize customContentProvidingViewController=_customContentProvidingViewController - In the implementation block
@property (getter=_isPresentingCustomContentProvidingViewController,nonatomic,readonly) BOOL presentingCustomContentProvidingViewController; 
@property (assign,setter=_setShouldRestorePresentingShortLookOnDismiss:,getter=_shouldRestorePresentingShortLookOnDismiss,nonatomic) BOOL shouldRestorePresentingShortLookOnDismiss;                                         //@synthesize shouldRestorePresentingShortLookOnDismiss=_shouldRestorePresentingShortLookOnDismiss - In the implementation block
@property (setter=_setDismissalCompletion:,getter=_dismissalCompletion,nonatomic,copy) id dismissalCompletion;                                                                                                               //@synthesize dismissalCompletion=_dismissalCompletion - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationViewControllerDelegate> delegate;                                                                                                                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NCNotificationRequest * notificationRequest;                                                                                                                                                    //@synthesize notificationRequest=_notificationRequest - In the implementation block
@property (getter=isShortLook,nonatomic,readonly) BOOL shortLook; 
@property (getter=hasCommittedToPresentingCustomContentProvidingViewController,nonatomic,readonly) BOOL committedToPresentingCustomContentProvidingViewController; 
@property (getter=isNotPresentingOrHasCommittedToDismissingCustomContentProvidingViewController,nonatomic,readonly) BOOL notPresentingOrHasCommittedToDismissingCustomContentProvidingViewController; 
@property (assign,nonatomic) BOOL revealAdditionalContentOnPresentation;                                                                                                                                                     //@synthesize revealAdditionalContentOnPresentation=_revealAdditionalContentOnPresentation - In the implementation block
@property (nonatomic,retain) NSString * materialGroupNameBase;                                                                                                                                                               //@synthesize materialGroupNameBase=_materialGroupNameBase - In the implementation block
@property (assign,getter=isCustomContentHomeAffordanceVisible,nonatomic) BOOL customContentHomeAffordanceVisible;                                                                                                            //@synthesize customContentHomeAffordanceVisible=_customContentHomeAffordanceVisible - In the implementation block
@property (assign,nonatomic,__weak) UIPanGestureRecognizer * customContentHomeAffordanceGestureRecognizer;                                                                                                                   //@synthesize customContentHomeAffordanceGestureRecognizer=_customContentHomeAffordanceGestureRecognizer - In the implementation block
@property (assign,getter=isNotificationContentViewHidden,nonatomic) BOOL notificationContentViewHidden;                                                                                                                      //@synthesize notificationContentViewHidden=_notificationContentViewHidden - In the implementation block
@property (assign,nonatomic) BOOL hasShadow;                                                                                                                                                                                 //@synthesize hasShadow=_hasShadow - In the implementation block
@property (assign,getter=isContentReplacedWithSnapshot,nonatomic) BOOL contentReplacedWithSnapshot;                                                                                                                          //@synthesize contentReplacedWithSnapshot=_contentReplacedWithSnapshot - In the implementation block
@property (getter=isCoalescedNotificationBundle,nonatomic,readonly) BOOL coalescedNotificationBundle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateContent;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(id)succinctDescription;
-(void)addObserver:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)_notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)isContentReplacedWithSnapshot;
-(void)setContentReplacedWithSnapshot:(BOOL)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id<NCNotificationViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_canPan;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_updatePreferredContentSize;
-(NSString *)debugDescription;
-(unsigned long long)supportedInterfaceOrientations;
-(NSString *)materialGroupNameBase;
-(long long)_dateFormatStyle;
-(void)setHasShadow:(BOOL)arg1 ;
-(void)setDelegate:(id<NCNotificationViewControllerDelegate>)arg1 ;
-(NSString *)description;
-(BOOL)shouldAutorotate;
-(void)dismissViewControllerWithTransition:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(void)viewDidLoad;
-(void)removeObserver:(id)arg1 ;
-(void)setAssociatedView:(UIView *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_setDelegate:(id)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasShadow;
-(UIView *)associatedView;
-(void)loadView;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(/*^block*/id)_dismissalCompletion;
-(BOOL)isContentExtensionVisible:(id)arg1 ;
-(void)_setupStaticContentProvider;
-(id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(BOOL)arg2 ;
-(id)initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(BOOL)arg2 ;
-(void)setStaticContentProvider:(id<NCNotificationStaticContentProviding>)arg1 ;
-(void)setAuxiliaryOptionsContentProvider:(id<NCAuxiliaryOptionsProviding>)arg1 ;
-(BOOL)_setNotificationRequest:(id)arg1 ;
-(BOOL)_isPresentingCustomContentProvidingViewController;
-(id)_lookViewIfLoaded;
-(void)_updateWithProvidedStaticContent;
-(NCNotificationRequest *)notificationRequest;
-(id)initWithNotificationRequest:(id)arg1 ;
-(void)setCustomContentProvider:(id<NCNotificationCustomContentProviding>)arg1 ;
-(id<NCAuxiliaryOptionsProviding>)auxiliaryOptionsContentProvider;
-(void)_updateWithProvidedAuxiliaryOptionsContent;
-(BOOL)isShortLook;
-(id)_customContentProvidingViewController;
-(id<NCNotificationCustomContentProviding>)customContentProvider;
-(void)_setCustomContentProvidingViewController:(id)arg1 ;
-(BOOL)didReceiveNotificationRequest:(id)arg1 ;
-(void)_updateWithProvidedCustomContent;
-(id)_presentedLongLookViewController;
-(void)preserveInputViews;
-(BOOL)restoreInputViews;
-(BOOL)_shouldRestorePresentingShortLookOnDismiss;
-(id)_lookViewLoadingIfNecessary:(BOOL)arg1 ;
-(void)_updateLookView:(id)arg1 withTitleFromProvidedStaticContent:(id)arg2 ;
-(unsigned long long)_maximumNumberOfPrimaryTextLinesForProvidedStaticContent;
-(unsigned long long)_maximumNumberOfPrimaryLargeTextLinesForProvidedStaticContent;
-(unsigned long long)_maximumNumberOfSecondaryTextLinesForProvidedStaticContent;
-(unsigned long long)_maximumNumberOfSecondaryLargeTextLinesForProvidedStaticContent;
-(void)_setupAuxiliaryOptionsContentProvider;
-(void)_loadLookView;
-(id)_notificationViewControllerView;
-(id)_contentSizeManagingView;
-(CGSize)_preferredCustomContentSizeForSize:(CGSize)arg1 parentContentContainerBounds:(CGRect)arg2 ;
-(void)_setPreferredCustomContentSize:(CGSize)arg1 ;
-(void)_notificationViewControllerViewDidLoad;
-(void)setHasUpdatedContent;
-(void)_setPendingPresentationTransitionDidEndBlock:(/*^block*/id)arg1 ;
-(void)setNCTransitionAnimationState:(long long)arg1 ;
-(id<NCNotificationStaticContentProviding>)staticContentProvider;
-(void)_setShouldRestorePresentingShortLookOnDismiss:(BOOL)arg1 ;
-(void)_setDismissalCompletion:(/*^block*/id)arg1 ;
-(id)notificationUsageTrackingState;
-(void)_askDelegateToExecuteAction:(id)arg1 withParameters:(id)arg2 animated:(BOOL)arg3 ;
-(void)_executeDefaultAction:(BOOL)arg1 ;
-(void)_executeNilAction:(BOOL)arg1 ;
-(id)_lookView;
-(void)customContent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)customContent:(id)arg1 forwardAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4 ;
-(void)customContentRequestsDefaultAction:(id)arg1 ;
-(void)customContentRequestsDismiss:(id)arg1 ;
-(id)expandedPlatterPresentationController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2 ;
-(id)hideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg1 ;
-(id)unhideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg1 ;
-(id)settleHomeAffordanceAnimationBehaviorDescriptionForExpandedPlatterPresentationController:(id)arg1 ;
-(void)setNotificationRequest:(NCNotificationRequest *)arg1 ;
-(BOOL)hasCommittedToPresentingCustomContentProvidingViewController;
-(BOOL)isNotPresentingOrHasCommittedToDismissingCustomContentProvidingViewController;
-(void)invalidateContentProviders;
-(void)_setupCustomContentProvider;
-(id)_customContentProvidingViewControllerCreateIfNecessary;
-(BOOL)dismissPresentedViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)expandAndPlayMedia;
-(BOOL)shouldRestorePresentingShortLookOnDismiss;
-(void)setInteractionEnabled:(BOOL)arg1 ;
-(long long)materialRecipe;
-(BOOL)isCoalescedNotificationBundle;
-(long long)ncTransitionAnimationState;
-(CGSize)preferredContentSizeWithPresentationSize:(CGSize)arg1 containerSize:(CGSize)arg2 ;
-(void)_executeClearAction:(BOOL)arg1 ;
-(void)_executeCloseAction:(BOOL)arg1 ;
-(void)_executeCancelAction:(BOOL)arg1 ;
-(void)contentProvider:(id)arg1 performAction:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)revealAdditionalContentOnPresentation;
-(void)setRevealAdditionalContentOnPresentation:(BOOL)arg1 ;
-(BOOL)isCustomContentHomeAffordanceVisible;
-(void)setCustomContentHomeAffordanceVisible:(BOOL)arg1 ;
-(UIPanGestureRecognizer *)customContentHomeAffordanceGestureRecognizer;
-(void)setCustomContentHomeAffordanceGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(BOOL)isNotificationContentViewHidden;
-(void)setNotificationContentViewHidden:(BOOL)arg1 ;
-(id)_activeTransitionCoordinator;
-(void)_setActiveTransitionCoordinator:(id)arg1 ;
-(BOOL)isInteractionEnabled;
-(/*^block*/id)_pendingPresentationTransitionDidEndBlock;
-(void)presentLongLookAnimated:(BOOL)arg1 trigger:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)dismissPresentedViewControllerAndClearNotification:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)reloadContentProviders;
-(BOOL)isLookStyleLongLook;
@end

