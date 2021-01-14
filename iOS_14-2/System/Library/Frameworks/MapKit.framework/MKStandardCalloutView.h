/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKCalloutView.h>

@class _MKStandardCalloutMaskView, _MKCalloutLayer, UIView, MKSmallCalloutView, UIVisualEffectView, UIMotionEffectGroup;

@interface MKStandardCalloutView : MKCalloutView {

	SCD_Struct_MK16 _anchor;
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
	long long _style;
	SCD_Struct_MK17 _metrics;
	BOOL _hideTitle;

}

@property (assign,nonatomic) BOOL hideTitle;              //@synthesize hideTitle=_hideTitle - In the implementation block
+(double)defaultHeight;
+(Class)layerClass;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_layoutSubviews:(BOOL)arg1 ;
-(id)subtitle;
-(void)setTitle:(id)arg1 ;
-(CGPoint)anchorPoint;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(CGPoint)offset;
-(void)_stopObservingAnnotationView:(id)arg1 ;
-(void)updateConstraints;
-(void)setRightView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDetailView:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithAnnotationView:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)_adaptToUserInterfaceStyle;
-(void)_updateCalloutAnimated:(BOOL)arg1 ;
-(CGPoint)_originForScale:(double)arg1 ;
-(void)_frameDidChange;
-(void)didMoveToWindow;
-(void)_calculateActualAnchorPoint:(CGPoint*)arg1 frame:(CGRect*)arg2 forDesiredAnchorPoint:(CGPoint)arg3 boundaryRect:(CGRect)arg4 ;
-(void)_updateCallout;
-(long long)_calculateAnchorPosition:(CGPoint*)arg1 visibleRect:(CGRect*)arg2 ;
-(void)forceAnchorPosition:(long long)arg1 ;
-(void)annotationViewFrameDidChange;
-(void)completeBounceAnimation;
-(void)_runBounceAnimationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_markDidMoveCalled;
-(void)_showFromAnchorPoint:(CGPoint)arg1 boundaryRect:(CGRect)arg2 animate:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_setNeedsCalloutUpdate;
-(void)_startObservingAnnotationView:(id)arg1 ;
-(void)_removeAccessoryTargetForView:(id)arg1 ;
-(void)_calloutAccessoryControlTapped:(id)arg1 ;
-(void)setLeftView:(id)arg1 backgroundColor:(id)arg2 animated:(BOOL)arg3 ;
-(void)_addAccessoryTargetForView:(id)arg1 ;
-(void)_setOriginForScale:(double)arg1 ;
-(BOOL)isLeftAnchored;
-(void)motionEffectDidUpdate:(id)arg1 ;
-(BOOL)hasPendingVisibility;
-(void)showAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setHideTitle:(BOOL)arg1 ;
-(long long)anchorPosition;
-(BOOL)hideTitle;
-(void)setOffset:(CGPoint)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSubtitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
@end

