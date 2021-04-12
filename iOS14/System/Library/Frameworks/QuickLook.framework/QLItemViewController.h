/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)supportedAudiovisualContentTypes;
+(BOOL)shouldBeRemoteForMediaContentType:(id)arg1 ;
-(long long)preferredWhitePointAdaptivityStyle;
-(id)contents;
-(void)setDragInteraction:(UIDragInteraction *)arg1 ;
-(id<QLItemViewControllerPresentingDelegate>)presentingDelegate;
-(id)transitioningView;
-(void)loadPreviewControllerIfNeededWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(id)additionalItemViewControllerDescription;
-(void)setIsLoaded:(BOOL)arg1 ;
-(id)init;
-(void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateInterfaceForSavingEdits;
-(void)updateInterfaceAfterSavingEdits;
-(void)updateScrollViewContentOffset;
-(id)_cancelTouchToken;
-(BOOL)shouldAlwaysRunFullscreen;
-(void)performFirstTimeAppearanceActionsIfNeeded:(unsigned long long)arg1 ;
-(void)editedCopyToSaveChangesWithOutputType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)showSaveEditsProgressIndicatorAfterDelay;
-(void)hideSaveEditProgressIndicator;
-(void)didStartSavingEdits;
-(void)didFinishSavingEdits;
-(PUProgressIndicatorView *)saveEditProgressView;
-(void)setSaveEditProgressView:(PUProgressIndicatorView *)arg1 ;
-(void)setSaveEditsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isSavingEdits;
-(void)setIsSavingEdits:(BOOL)arg1 ;
-(UIDragInteraction *)dragInteraction;
-(BOOL)isLoading;
-(id<QLPreviewItemViewControllerDelegate>)delegate;
-(UIView *)accessoryView;
-(void)setAppearance:(QLAppearance *)arg1 ;
-(void)setPresentingDelegate:(id<QLItemViewControllerPresentingDelegate>)arg1 ;
-(id)fullscreenBackgroundColor;
-(QLPreviewContext *)context;
-(id)draggableView;
-(BOOL)didAppearOnce;
-(void)setDidAppearOnce:(BOOL)arg1 ;
-(void)setDelegate:(id<QLPreviewItemViewControllerDelegate>)arg1 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(NSString *)description;
-(BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(void)performFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(BOOL)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2 ;
-(void)notifyDelegatesDidFailWithError:(id)arg1 ;
-(void)setContents:(id)arg1 ;
-(BOOL)presenterShouldHandleLoadingView:(id)arg1 readyToDisplay:(/*^block*/id)arg2 ;
-(void)preloadViewControllerForContext:(id)arg1 ;
-(BOOL)loadingFailed;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(NSArray *)registeredKeyCommands;
-(BOOL)shouldRecognizeGestureRecognizer:(id)arg1 ;
-(BOOL)canToggleFullScreen;
-(void)previewIsAppearingWithProgress:(double)arg1 ;
-(void)previewWillFinishAppearing;
-(QLAppearance *)appearance;
-(void)transitionWillFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidStart:(BOOL)arg1 ;
-(void)hostApplicationDidEnterBackground:(id)arg1 ;
-(void)hostApplicationDidBecomeActive;
-(BOOL)isLoaded;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(id)scrollView;
-(BOOL)canShowNavBar;
-(BOOL)canSwipeToDismiss;
-(void)prepareForActionSheetPresentation;
-(id)toolbarButtonsForTraitCollection:(id)arg1 ;
-(id)excludedToolbarButtonIdentifiersForTraitCollection:(id)arg1 ;
-(void)handlePerformedKeyCommandIfNeeded:(id)arg1 ;
-(BOOL)canShowToolBar;
-(id)parallaxView;
-(void)prepareForInvalidationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)savePreviewEditedCopyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setLoadingFailed:(BOOL)arg1 ;
-(void)updateScrollViewContentOffset:(BOOL)arg1 withPreviousAppearance:(id)arg2 ;
-(void)_addDragInteractionIfNeeded;
-(void)performCompletionBlocksWithError:(id)arg1 ;
-(BOOL)supportsScrollingUpAndDownUsingKeyCommands;
-(void)_scrollScrollViewWithKeyCommand:(id)arg1 ;
-(void)_scrollScrollViewByPercentualOffset:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)saveEditsQueue;
-(id)editProgressIndicatorMessage;
-(BOOL)automaticallyUpdateScrollViewContentOffset;
-(BOOL)automaticallyUpdateScrollViewContentInset;
-(BOOL)automaticallyUpdateScrollViewIndicatorInset;
-(BOOL)canClickToToggleFullscreen;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(void)setIsLoading:(BOOL)arg1 ;
-(void)setContext:(QLPreviewContext *)arg1 ;
@end

