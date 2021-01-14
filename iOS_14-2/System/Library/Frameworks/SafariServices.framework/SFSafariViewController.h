/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SFBrowserRemoteViewControllerDelegate.h>
#import <libobjc.A.dylib/SFInteractiveDismissControllerDelegate.h>
#import <libobjc.A.dylib/SFQueueingServiceViewControllerProxyDelegate.h>
#import <libobjc.A.dylib/_SFLinkPreviewHeaderDelegate.h>
#import <libobjc.A.dylib/_UIRemoteViewControllerContaining.h>

@protocol SFSafariViewControllerDelegate, SFServiceViewControllerProtocol;
@class _UIRemoteViewController, SFBrowserRemoteViewController, _UIAsyncInvocation, UIView, NSArray, _WKActivatedElementInfo, NSMutableDictionary, SFInteractiveDismissController, SFSafariLaunchPlaceholderView, SFSafariViewControllerConfiguration, _SFURLTextPreviewViewController, UIColor, SFQueueingServiceViewControllerProxy, NSURL, NSString;

@interface SFSafariViewController : UIViewController <SFBrowserRemoteViewControllerDelegate, SFInteractiveDismissControllerDelegate, SFQueueingServiceViewControllerProxyDelegate, _SFLinkPreviewHeaderDelegate, _UIRemoteViewControllerContaining> {

	SFBrowserRemoteViewController* _remoteViewController;
	_UIAsyncInvocation* _cancelViewServiceRequest;
	BOOL _hasBeenDisplayedAtLeastOnce;
	BOOL _remoteViewControllerHasBeenAdded;
	BOOL _hasNotifiedDelegateAboutInitialLoadCompleted;
	BOOL _hasRestartedViewService;
	UIView* _nanoHeaderView;
	NSArray* _previewActions;
	_WKActivatedElementInfo* _activatedElementInfo;
	NSArray* _customActivities;
	NSMutableDictionary* _activitiesMap;
	NSArray* _activityItemsForCustomActivities;
	BOOL _swipeGestureEnabled;
	SFInteractiveDismissController* _interactiveDismissController;
	SFSafariLaunchPlaceholderView* _launchPlaceholderView;
	long long _displayMode;
	SFSafariViewControllerConfiguration* _configuration;
	BOOL _viewSizeIsTransitioning;
	UIEdgeInsets _verticalScrollIndicatorBaseInsets;
	UIEdgeInsets _horizontalScrollIndicatorBaseInsets;
	_SFURLTextPreviewViewController* _textPreviewViewController;
	UIView* _linkPreviewHitTestView;
	BOOL _defersAddingRemoteViewController;
	id<SFSafariViewControllerDelegate> _delegate;
	UIColor* _preferredBarTintColor;
	UIColor* _preferredControlTintColor;
	long long _dismissButtonStyle;
	SFQueueingServiceViewControllerProxy*<SFServiceViewControllerProtocol> _serviceProxy;
	NSURL* _initialURL;

}

@property (assign,setter=_setShowingLinkPreview:,nonatomic) BOOL _showingLinkPreview; 
@property (assign,setter=_setShowingLinkPreviewWithMinimalUI:,nonatomic) BOOL _showingLinkPreviewWithMinimalUI; 
@property (setter=_setPreviewActions:,nonatomic,retain) NSArray * _previewActions; 
@property (setter=_setActivatedElementInfo:,nonatomic,retain) _WKActivatedElementInfo * _activatedElementInfo; 
@property (nonatomic,readonly) SFQueueingServiceViewControllerProxy*<SFServiceViewControllerProtocol> serviceProxy;              //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (nonatomic,readonly) NSURL * initialURL;                                                                               //@synthesize initialURL=_initialURL - In the implementation block
@property (assign,nonatomic) BOOL defersAddingRemoteViewController;                                                              //@synthesize defersAddingRemoteViewController=_defersAddingRemoteViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SFSafariViewControllerDelegate> delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) SFSafariViewControllerConfiguration * configuration; 
@property (nonatomic,retain) UIColor * preferredBarTintColor;                                                                    //@synthesize preferredBarTintColor=_preferredBarTintColor - In the implementation block
@property (nonatomic,retain) UIColor * preferredControlTintColor;                                                                //@synthesize preferredControlTintColor=_preferredControlTintColor - In the implementation block
@property (assign,nonatomic) long long dismissButtonStyle;                                                                       //@synthesize dismissButtonStyle=_dismissButtonStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
+(BOOL)_preventsAppearanceProxyCustomization;
-(void)viewWillLayoutSubviews;
-(UIColor *)preferredBarTintColor;
-(id)initWithURL:(id)arg1 ;
-(void)remoteViewControllerDidLoadWebView:(id)arg1 ;
-(void)remoteViewController:(id)arg1 setSwipeGestureEnabled:(BOOL)arg2 ;
-(void)remoteViewController:(id)arg1 didFinishInitialLoad:(BOOL)arg2 ;
-(void)remoteViewController:(id)arg1 fetchActivityViewControllerInfoForURL:(id)arg2 title:(id)arg3 ;
-(void)remoteViewController:(id)arg1 executeCustomActivityProxyID:(id)arg2 ;
-(void)remoteViewController:(id)arg1 initialLoadDidRedirectToURL:(id)arg2 ;
-(void)remoteViewController:(id)arg1 didDecideShouldShowLinkPreviews:(BOOL)arg2 ;
-(void)remoteViewControllerWillOpenCurrentPageInBrowser:(id)arg1 ;
-(id<SFSafariViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_setActivatedElementInfo:(id)arg1 ;
-(void)setDefersAddingRemoteViewController:(BOOL)arg1 ;
-(BOOL)defersAddingRemoteViewController;
-(void)_addRemoteViewControllerIfNeeded;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setPreferredBarTintColor:(UIColor *)arg1 ;
-(void)linkPreviewHeader:(id)arg1 didEnableLinkPreview:(BOOL)arg2 ;
-(void)_addRemoteView;
-(id)previewActionItems;
-(BOOL)_allowsUserInteractionWhenPreviewedInContextMenu;
-(void)setDelegate:(id<SFSafariViewControllerDelegate>)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(void)remoteViewControllerWillDismiss:(id)arg1 ;
-(void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2 ;
-(void)setDismissButtonStyle:(long long)arg1 ;
-(void)setPreferredControlTintColor:(UIColor *)arg1 ;
-(SFSafariViewControllerConfiguration *)configuration;
-(void)setTransitioningDelegate:(id)arg1 ;
-(long long)dismissButtonStyle;
-(void)_restartServiceViewController;
-(UIColor *)preferredControlTintColor;
-(id)initWithURL:(id)arg1 entersReaderIfAvailable:(BOOL)arg2 ;
-(void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2 ;
-(void)_updateLinkPreviewHitTestView;
-(id)_defaultPreviewActionItems;
-(void)_setShowingLinkPreviewWithMinimalUI:(BOOL)arg1 ;
-(void)_setPreviewActions:(id)arg1 ;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 configuration:(id)arg2 ;
-(SFQueueingServiceViewControllerProxy*<SFServiceViewControllerProtocol>)serviceProxy;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(_WKActivatedElementInfo *)_activatedElementInfo;
-(void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(BOOL)arg2 ;
-(void)_connectToService;
-(void)loadView;
-(NSURL *)initialURL;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_setUpWithURL:(id)arg1 configuration:(id)arg2 ;
-(void)_addLaunchPlaceholderView;
-(BOOL)_showingLinkPreview;
-(BOOL)_showingLinkPreviewWithMinimalUI;
-(void)_updateScrollViewIndicatorInsets;
-(void)serviceProxyWillQueueInvocation:(id)arg1 ;
-(void)_forwardNotificationToViewService:(id)arg1 ;
-(void)_setShowingLinkPreview:(BOOL)arg1 ;
-(void)_updatePreviewViewControllerWithLinkPreviewEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_removeLaunchPlaceholderView;
-(void)_removeRemoteViewController;
-(id)_fetchCustomActivitiesForURL:(id)arg1 title:(id)arg2 ;
-(id)_fetchExcludedActivityTypesForURL:(id)arg1 title:(id)arg2 ;
-(void)_setEdgeSwipeDismissalEnabled:(BOOL)arg1 ;
-(void)interactiveDismissControllerDidBegin:(id)arg1 ;
-(void)interactiveDismissControllerDidEnd:(id)arg1 ;
-(void)interactiveDismissControllerDidCancel:(id)arg1 ;
-(NSArray *)_previewActions;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

