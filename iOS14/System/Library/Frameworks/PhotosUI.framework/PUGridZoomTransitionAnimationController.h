/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/_UICollectionViewControllerLayoutToLayoutTransition.h>

@protocol UIViewControllerContextTransitioning;
@class PUZoomableGridTransition;

@interface PUGridZoomTransitionAnimationController : _UICollectionViewControllerLayoutToLayoutTransition {

	id<UIViewControllerContextTransitioning> _transitionContext;

}

@property (nonatomic,readonly) PUZoomableGridTransition * gridTransitionInfo; 
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(PUZoomableGridTransition *)gridTransitionInfo;
@end

