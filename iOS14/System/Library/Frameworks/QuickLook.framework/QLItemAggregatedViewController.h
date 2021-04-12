/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)preferredWhitePointAdaptivityStyle;
-(id)transitioningView;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)printer;
-(id)delegate;
-(id)accessoryView;
-(id)fullscreenBackgroundColor;
-(id)draggableView;
-(void)setDelegate:(id)arg1 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(CGSize)preferredContentSize;
-(BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(void)performFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(BOOL)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2 ;
-(void)showPreviewViewController:(id)arg1 ;
-(void)showPreviewViewController:(id)arg1 animatingWithCrossfade:(BOOL)arg2 ;
-(id)registeredKeyCommands;
-(BOOL)shouldRecognizeGestureRecognizer:(id)arg1 ;
-(BOOL)canToggleFullScreen;
-(void)previewIsAppearingWithProgress:(double)arg1 ;
-(void)previewWillFinishAppearing;
-(id)appearance;
-(void)transitionWillFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidStart:(BOOL)arg1 ;
-(void)hostApplicationDidEnterBackground:(id)arg1 ;
-(void)hostApplicationDidBecomeActive;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(id)scrollView;
-(BOOL)canShowNavBar;
-(id)safeAreaLayoutGuide;
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
-(QLItemViewController *)currentPreviewViewController;
-(BOOL)automaticallyUpdateScrollViewContentOffset;
-(BOOL)automaticallyUpdateScrollViewContentInset;
-(BOOL)automaticallyUpdateScrollViewIndicatorInset;
-(BOOL)canClickToToggleFullscreen;
-(void)setCurrentPreviewViewController:(QLItemViewController *)arg1 ;
-(id)title;
@end

