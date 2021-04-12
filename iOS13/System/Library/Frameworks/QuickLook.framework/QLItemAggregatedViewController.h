/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLItemViewController.h>

@protocol QLPreviewItemViewControllerDelegate;
@class QLAppearance, QLItemViewController;

@interface QLItemAggregatedViewController : QLItemViewController {

	BOOL _isVisible;
	BOOL _isAppearing;
	BOOL _fullScreen;
	QLAppearance* _appearance;
	id<QLPreviewItemViewControllerDelegate> _delegate;
	QLItemViewController* _currentPreviewViewController;

}

@property (nonatomic,retain) QLItemViewController * currentPreviewViewController;              //@synthesize currentPreviewViewController=_currentPreviewViewController - In the implementation block
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)title;
-(id)appearance;
-(CGSize)preferredContentSize;
-(id)safeAreaLayoutGuide;
-(id)accessoryView;
-(long long)preferredWhitePointAdaptivityStyle;
-(id)scrollView;
-(id)transitioningView;
-(id)draggableView;
-(QLItemViewController *)currentPreviewViewController;
-(void)setCurrentPreviewViewController:(QLItemViewController *)arg1 ;
-(id)printer;
-(BOOL)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2 ;
-(BOOL)canSwipeToDismiss;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(id)fullscreenBackgroundColor;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)canShowNavBar;
-(void)transitionWillFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidStart:(BOOL)arg1 ;
-(void)showPreviewViewController:(id)arg1 ;
-(void)showPreviewViewController:(id)arg1 animatingWithCrossfade:(BOOL)arg2 ;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(void)performFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)automaticallyUpdateScrollViewContentOffset;
-(BOOL)automaticallyUpdateScrollViewContentInset;
-(BOOL)automaticallyUpdateScrollViewIndicatorInset;
-(BOOL)canClickToToggleFullscreen;
-(id)registeredKeyCommands;
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
@end

