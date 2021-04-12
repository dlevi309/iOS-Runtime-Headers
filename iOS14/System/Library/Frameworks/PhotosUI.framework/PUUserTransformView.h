/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol PUUserTransformViewDelegate;
@class UIScrollView, UIView, CADisplayLink, UIImage, NSString;

@interface PUUserTransformView : UIView <UIScrollViewDelegate> {

	SCD_Struct_PU16 _delegateFlags;
	BOOL _isUserInteracting;
	BOOL __updatingScrollView;
	BOOL __isUserPanning;
	BOOL __isUserDeceleratingPan;
	BOOL __isUserZooming;
	BOOL __isUserEndingZoom;
	BOOL __isUserPanningOrDecelerating;
	BOOL __isUserZoomingOrBouncing;
	BOOL __shouldTrackContentAnimation;
	BOOL __isContentAnimating;
	BOOL __isAnimatingZoomEnd;
	BOOL __isUpdatingState;
	BOOL __wasUserInteractingBeforeStateUpdate;
	BOOL __needsUpdateUserPanningOrDecelerating;
	BOOL __needsUpdateUserZoomingOrBouncing;
	BOOL __needsUpdateUserInteracting;
	BOOL __needsUpdateShouldTrackContentAnimation;
	BOOL __needsUpdateUserAffineTransform;
	BOOL __needsUpdateContentState;
	BOOL __needsUpdateAnimatingZoomEnd;
	BOOL __needsUpdateZoomAndScroll;
	BOOL __needsUpdateScrollView;
	id<PUUserTransformViewDelegate> _delegate;
	unsigned long long _enabledInteractions;
	UIScrollView* __scrollView;
	UIView* __scrollContentView;
	double __doubleTapZoomScale;
	double __contentZoomScale;
	long long __numberOfNestedStateChanges;
	CADisplayLink* __displayLink;
	double __desiredZoomScale;
	double __preferredMinimumZoomScale;
	double __preferredMaximumZoomScale;
	long long __numberOfNestedZoomAndScrollChanges;
	UIImage* _debugScrollViewContentImage;
	CGSize _contentPixelSize;
	CGSize _scrollPadding;
	CGPoint __contentCenter;
	CGRect _untransformedContentFrame;
	CGAffineTransform _userAffineTransform;

}

@property (nonatomic,readonly) UIScrollView * _scrollView;                                                                                 //@synthesize _scrollView=__scrollView - In the implementation block
@property (nonatomic,readonly) UIView * _scrollContentView;                                                                                //@synthesize _scrollContentView=__scrollContentView - In the implementation block
@property (assign,setter=_setDoubleTapZoomScale:,nonatomic) double _doubleTapZoomScale;                                                    //@synthesize _doubleTapZoomScale=__doubleTapZoomScale - In the implementation block
@property (assign,setter=_setUpdatingScrollView:,getter=_isUpdatingScrollView,nonatomic) BOOL _updatingScrollView;                         //@synthesize _updatingScrollView=__updatingScrollView - In the implementation block
@property (assign,setter=_setUserPanning:,nonatomic) BOOL _isUserPanning;                                                                  //@synthesize _isUserPanning=__isUserPanning - In the implementation block
@property (assign,setter=_setUserDeceleratingPan:,nonatomic) BOOL _isUserDeceleratingPan;                                                  //@synthesize _isUserDeceleratingPan=__isUserDeceleratingPan - In the implementation block
@property (assign,setter=_setUserZooming:,nonatomic) BOOL _isUserZooming;                                                                  //@synthesize _isUserZooming=__isUserZooming - In the implementation block
@property (assign,setter=_setUserEndingZoom:,nonatomic) BOOL _isUserEndingZoom;                                                            //@synthesize _isUserEndingZoom=__isUserEndingZoom - In the implementation block
@property (assign,setter=_setUserPanningOrDecelerating:,nonatomic) BOOL _isUserPanningOrDecelerating;                                      //@synthesize _isUserPanningOrDecelerating=__isUserPanningOrDecelerating - In the implementation block
@property (assign,setter=_setUserZoomingOrBouncing:,nonatomic) BOOL _isUserZoomingOrBouncing;                                              //@synthesize _isUserZoomingOrBouncing=__isUserZoomingOrBouncing - In the implementation block
@property (assign,setter=_setUserInteracting:,nonatomic) BOOL isUserInteracting;                                                           //@synthesize isUserInteracting=_isUserInteracting - In the implementation block
@property (assign,setter=_setShouldTrackContentAnimation:,nonatomic) BOOL _shouldTrackContentAnimation;                                    //@synthesize _shouldTrackContentAnimation=__shouldTrackContentAnimation - In the implementation block
@property (assign,setter=_setContentAnimating:,nonatomic) BOOL _isContentAnimating;                                                        //@synthesize _isContentAnimating=__isContentAnimating - In the implementation block
@property (assign,setter=_setContentCenter:,nonatomic) CGPoint _contentCenter;                                                             //@synthesize _contentCenter=__contentCenter - In the implementation block
@property (assign,setter=_setContentZoomScale:,nonatomic) double _contentZoomScale;                                                        //@synthesize _contentZoomScale=__contentZoomScale - In the implementation block
@property (assign,setter=_setAnimatingZoomEnd:,nonatomic) BOOL _isAnimatingZoomEnd;                                                        //@synthesize _isAnimatingZoomEnd=__isAnimatingZoomEnd - In the implementation block
@property (assign,setter=_setNumberOfNestedStateChanges:,nonatomic) long long _numberOfNestedStateChanges;                                 //@synthesize _numberOfNestedStateChanges=__numberOfNestedStateChanges - In the implementation block
@property (assign,setter=_setUpdatingState:,nonatomic) BOOL _isUpdatingState;                                                              //@synthesize _isUpdatingState=__isUpdatingState - In the implementation block
@property (assign,setter=_setWasUserInteractingBeforeStateUpdate:,nonatomic) BOOL _wasUserInteractingBeforeStateUpdate;                    //@synthesize _wasUserInteractingBeforeStateUpdate=__wasUserInteractingBeforeStateUpdate - In the implementation block
@property (assign,setter=_setNeedsUpdateUserPanningOrDecelerating:,nonatomic) BOOL _needsUpdateUserPanningOrDecelerating;                  //@synthesize _needsUpdateUserPanningOrDecelerating=__needsUpdateUserPanningOrDecelerating - In the implementation block
@property (assign,setter=_setNeedsUpdateUserZoomingOrBouncing:,nonatomic) BOOL _needsUpdateUserZoomingOrBouncing;                          //@synthesize _needsUpdateUserZoomingOrBouncing=__needsUpdateUserZoomingOrBouncing - In the implementation block
@property (assign,setter=_setNeedsUpdateUserInteracting:,nonatomic) BOOL _needsUpdateUserInteracting;                                      //@synthesize _needsUpdateUserInteracting=__needsUpdateUserInteracting - In the implementation block
@property (assign,setter=_setNeedsUpdateShouldTrackContentAnimation:,nonatomic) BOOL _needsUpdateShouldTrackContentAnimation;              //@synthesize _needsUpdateShouldTrackContentAnimation=__needsUpdateShouldTrackContentAnimation - In the implementation block
@property (assign,setter=_setNeedsUpdateUserAffineTransform:,nonatomic) BOOL _needsUpdateUserAffineTransform;                              //@synthesize _needsUpdateUserAffineTransform=__needsUpdateUserAffineTransform - In the implementation block
@property (assign,setter=_setNeedsUpdateContentState:,nonatomic) BOOL _needsUpdateContentState;                                            //@synthesize _needsUpdateContentState=__needsUpdateContentState - In the implementation block
@property (assign,setter=_setNeedsUpdateAnimatingZoomEnd:,nonatomic) BOOL _needsUpdateAnimatingZoomEnd;                                    //@synthesize _needsUpdateAnimatingZoomEnd=__needsUpdateAnimatingZoomEnd - In the implementation block
@property (setter=_setDisplayLink:,nonatomic,retain) CADisplayLink * _displayLink;                                                         //@synthesize _displayLink=__displayLink - In the implementation block
@property (assign,setter=_setDesiredZoomScale:,nonatomic) double _desiredZoomScale;                                                        //@synthesize _desiredZoomScale=__desiredZoomScale - In the implementation block
@property (assign,setter=_setPreferredMinimumZoomScale:,nonatomic) double _preferredMinimumZoomScale;                                      //@synthesize _preferredMinimumZoomScale=__preferredMinimumZoomScale - In the implementation block
@property (assign,setter=_setPreferredMaximumZoomScale:,nonatomic) double _preferredMaximumZoomScale;                                      //@synthesize _preferredMaximumZoomScale=__preferredMaximumZoomScale - In the implementation block
@property (assign,setter=_setNumberOfNestedZoomAndScrollChanges:,nonatomic) long long _numberOfNestedZoomAndScrollChanges;                 //@synthesize _numberOfNestedZoomAndScrollChanges=__numberOfNestedZoomAndScrollChanges - In the implementation block
@property (assign,setter=_setNeedsUpdateZoomAndScroll:,nonatomic) BOOL _needsUpdateZoomAndScroll;                                          //@synthesize _needsUpdateZoomAndScroll=__needsUpdateZoomAndScroll - In the implementation block
@property (assign,setter=_setNeedsUpdateScrollView:,nonatomic) BOOL _needsUpdateScrollView;                                                //@synthesize _needsUpdateScrollView=__needsUpdateScrollView - In the implementation block
@property (nonatomic,retain) UIImage * debugScrollViewContentImage;                                                                        //@synthesize debugScrollViewContentImage=_debugScrollViewContentImage - In the implementation block
@property (assign,nonatomic,__weak) id<PUUserTransformViewDelegate> delegate;                                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize contentPixelSize;                                                                                      //@synthesize contentPixelSize=_contentPixelSize - In the implementation block
@property (assign,nonatomic) CGRect untransformedContentFrame;                                                                             //@synthesize untransformedContentFrame=_untransformedContentFrame - In the implementation block
@property (assign,nonatomic) CGAffineTransform userAffineTransform;                                                                        //@synthesize userAffineTransform=_userAffineTransform - In the implementation block
@property (assign,nonatomic) unsigned long long enabledInteractions;                                                                       //@synthesize enabledInteractions=_enabledInteractions - In the implementation block
@property (assign,nonatomic) CGSize scrollPadding;                                                                                         //@synthesize scrollPadding=_scrollPadding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)_contentZoomScale;
-(void)_invalidateShouldTrackContentAnimation;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)setContentPixelSize:(CGSize)arg1 ;
-(void)_setAnimatingZoomEnd:(BOOL)arg1 ;
-(UIScrollView *)_scrollView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserAffineTransform:(CGAffineTransform)arg1 ;
-(void)_invalidateUserAffineTransform;
-(BOOL)_isContentAnimating;
-(void)_assertInsideZoomAndScrollChangeBlock;
-(void)setEnabledInteractions:(unsigned long long)arg1 ;
-(void)_setNumberOfNestedStateChanges:(long long)arg1 ;
-(void)_setNeedsUpdateAnimatingZoomEnd:(BOOL)arg1 ;
-(CGSize)scrollPadding;
-(void)_updateScrollViewIfNeeded;
-(id<PUUserTransformViewDelegate>)delegate;
-(BOOL)_isUpdatingState;
-(UIView *)_scrollContentView;
-(void)_setUserInteracting:(BOOL)arg1 ;
-(void)_setUpdatingState:(BOOL)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(CGPoint)_contentOffsetAdjustmentForContentInsets:(UIEdgeInsets)arg1 ;
-(void)_setShouldTrackContentAnimation:(BOOL)arg1 ;
-(BOOL)contentContainsLocationFromProvider:(id)arg1 ;
-(void)_setNeedsStateUpdate;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(long long)_numberOfNestedZoomAndScrollChanges;
-(BOOL)_needsUpdateContentState;
-(BOOL)_needsStateUpdate;
-(CGPoint)_contentCenter;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_invalidateUserPanningOrDecelerating;
-(void)_updateUserPanningOrDeceleratingIfNeeded;
-(void)_setContentCenter:(CGPoint)arg1 ;
-(void)_didChangeState;
-(void)_setUserPanningOrDecelerating:(BOOL)arg1 ;
-(void)_updateAnimatingZoomEndIfNeeded;
-(void)_setUserAffineTransform:(CGAffineTransform)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)_setNumberOfNestedZoomAndScrollChanges:(long long)arg1 ;
-(BOOL)_isUserPanningOrDecelerating;
-(void)_setContentZoomScale:(double)arg1 ;
-(void)_setDesiredZoomScale:(double)arg1 ;
-(void)setDelegate:(id<PUUserTransformViewDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)_updateStateIfNeeded;
-(void)setUntransformedContentFrame:(CGRect)arg1 ;
-(void)_setUpdatingScrollView:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)_setPreferredMinimumZoomScale:(double)arg1 ;
-(void)_willChangeState;
-(void)_performZoomAndScrollChanges:(/*^block*/id)arg1 ;
-(void)setScrollPadding:(CGSize)arg1 ;
-(BOOL)_wasUserInteractingBeforeStateUpdate;
-(BOOL)_needsUpdateZoomAndScroll;
-(void)_performStateChanges:(/*^block*/id)arg1 ;
-(void)_invalidateAnimatingZoomEnd;
-(void)_invalidateContentState;
-(void)_assertInsideStateChangeBlock;
-(BOOL)_isUserEndingZoom;
-(long long)_numberOfNestedStateChanges;
-(void)_setUserZooming:(BOOL)arg1 ;
-(CGSize)contentPixelSize;
-(void)_setContentAnimating:(BOOL)arg1 ;
-(CADisplayLink *)_displayLink;
-(BOOL)_isUserZooming;
-(void)_invalidateUserInteracting;
-(void)_setUserDeceleratingPan:(BOOL)arg1 ;
-(BOOL)_isUserZoomingOrBouncing;
-(BOOL)_needsUpdateUserInteracting;
-(BOOL)_needsUpdateAnimatingZoomEnd;
-(BOOL)_needsUpdateShouldTrackContentAnimation;
-(CGAffineTransform)userAffineTransform;
-(double)_desiredZoomScale;
-(void)_setDisplayLink:(id)arg1 ;
-(BOOL)_needsUpdateUserZoomingOrBouncing;
-(void)_setNeedsUpdateScrollView:(BOOL)arg1 ;
-(void)handleDoubleTapWithLocationProvider:(id)arg1 ;
-(double)_preferredMaximumZoomScale;
-(void)_updateUserZoomingOrBouncingIfNeeded;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)_shouldTrackContentAnimation;
-(void)_updateDisplayLink;
-(double)_doubleTapZoomScale;
-(BOOL)_isUpdatingScrollView;
-(BOOL)_isUserPanning;
-(BOOL)_needsUpdateUserPanningOrDecelerating;
-(void)_setUserPanning:(BOOL)arg1 ;
-(void)setDebugScrollViewContentImage:(UIImage *)arg1 ;
-(unsigned long long)enabledInteractions;
-(void)_setWasUserInteractingBeforeStateUpdate:(BOOL)arg1 ;
-(void)_invalidateZoomAndScroll;
-(UIEdgeInsets)_contentInsetsForContentScale:(double)arg1 ;
-(void)_updateUserAffineTransformIfNeeded;
-(UIImage *)debugScrollViewContentImage;
-(BOOL)_needsUpdateScrollView;
-(void)_setDoubleTapZoomScale:(double)arg1 ;
-(void)_setUserEndingZoom:(BOOL)arg1 ;
-(BOOL)_isAnimatingZoomEnd;
-(void)_setNeedsUpdateUserZoomingOrBouncing:(BOOL)arg1 ;
-(BOOL)isUserInteracting;
-(void)_updateContentStateIfNeeded;
-(void)_setPreferredMaximumZoomScale:(double)arg1 ;
-(void)_updateShouldTrackContentAnimationIfNeeded;
-(void)_updateZoomAndScrollIfNeeded;
-(void)_setEnabledInteractions:(unsigned long long)arg1 ;
-(void)_setNeedsUpdateUserInteracting:(BOOL)arg1 ;
-(BOOL)_isUserDeceleratingPan;
-(double)_preferredMinimumZoomScale;
-(BOOL)_needsUpdateUserAffineTransform;
-(void)_assertInsideStateUpdate;
-(void)_setNeedsUpdateUserPanningOrDecelerating:(BOOL)arg1 ;
-(void)_setUserZoomingOrBouncing:(BOOL)arg1 ;
-(void)_invalidateScrollView;
-(void)_setNeedsUpdateZoomAndScroll:(BOOL)arg1 ;
-(CGRect)untransformedContentFrame;
-(void)_updateUserInteractingIfNeeded;
-(void)_invalidateUserZoomingOrBouncing;
-(void)_setNeedsUpdateShouldTrackContentAnimation:(BOOL)arg1 ;
-(void)_handleDisplayLink:(id)arg1 ;
-(void)_setNeedsUpdateUserAffineTransform:(BOOL)arg1 ;
-(void)_setNeedsUpdateContentState:(BOOL)arg1 ;
@end

