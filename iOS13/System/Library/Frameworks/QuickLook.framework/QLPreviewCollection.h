/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/QLTransitionControllerProtocol.h>
#import <libobjc.A.dylib/QLPageViewControllerDataSource.h>
#import <libobjc.A.dylib/QLPageViewControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewItemViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>
#import <libobjc.A.dylib/QLPreviewCollectionProtocol.h>

@protocol QLPreviewControllerStateProtocol, QLTransitionControllerProtocol;
@class QLPreviewItemStore, UIView, UITapGestureRecognizer, UIPanGestureRecognizer, UISwipeGestureRecognizer, QLAppearance, NSString, QLPageViewController, UIPinchGestureRecognizer, UIRotationGestureRecognizer, QLSwipeDownTracker, QLPinchRotationTracker, QLTransitionContext, QLTransitionDriver, QLItemViewController;

@interface QLPreviewCollection : UIViewController <QLTransitionControllerProtocol, QLPageViewControllerDataSource, QLPageViewControllerDelegate, QLPreviewItemViewControllerDelegate, UIGestureRecognizerDelegatePrivate, QLPreviewCollectionProtocol> {

	NSRange _previewItemRange;
	long long _currentItemIndex;
	QLPreviewItemStore* _itemStore;
	UIView* _localAccessoryViewContainer;
	UIView* _remoteAccessoryViewContainer;
	UITapGestureRecognizer* _tapGesture;
	UIPanGestureRecognizer* _verticalPanGesture;
	UISwipeGestureRecognizer* _pageSwipeGesture;
	UIPanGestureRecognizer* _pagePanGesture;
	QLAppearance* _appearance;
	NSString* _loadingString;
	unsigned long long _visibilityState;
	BOOL _previewCollectionIsPartOfViewHierarchy;
	unsigned long long _appearanceActions;
	BOOL _isAvailable;
	BOOL _allowInteractiveTransitions;
	BOOL _fullScreen;
	BOOL _isEditing;
	BOOL _isTransitioningPage;
	BOOL _hasTriggeredInteractiveTransitionAnimation;
	QLPageViewController* _pageViewController;
	id<QLPreviewControllerStateProtocol> _stateManager;
	/*^block*/id _prepareForInvalidationCompletionHandler;
	UIPanGestureRecognizer* _slideGesture;
	UIPinchGestureRecognizer* _pinchGesture;
	UIRotationGestureRecognizer* _rotationGesture;
	QLSwipeDownTracker* _swipeDownTracker;
	QLPinchRotationTracker* _pinchRotationTracker;
	QLTransitionContext* _transitionContext;
	id<QLTransitionControllerProtocol> _transitionController;
	QLTransitionDriver* _transitionDriver;
	NSString* _hostApplicationBundleIdentifier;

}

@property (assign,nonatomic) BOOL fullScreen;                                              //@synthesize fullScreen=_fullScreen - In the implementation block
@property (assign,nonatomic) BOOL isEditing;                                               //@synthesize isEditing=_isEditing - In the implementation block
@property (assign,nonatomic) BOOL isTransitioningPage;                                     //@synthesize isTransitioningPage=_isTransitioningPage - In the implementation block
@property (nonatomic,copy) id prepareForInvalidationCompletionHandler;                     //@synthesize prepareForInvalidationCompletionHandler=_prepareForInvalidationCompletionHandler - In the implementation block
@property (retain) UIPanGestureRecognizer * slideGesture;                                  //@synthesize slideGesture=_slideGesture - In the implementation block
@property (retain) UIPinchGestureRecognizer * pinchGesture;                                //@synthesize pinchGesture=_pinchGesture - In the implementation block
@property (retain) UIRotationGestureRecognizer * rotationGesture;                          //@synthesize rotationGesture=_rotationGesture - In the implementation block
@property (retain) QLSwipeDownTracker * swipeDownTracker;                                  //@synthesize swipeDownTracker=_swipeDownTracker - In the implementation block
@property (retain) QLPinchRotationTracker * pinchRotationTracker;                          //@synthesize pinchRotationTracker=_pinchRotationTracker - In the implementation block
@property (retain) QLTransitionContext * transitionContext;                                //@synthesize transitionContext=_transitionContext - In the implementation block
@property (retain) id<QLTransitionControllerProtocol> transitionController;                //@synthesize transitionController=_transitionController - In the implementation block
@property (retain) QLTransitionDriver * transitionDriver;                                  //@synthesize transitionDriver=_transitionDriver - In the implementation block
@property (nonatomic,copy) NSString * hostApplicationBundleIdentifier;                     //@synthesize hostApplicationBundleIdentifier=_hostApplicationBundleIdentifier - In the implementation block
@property (assign) BOOL hasTriggeredInteractiveTransitionAnimation;                        //@synthesize hasTriggeredInteractiveTransitionAnimation=_hasTriggeredInteractiveTransitionAnimation - In the implementation block
@property (retain) QLPageViewController * pageViewController;                              //@synthesize pageViewController=_pageViewController - In the implementation block
@property (retain) id<QLPreviewControllerStateProtocol> stateManager;                      //@synthesize stateManager=_stateManager - In the implementation block
@property (readonly) QLItemViewController * currentPreviewItemViewController; 
@property (assign,nonatomic) BOOL isAvailable;                                             //@synthesize isAvailable=_isAvailable - In the implementation block
@property (assign,nonatomic) BOOL allowInteractiveTransitions;                             //@synthesize allowInteractiveTransitions=_allowInteractiveTransitions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)previewCollectionUsingRemoteViewController:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)quickLookExtension;
+(void)remotePreviewCollectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(BOOL)isAvailable;
-(void)setIsAvailable:(BOOL)arg1 ;
-(BOOL)fullScreen;
-(void)loadView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updatePreferredContentSize;
-(QLTransitionContext *)transitionContext;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)accessoryView;
-(BOOL)isEditing;
-(void)setTransitionContext:(QLTransitionContext *)arg1 ;
-(BOOL)_isBeingDismissed;
-(BOOL)_isVisible;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(BOOL)isRemote;
-(BOOL)transitionInProgress;
-(void)setFullScreen:(BOOL)arg1 ;
-(void)keyCommandWasPerformed:(id)arg1 ;
-(void)setTransitionController:(id<QLTransitionControllerProtocol>)arg1 ;
-(id<QLTransitionControllerProtocol>)transitionController;
-(id)gestureTracker;
-(id<QLPreviewControllerStateProtocol>)stateManager;
-(void)setStateManager:(id<QLPreviewControllerStateProtocol>)arg1 ;
-(void)setAllowInteractiveTransitions:(BOOL)arg1 ;
-(void)saveCurrentPreviewEditsSynchronously:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)hostApplicationDidEnterBackground:(BOOL)arg1 ;
-(void)hostApplicationDidBecomeActive;
-(void)invalidateService;
-(void)preparePreviewCollectionForInvalidationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1 ;
-(void)setLoadingString:(id)arg1 ;
-(void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4 ;
-(BOOL)allowInteractiveTransitions;
-(void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)prepareForActionSheetPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)keyCommandsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)tearDownTransition:(BOOL)arg1 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCurrentPreviewItemIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(UIPanGestureRecognizer *)slideGesture;
-(void)setSlideGesture:(UIPanGestureRecognizer *)arg1 ;
-(UIPinchGestureRecognizer *)pinchGesture;
-(void)setPinchGesture:(UIPinchGestureRecognizer *)arg1 ;
-(UIRotationGestureRecognizer *)rotationGesture;
-(void)setRotationGesture:(UIRotationGestureRecognizer *)arg1 ;
-(QLSwipeDownTracker *)swipeDownTracker;
-(void)setSwipeDownTracker:(QLSwipeDownTracker *)arg1 ;
-(QLPinchRotationTracker *)pinchRotationTracker;
-(void)setPinchRotationTracker:(QLPinchRotationTracker *)arg1 ;
-(QLItemViewController *)currentPreviewItemViewController;
-(void)_setUpTransitionDriverForPresenting:(BOOL)arg1 duration:(double)arg2 ;
-(QLTransitionDriver *)transitionDriver;
-(void)setTransitionDriver:(QLTransitionDriver *)arg1 ;
-(void)setHasTriggeredInteractiveTransitionAnimation:(BOOL)arg1 ;
-(QLPageViewController *)pageViewController;
-(void)updateTransitionWithProgress:(double)arg1 ;
-(void)triggerInteractiveTransitionAnimationIfNeeded;
-(void)completeTransition:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)startNonInteractiveTransitionPresenting:(BOOL)arg1 ;
-(void)_tearDownTransition:(BOOL)arg1 ;
-(void)rotationOrPinchGestureRecognized:(id)arg1 ;
-(void)slideToDismissGestureRecognized:(id)arg1 ;
-(NSString *)hostApplicationBundleIdentifier;
-(void)previewItemViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setHostApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)previewItemViewController:(id)arg1 wantsFullScreen:(BOOL)arg2 ;
-(void)previewItemViewController:(id)arg1 wantsToOpenURL:(id)arg2 ;
-(void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(BOOL)arg3 useInteractiveTransition:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)previewItemViewControllerDidChangeCurrentPreviewController:(id)arg1 ;
-(long long)dragDataOwnerForPreviewItemViewController:(id)arg1 ;
-(void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setRemoteAccessoryContainer:(id)arg1 ;
-(void)pageViewController:(id)arg1 willTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(BOOL)arg6 ;
-(void)pageViewController:(id)arg1 didTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(BOOL)arg6 ;
-(id)pageViewController:(id)arg1 viewControllerAtIndex:(unsigned long long)arg2 ;
-(id)pageViewController:(id)arg1 parallaxViewInPage:(id)arg2 withIndex:(unsigned long long)arg3 ;
-(void)pageViewController:(id)arg1 isTransitioningFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 withProgress:(double)arg6 ;
-(void)pageViewController:(id)arg1 willCancelTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(BOOL)arg6 ;
-(void)pageViewController:(id)arg1 didCancelTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(BOOL)arg6 ;
-(void)pageViewController:(id)arg1 willBeginInteractiveTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 ;
-(id)loadingTextForPreviewItemViewController:(id)arg1 ;
-(void)previewItemViewControllerWantsUpdateOverlay:(id)arg1 animated:(BOOL)arg2 ;
-(void)previewItemViewController:(id)arg1 didEnableEditMode:(BOOL)arg2 ;
-(void)previewItemViewControllerWantsUpdateKeyCommands:(id)arg1 ;
-(void)previewItemViewControllerWantsToDismissQuickLook:(id)arg1 ;
-(void)previewItemViewControllerDidEditCopyOfPreviewItem:(id)arg1 editedCopy:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)previewItemViewController:(id)arg1 hasUnsavedEdits:(BOOL)arg2 ;
-(void)setIsEditing:(BOOL)arg1 ;
-(void)previewItemViewControllerDidUpdateTitle:(id)arg1 ;
-(void)previewItemViewControllerDidUpdatePreferredContentSize:(id)arg1 ;
-(void)previewItemViewController:(id)arg1 wantsToShowShareSheetWithPopoverTracker:(id)arg2 customSharedURL:(id)arg3 dismissCompletion:(/*^block*/id)arg4 ;
-(void)previewItemViewController:(id)arg1 wantsToForwardMessageToHost:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)previewItemViewControllerWantsToShowNoInternetConnectivityAlert:(id)arg1 ;
-(void)_installGestures;
-(void)updateCurrentPreviewConfiguration;
-(void)_updatePreviewVisibility:(BOOL)arg1 ;
-(void)_cleanAccessoryViewContainer;
-(void)_updateOverlay:(BOOL)arg1 ;
-(void)_updateFullscreenBackgroundColor;
-(void)_updateFullscreen;
-(void)_updateAccessoryViewWithPreviewItemViewController:(id)arg1 ;
-(void)_updateWhitePointAdaptivityStyle;
-(void)_updatePrinter;
-(void)_updateTitleFromController;
-(void)_notifyHostPreviewCollectionIsReadyForInvalidationIfNeeded;
-(void)_setCurrentPreviewItemIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(id)_defaultKeyCommands;
-(BOOL)_toggleFullscreenIfPossible;
-(BOOL)hasTriggeredInteractiveTransitionAnimation;
-(void)_updateOverlayVisibility;
-(void)setIsTransitioningPage:(BOOL)arg1 ;
-(void)_tapGestureRecognized;
-(BOOL)pinchDismissGestureInProgress;
-(BOOL)_itemViewControllerIsCurrentlyPresentedItemViewController:(id)arg1 ;
-(void)_updateCanChangeCurrentPage;
-(void)previewItemViewControllerWantsToShowShareSheet:(id)arg1 ;
-(void)previewItemViewControllerWantsUpdatePrinter:(id)arg1 ;
-(void)expandContentOfPreviewItemViewController:(id)arg1 unarchivedItemsURL:(id)arg2 ;
-(id)_sandboxExtensionForEditedFileAtURL:(id)arg1 ;
-(void)setPageViewController:(QLPageViewController *)arg1 ;
-(BOOL)isTransitioningPage;
-(id)prepareForInvalidationCompletionHandler;
-(void)setPrepareForInvalidationCompletionHandler:(id)arg1 ;
@end

