/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKit/UIPreviewInteractionDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol VUIPreviewInteractionControllerDelegate;
@class UIPreviewInteraction, UICollectionView, VUIPresentationContainerViewController, VUIDialogPresentationController, UIViewPropertyAnimator, UICollectionViewCell, UIViewController, NSIndexPath, NSString;

@interface VUIPreviewInteractionController : NSObject <UIPreviewInteractionDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {

	UIPreviewInteraction* _previewInteraction;
	UICollectionView* _collectionView;
	VUIPresentationContainerViewController* _wrapperViewController;
	VUIDialogPresentationController* _dialogPresentationController;
	UIViewPropertyAnimator* _previewPropertyAnimator;
	UIViewPropertyAnimator* _commitPropertyAnimator;
	UICollectionViewCell* _stashedCell;
	BOOL _previewTransitionEnded;
	id<VUIPreviewInteractionControllerDelegate> _delegate;
	UIViewController* _presentingViewController;
	UIViewController* _presentedViewController;
	NSIndexPath* _currentIndexPath;

}

@property (nonatomic,__weak,readonly) UIViewController * presentingViewController;                     //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * presentedViewController;                             //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,readonly) NSIndexPath * currentIndexPath;                                         //@synthesize currentIndexPath=_currentIndexPath - In the implementation block
@property (assign,nonatomic,__weak) id<VUIPreviewInteractionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<VUIPreviewInteractionControllerDelegate>)delegate;
-(void)setDelegate:(id<VUIPreviewInteractionControllerDelegate>)arg1 ;
-(UIViewController *)presentingViewController;
-(UIViewController *)presentedViewController;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(NSIndexPath *)currentIndexPath;
-(BOOL)previewInteractionShouldBegin:(id)arg1 ;
-(void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(BOOL)arg3 ;
-(void)previewInteractionDidCancel:(id)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(id)initWithPresentingViewController:(id)arg1 collectionView:(id)arg2 controllerToPresent:(id)arg3 ;
-(void)dismissConfirmation;
-(void)_cleanupPreviewInteraction;
@end

