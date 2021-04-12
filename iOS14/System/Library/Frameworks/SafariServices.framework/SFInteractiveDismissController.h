/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIPercentDrivenInteractiveTransition.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerContextTransitioning, SFInteractiveDismissControllerDelegate;
@class UIView, UIScreenEdgePanGestureRecognizer, UIViewController, NSString;

@interface SFInteractiveDismissController : UIPercentDrivenInteractiveTransition <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {

	id<UIViewControllerContextTransitioning> _transitionContext;
	unsigned long long _dismissMode;
	long long _interactionState;
	double _timestamps[3];
	double _velocities[3];
	double _accelerations[3];
	UIView* _dimmingView;
	UIScreenEdgePanGestureRecognizer* _edgeSwipeGestureRecognizer;
	UIViewController* _viewControllerToBeDismissed;
	UIView* _edgeSwipeView;
	id<SFInteractiveDismissControllerDelegate> _delegate;
	unsigned long long _sampleCount;
	double _totalDistance;
	double _skipTimeStamp;
	double _previousTimeStamp;
	double _previousDisplacement;
	double _previousVelocity;
	double _previousAcceleration;
	double _averageVelocity;
	double _averageAcceleration;

}

@property (assign,nonatomic) unsigned long long sampleCount;                                               //@synthesize sampleCount=_sampleCount - In the implementation block
@property (assign,nonatomic) double totalDistance;                                                         //@synthesize totalDistance=_totalDistance - In the implementation block
@property (assign,nonatomic) double skipTimeStamp;                                                         //@synthesize skipTimeStamp=_skipTimeStamp - In the implementation block
@property (assign,nonatomic) double previousTimeStamp;                                                     //@synthesize previousTimeStamp=_previousTimeStamp - In the implementation block
@property (assign,nonatomic) double previousDisplacement;                                                  //@synthesize previousDisplacement=_previousDisplacement - In the implementation block
@property (assign,nonatomic) double previousVelocity;                                                      //@synthesize previousVelocity=_previousVelocity - In the implementation block
@property (assign,nonatomic) double previousAcceleration;                                                  //@synthesize previousAcceleration=_previousAcceleration - In the implementation block
@property (assign,nonatomic) double averageVelocity;                                                       //@synthesize averageVelocity=_averageVelocity - In the implementation block
@property (assign,nonatomic) double averageAcceleration;                                                   //@synthesize averageAcceleration=_averageAcceleration - In the implementation block
@property (nonatomic,readonly) UIScreenEdgePanGestureRecognizer * edgeSwipeGestureRecognizer;              //@synthesize edgeSwipeGestureRecognizer=_edgeSwipeGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewControllerToBeDismissed;                        //@synthesize viewControllerToBeDismissed=_viewControllerToBeDismissed - In the implementation block
@property (nonatomic,retain) UIView * edgeSwipeView;                                                       //@synthesize edgeSwipeView=_edgeSwipeView - In the implementation block
@property (assign,nonatomic,__weak) id<SFInteractiveDismissControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)averageAcceleration;
-(void)animateTransition:(id)arg1 ;
-(void)setSkipTimeStamp:(double)arg1 ;
-(void)setPreviousDisplacement:(double)arg1 ;
-(void)setPreviousAcceleration:(double)arg1 ;
-(double)previousAcceleration;
-(double)previousVelocity;
-(void)setAverageVelocity:(double)arg1 ;
-(void)_updateStatistics:(id)arg1 firstSample:(BOOL)arg2 finalSample:(BOOL)arg3 ;
-(double)previousDisplacement;
-(void)setAverageAcceleration:(double)arg1 ;
-(void)setPreviousVelocity:(double)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(double)totalDistance;
-(double)averageVelocity;
-(void)setPreviousTimeStamp:(double)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(BOOL)popGesture:(id)arg1 withRemainingDuration:(double)arg2 shouldPopWithVelocity:(double*)arg3 ;
-(void)swiped:(id)arg1 ;
-(double)previousTimeStamp;
-(double)transitionDuration:(id)arg1 ;
-(void)setTotalDistance:(double)arg1 ;
-(double)_translationCoefficient;
-(id)init;
-(double)skipTimeStamp;
-(CGPoint)velocityForStatistics;
-(void)setViewControllerToBeDismissed:(UIViewController *)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(id<SFInteractiveDismissControllerDelegate>)delegate;
-(void)cancelInteractiveTransition;
-(CGPoint)translationForStatistics;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)_animateDismissalCancelTransition;
-(void)_animateDismissalCompleteTransition;
-(void)setEdgeSwipeView:(UIView *)arg1 ;
-(void)_presentAnimateTransition:(id)arg1 ;
-(void)setDelegate:(id<SFInteractiveDismissControllerDelegate>)arg1 ;
-(void)finishInteractiveTransition;
-(UIScreenEdgePanGestureRecognizer *)edgeSwipeGestureRecognizer;
-(unsigned long long)sampleCount;
-(void)_dismissAnimateTransition:(id)arg1 ;
-(UIViewController *)viewControllerToBeDismissed;
-(UIView *)edgeSwipeView;
-(double)_percentComplete:(id)arg1 ;
@end

