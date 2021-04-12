/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKCalloutView.h>

@class _MKStandardCalloutMaskView, _MKCalloutLayer, UIView, MKSmallCalloutView, UIVisualEffectView, UIMotionEffectGroup;

@interface MKStandardCalloutView : MKCalloutView {

	SCD_Struct_MK14 _anchor;
	CGRect _frame;
	struct {
		unsigned animated : 1;
		unsigned didMoveCalled : 1;
		unsigned hasPendingAnimatedLayout : 1;
		unsigned needsCalloutUpdate : 1;
		unsigned isObserving : 1;
		unsigned reserved : 26;
	}  _flags;
	BOOL _animatingMapToShow;
	BOOL _dismissed;
	_MKStandardCalloutMaskView* _maskView;
	_MKCalloutLayer* _maskLayer;
	_MKCalloutLayer* _contentStrokeLayer;
	UIView* _contentView;
	MKSmallCalloutView* _calloutView;
	UIVisualEffectView* _backdropView;
	UIMotionEffectGroup* _motionEffect;

}
+(Class)layerClass;
+(double)defaultHeight;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setTitle:(id)arg1 ;
-(void)setOffset:(CGPoint)arg1 ;
-(id)subtitle;
-(CGPoint)offset;
-(void)setFrame:(CGRect)arg1 ;
-(CGPoint)anchorPoint;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(void)updateConstraints;
-(void)didMoveToWindow;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_stopObservingAnnotationView:(id)arg1 ;
-(void)setRightView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDetailView:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithAnnotationView:(id)arg1 ;
-(void)_adaptToUserInterfaceStyle;
-(void)_updateCalloutAnimated:(BOOL)arg1 ;
-(void)setSubtitle:(id)arg1 animated:(BOOL)arg2 ;
-(CGPoint)_originForScale:(double)arg1 ;
-(void)_frameDidChange;
-(void)_layoutSubviews:(BOOL)arg1 ;
-(long long)anchorPosition;
-(void)_calculateActualAnchorPoint:(CGPoint*)arg1 frame:(CGRect*)arg2 forDesiredAnchorPoint:(CGPoint)arg3 boundaryRect:(CGRect)arg4 ;
-(void)completeBounceAnimation;
-(void)_runBounceAnimationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_markDidMoveCalled;
-(void)forceAnchorPosition:(long long)arg1 ;
-(void)_showFromAnchorPoint:(CGPoint)arg1 boundaryRect:(CGRect)arg2 animate:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_startObservingAnnotationView:(id)arg1 ;
-(void)_removeAccessoryTargetForView:(id)arg1 ;
-(void)_calloutAccessoryControlTapped:(id)arg1 ;
-(void)setLeftView:(id)arg1 backgroundColor:(id)arg2 animated:(BOOL)arg3 ;
-(void)_addAccessoryTargetForView:(id)arg1 ;
-(void)_updateCallout;
-(void)_setNeedsCalloutUpdate;
-(void)_setOriginForScale:(double)arg1 ;
-(BOOL)isLeftAnchored;
-(void)motionEffectDidUpdate:(id)arg1 ;
-(BOOL)hasPendingVisibility;
-(void)showAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

