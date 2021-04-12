/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIDragInteractionDelegate_Private.h>
#import <libobjc.A.dylib/QLLocalPreviewingController.h>
#import <libobjc.A.dylib/QLToolbarButtonAction.h>

@protocol QLPreviewItemViewControllerDelegate, QLItemViewControllerPresentingDelegate, OS_dispatch_queue;
@class NSMutableArray, UIView, UIDragInteraction, QLPreviewContext, QLAppearance, PUProgressIndicatorView, NSObject, NSArray, NSString;

@interface QLItemViewController : UIViewController <UIDragInteractionDelegate_Private, QLLocalPreviewingController, QLToolbarButtonAction> {

	BOOL _isLoading;
	NSMutableArray* _completionBlocks;
	long long _lastScrollViewUpdateInterfaceOrientation;
	BOOL _didAppearOnce;
	BOOL _isLoaded;
	BOOL _loadingFailed;
	BOOL _isSavingEdits;
	UIView* _accessoryView;
	id<QLPreviewItemViewControllerDelegate> _delegate;
	UIDragInteraction* _dragInteraction;
	id _contents;
	QLPreviewContext* _context;
	QLAppearance* _appearance;
	id<QLItemViewControllerPresentingDelegate> _presentingDelegate;
	PUProgressIndicatorView* _saveEditProgressView;
	NSObject*<OS_dispatch_queue> _saveEditsQueue;

}

@property (nonatomic,retain) UIDragInteraction * dragInteraction;                                               //@synthesize dragInteraction=_dragInteraction - In the implementation block
@property (assign) BOOL didAppearOnce;                                                                          //@synthesize didAppearOnce=_didAppearOnce - In the implementation block
@property (assign) BOOL isLoaded;                                                                               //@synthesize isLoaded=_isLoaded - In the implementation block
@property (assign) BOOL isLoading;                                                                              //@synthesize isLoading=_isLoading - In the implementation block
@property (assign) BOOL loadingFailed;                                                                          //@synthesize loadingFailed=_loadingFailed - In the implementation block
@property (retain) id contents;                                                                                 //@synthesize contents=_contents - In the implementation block
@property (retain) QLPreviewContext * context;                                                                  //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) QLAppearance * appearance;                                                         //@synthesize appearance=_appearance - In the implementation block
@property (assign,nonatomic,__weak) id<QLItemViewControllerPresentingDelegate> presentingDelegate;              //@synthesize presentingDelegate=_presentingDelegate - In the implementation block
@property (nonatomic,retain) PUProgressIndicatorView * saveEditProgressView;                                    //@synthesize saveEditProgressView=_saveEditProgressView - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> saveEditsQueue;                                       //@synthesize saveEditsQueue=_saveEditsQueue - In the implementation block
@property (assign,nonatomic) BOOL isSavingEdits;                                                                //@synthesize isSavingEdits=_isSavingEdits - In the implementation block
@property (nonatomic,readonly) UIView * accessoryView;                                                          //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,readonly) NSArray * registeredKeyCommands; 
@property (assign,nonatomic,__weak) id<QLPreviewItemViewControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldBeRemoteForMediaContentType:(id)arg1 ;
+(id)supportedAudiovisualContentTypes;
-(id)init;
-(NSString *)description;
-(id<QLPreviewItemViewControllerDelegate>)delegate;
-(void)setDelegate:(id<QLPreviewItemViewControllerDelegate>)arg1 ;
-(id)contents;
-(BOOL)isLoaded;
-(QLPreviewContext *)context;
-(void)setContext:(QLPreviewContext *)arg1 ;
-(void)setContents:(id)arg1 ;
-(QLAppearance *)appearance;
-(void)setAppearance:(QLAppearance *)arg1 ;
-(UIView *)accessoryView;
-(long long)preferredWhitePointAdaptivityStyle;
-(void)setDragInteraction:(UIDragInteraction *)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(UIDragInteraction *)dragInteraction;
-(id)scrollView;
-(id)transitioningView;
-(id)draggableView;
-(BOOL)isLoading;
-(void)setIsLoading:(BOOL)arg1 ;
-(void)setIsLoaded:(BOOL)arg1 ;
-(id<QLItemViewControllerPresentingDelegate>)presentingDelegate;
-(void)setPresentingDelegate:(id<QLItemViewControllerPresentingDelegate>)arg1 ;
-(BOOL)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2 ;
-(BOOL)canSwipeToDismiss;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(id)fullscreenBackgroundColor;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)canShowNavBar;
-(void)transitionWillFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidStart:(BOOL)arg1 ;
-(BOOL)presenterShouldHandleLoadingView:(id)arg1 readyToDisplay:(/*^block*/id)arg2 ;
-(void)preloadViewControllerForContext:(id)arg1 ;
-(void)loadPreviewControllerIfNeededWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)loadingFailed;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(id)additionalItemViewControllerDescription;
-(BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(void)performFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(BOOL)didAppearOnce;
-(void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)notifyDelegatesDidFailWithError:(id)arg1 ;
-(BOOL)automaticallyUpdateScrollViewContentOffset;
-(BOOL)automaticallyUpdateScrollViewContentInset;
-(BOOL)automaticallyUpdateScrollViewIndicatorInset;
-(BOOL)canClickToToggleFullscreen;
-(NSArray *)registeredKeyCommands;
-(BOOL)shouldRecognizeGestureRecognizer:(id)arg1 ;
-(BOOL)canToggleFullScreen;
-(void)previewIsAppearingWithProgress:(double)arg1 ;
-(void)previewWillFinishAppearing;
-(id)toolbarButtonsForTraitCollection:(id)arg1 ;
-(id)excludedToolbarButtonIdentifiersForTraitCollection:(id)arg1 ;
-(void)handlePerformedKeyCommandIfNeeded:(id)arg1 ;
-(BOOL)canShowToolBar;
-(id)parallaxView;
-(void)prepareForInvalidationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)savePreviewEditedCopyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateScrollViewContentOffset:(BOOL)arg1 withPreviousAppearance:(id)arg2 ;
-(void)setLoadingFailed:(BOOL)arg1 ;
-(void)_addDragInteractionIfNeeded;
-(void)performCompletionBlocksWithError:(id)arg1 ;
-(BOOL)supportsScrollingUpAndDownUsingKeyCommands;
-(void)_scrollScrollViewWithKeyCommand:(id)arg1 ;
-(void)_scrollScrollViewByPercentualOffset:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)saveEditsQueue;
-(id)editProgressIndicatorMessage;
-(void)updateInterfaceForSavingEdits;
-(void)updateInterfaceAfterSavingEdits;
-(void)prepareForActionSheetPresentation;
-(void)updateScrollViewContentOffset;
-(id)_cancelTouchToken;
-(BOOL)shouldAlwaysRunFullscreen;
-(void)performFirstTimeAppearanceActionsIfNeeded:(unsigned long long)arg1 ;
-(void)editedCopyToSaveChangesWithOutputType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)showSaveEditsProgressIndicatorAfterDelay;
-(void)hideSaveEditProgressIndicator;
-(void)didStartSavingEdits;
-(void)didFinishSavingEdits;
-(void)setDidAppearOnce:(BOOL)arg1 ;
-(PUProgressIndicatorView *)saveEditProgressView;
-(void)setSaveEditProgressView:(PUProgressIndicatorView *)arg1 ;
-(void)setSaveEditsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isSavingEdits;
-(void)setIsSavingEdits:(BOOL)arg1 ;
@end

