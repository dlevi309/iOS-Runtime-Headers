/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIViewController, UIPercentDrivenInteractiveTransition, PXRegionOfInterest, NSString;

@interface PXUIViewControllerTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	UIViewController* _internalMasterViewController;
	UIViewController* _internalDetailViewController;
	/*^block*/id _transitionAnimationStartHandler;
	/*^block*/id _transitionAnimationCompletionHandler;
	BOOL _supportsEdgeSwipeBackGesture;
	BOOL _interactive;
	BOOL _transitioningToDetail;
	UIPercentDrivenInteractiveTransition* _interactionController;
	long long _state;
	id __pauseToken;
	PXRegionOfInterest* _masterRegionOfInterest;

}

@property (assign,nonatomic) long long state;                                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long transitionIdentifier; 
@property (setter=_setPauseToken:,nonatomic,retain) id _pauseToken;                                       //@synthesize _pauseToken=__pauseToken - In the implementation block
@property (nonatomic,readonly) BOOL supportsEdgeSwipeBackGesture;                                         //@synthesize supportsEdgeSwipeBackGesture=_supportsEdgeSwipeBackGesture - In the implementation block
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive;                                     //@synthesize interactive=_interactive - In the implementation block
@property (nonatomic,retain) PXRegionOfInterest * masterRegionOfInterest;                                 //@synthesize masterRegionOfInterest=_masterRegionOfInterest - In the implementation block
@property (assign,getter=isTransitioningToDetail,nonatomic) BOOL transitioningToDetail;                   //@synthesize transitioningToDetail=_transitioningToDetail - In the implementation block
@property (nonatomic,readonly) UIPercentDrivenInteractiveTransition * interactionController;              //@synthesize interactionController=_interactionController - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * masterViewController; 
@property (nonatomic,__weak,readonly) UIViewController * detailViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2 ;
-(void)animateTransition:(id)arg1 ;
-(UIViewController *)masterViewController;
-(UIViewController *)detailViewController;
-(double)transitionDuration:(id)arg1 ;
-(long long)transitionIdentifier;
-(void)_setPauseToken:(id)arg1 ;
-(id)initWithMasterViewController:(id)arg1 detailViewController:(id)arg2 ;
-(void)installTransitionAnimationStartHandler:(/*^block*/id)arg1 ;
-(void)installTransitionAnimationCompletionHandler:(/*^block*/id)arg1 ;
-(void)setMasterRegionOfInterest:(PXRegionOfInterest *)arg1 ;
-(void)setTransitioningToDetail:(BOOL)arg1 ;
-(id)init;
-(void)didEndTransition;
-(void)willStartTransition;
-(id)_pauseToken;
-(BOOL)isInteractive;
-(void)willEndTransition;
-(BOOL)supportsEdgeSwipeBackGesture;
-(long long)transitionIdentifierForTransitionMode:(unsigned long long)arg1 ;
-(UIPercentDrivenInteractiveTransition *)interactionController;
-(void)setState:(long long)arg1 ;
-(BOOL)isTransitioningToDetail;
-(long long)state;
-(PXRegionOfInterest *)masterRegionOfInterest;
@end

