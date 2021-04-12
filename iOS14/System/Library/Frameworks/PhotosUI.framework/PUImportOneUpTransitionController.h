/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUModalTransition.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@class PUPhotoPinchGestureRecognizer, UIPanGestureRecognizer, UIViewController, PUImportOneUpModalTransition, NSString;

@interface PUImportOneUpTransitionController : PUModalTransition <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {

	BOOL _hasInstalledDismissGestureRecognizers;
	PUPhotoPinchGestureRecognizer* _presentingPinchGestureRecognizer;
	PUPhotoPinchGestureRecognizer* _dismissPinchGestureRecognizer;
	UIPanGestureRecognizer* _dismissPanGestureRecognizer;
	UIViewController* _presentingViewController;
	long long _operation;
	PUImportOneUpModalTransition* _transition;

}

@property (nonatomic,readonly) PUPhotoPinchGestureRecognizer * presentingPinchGestureRecognizer;              //@synthesize presentingPinchGestureRecognizer=_presentingPinchGestureRecognizer - In the implementation block
@property (nonatomic,retain) PUPhotoPinchGestureRecognizer * dismissPinchGestureRecognizer;                   //@synthesize dismissPinchGestureRecognizer=_dismissPinchGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * dismissPanGestureRecognizer;                            //@synthesize dismissPanGestureRecognizer=_dismissPanGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIViewController * presentingViewController;                                   //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,readonly) long long operation;                                                           //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) PUImportOneUpModalTransition * transition;                                       //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) BOOL hasInstalledDismissGestureRecognizers;                                      //@synthesize hasInstalledDismissGestureRecognizers=_hasInstalledDismissGestureRecognizers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(void)animationEnded:(BOOL)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(long long)operation;
-(void)startInteractiveTransition:(id)arg1 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(UIViewController *)presentingViewController;
-(id)interruptibleAnimatorForTransition:(id)arg1 ;
-(BOOL)wantsInteractiveStart;
-(void)setTransition:(PUImportOneUpModalTransition *)arg1 ;
-(BOOL)continuousGestureRecognizerIsActive:(id)arg1 ;
-(id)initWithPresentingViewController:(id)arg1 pinchGestureRecognizer:(id)arg2 ;
-(void)maybeInitiateInteractiveDismiss:(id)arg1 ;
-(void)installDismissGestureRecognizersOnView:(id)arg1 ;
-(BOOL)hasInstalledDismissGestureRecognizers;
-(PUPhotoPinchGestureRecognizer *)presentingPinchGestureRecognizer;
-(void)setHasInstalledDismissGestureRecognizers:(BOOL)arg1 ;
-(PUPhotoPinchGestureRecognizer *)dismissPinchGestureRecognizer;
-(void)setDismissPinchGestureRecognizer:(PUPhotoPinchGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)dismissPanGestureRecognizer;
-(void)setDismissPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(PUImportOneUpModalTransition *)transition;
@end

