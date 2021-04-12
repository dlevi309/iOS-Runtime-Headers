/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/VUIPreviewInteractionControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol VUIDialogInteractionControllerDelegate;
@class UICollectionView, UILongPressGestureRecognizer, VUIPresentationContainerViewController, VUIDialogPresentationController, NSIndexPath, UIViewController, VUIPreviewInteractionController, NSString;

@interface VUIDialogInteractionController : NSObject <VUIPreviewInteractionControllerDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {

	UICollectionView* _collectionView;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	VUIPresentationContainerViewController* _wrapperViewController;
	VUIDialogPresentationController* _dialogPresentationController;
	BOOL _isPresenting;
	id<VUIDialogInteractionControllerDelegate> _delegate;
	NSIndexPath* _currentIndexPath;
	UIViewController* _presentingViewController;
	UIViewController* _presentedViewController;
	VUIPreviewInteractionController* _interactionController;

}

@property (nonatomic,readonly) UIViewController * presentingViewController;                           //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * presentedViewController;                            //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,retain) VUIPreviewInteractionController * interactionController;                 //@synthesize interactionController=_interactionController - In the implementation block
@property (assign,nonatomic,__weak) id<VUIDialogInteractionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentIndexPath;                                          //@synthesize currentIndexPath=_currentIndexPath - In the implementation block
@property (assign,nonatomic) BOOL isPresenting;                                                       //@synthesize isPresenting=_isPresenting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<VUIDialogInteractionControllerDelegate>)delegate;
-(void)setDelegate:(id<VUIDialogInteractionControllerDelegate>)arg1 ;
-(void)_cleanup;
-(UIViewController *)presentingViewController;
-(UIViewController *)presentedViewController;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(NSIndexPath *)currentIndexPath;
-(BOOL)isPresenting;
-(VUIPreviewInteractionController *)interactionController;
-(void)setInteractionController:(VUIPreviewInteractionController *)arg1 ;
-(void)presentViewController:(id)arg1 ;
-(void)setCurrentIndexPath:(NSIndexPath *)arg1 ;
-(void)setIsPresenting:(BOOL)arg1 ;
-(id)initWithPresentingViewController:(id)arg1 collectionView:(id)arg2 controllerToPresent:(id)arg3 ;
-(void)dismissConfirmation;
-(void)longPressGestureRecognizerPressed:(id)arg1 ;
-(BOOL)interactionController:(id)arg1 shouldInteractionControllerBeginForIndexPath:(id)arg2 ;
-(void)interactionController:(id)arg1 didBeginForIndexPath:(id)arg2 ;
-(void)interactionController:(id)arg1 didEndForIndexPath:(id)arg2 ;
@end

