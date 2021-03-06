/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIPercentDrivenInteractiveTransition.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <VideosUI/VideosExtrasOptionallyInteractiveAnimationController.h>

@class VideosExtrasBorderedImageView, NSString;

@interface VideosExtrasZoomingImageTransitionController : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning, VideosExtrasOptionallyInteractiveAnimationController> {

	BOOL _interactive;
	BOOL _shouldUseSpringAnimation;
	unsigned long long _itemIndex;
	double _initialPinchScale;
	VideosExtrasBorderedImageView* _zoomingImageView;
	CGPoint _initialPinchCenter;

}

@property (assign,nonatomic) CGPoint initialPinchCenter;                                    //@synthesize initialPinchCenter=_initialPinchCenter - In the implementation block
@property (assign,nonatomic) double initialPinchScale;                                      //@synthesize initialPinchScale=_initialPinchScale - In the implementation block
@property (assign,nonatomic) unsigned long long itemIndex;                                  //@synthesize itemIndex=_itemIndex - In the implementation block
@property (assign,getter=isInteractive,nonatomic) BOOL interactive;                         //@synthesize interactive=_interactive - In the implementation block
@property (nonatomic,retain) VideosExtrasBorderedImageView * zoomingImageView;              //@synthesize zoomingImageView=_zoomingImageView - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSpringAnimation;                                 //@synthesize shouldUseSpringAnimation=_shouldUseSpringAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(unsigned long long)itemIndex;
-(double)_destinationScale;
-(void)setShouldUseSpringAnimation:(BOOL)arg1 ;
-(BOOL)isInteractive;
-(CGPoint)initialPinchCenter;
-(BOOL)shouldUseSpringAnimation;
-(void)setInteractive:(BOOL)arg1 ;
-(VideosExtrasBorderedImageView *)zoomingImageView;
-(id)initWithItemIndex:(unsigned long long)arg1 forInteractiveTransition:(BOOL)arg2 ;
-(void)setZoomingImageView:(VideosExtrasBorderedImageView *)arg1 ;
-(double)initialPinchScale;
-(void)setInitialPinchScale:(double)arg1 ;
-(float)_desiredSpeedForNonInteractiveAnimationWithDuration:(double)arg1 deferredTransform:(CGAffineTransform)arg2 finalTransform:(CGAffineTransform)arg3 ;
-(void)setItemIndex:(unsigned long long)arg1 ;
-(double)_maximumDistanceTravelledForPoints:(CGPoint*)arg1 count:(unsigned long long)arg2 currentTransform:(CGAffineTransform)arg3 finalTransform:(CGAffineTransform)arg4 ;
-(void)completeInteractiveTransitionWithPinchGestureRecognizer:(id)arg1 ;
-(void)setInitialPinchCenter:(CGPoint)arg1 ;
-(void)updateInteractiveTransitionWithPinchGestureRecognizer:(id)arg1 ;
-(void)prepareInteractiveTransitionWithPinchGestureRecognizer:(id)arg1 ;
@end

