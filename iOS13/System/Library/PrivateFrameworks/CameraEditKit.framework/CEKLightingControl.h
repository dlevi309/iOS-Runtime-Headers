/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/

#import <CameraEditKit/CameraEditKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CEKBadgeViewDelegate.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol CEKLightingControlDelegate;
@class NSArray, NSSet, NSDictionary, CEKLightingFrameCache, CEKLightingDialBackground, UIImageView, CEKLightingNameBadge, UIPanGestureRecognizer, UILongPressGestureRecognizer, UITapGestureRecognizer, NSDate, CEKAnimationGenerator, NSTimer, CEKSelectionFeedbackGenerator, NSString;

@interface CEKLightingControl : UIView <UIGestureRecognizerDelegate, CEKBadgeViewDelegate, CAAnimationDelegate> {

	struct {
		BOOL respondsToWillChangeExpanded;
		BOOL respondsToDidChangeExpanded;
	}  _delegateFlags;
	BOOL _tracking;
	BOOL _expanded;
	BOOL _highlighted;
	BOOL _nameBadgeHidden;
	id<CEKLightingControlDelegate> _delegate;
	long long _lightingEffectSet;
	long long _selectedLightingType;
	long long _orientation;
	NSArray* __effectTypes;
	NSSet* __enabledEffectTypes;
	NSDictionary* __effectItemsForType;
	double __selectionAngularOffset;
	unsigned long long __selectionIndex;
	CEKLightingFrameCache* __frameCache;
	NSDictionary* __itemViewsForType;
	NSDictionary* __itemShadowViewsForType;
	NSDictionary* __itemOutlineViewsForType;
	CEKLightingDialBackground* __backgroundView;
	UIImageView* __selectionOverlay;
	UIImageView* __selectionUnderlay;
	CEKLightingNameBadge* __nameBadge;
	UIPanGestureRecognizer* __panGesture;
	UILongPressGestureRecognizer* __pressGesture;
	UITapGestureRecognizer* __tapGesture;
	NSDate* __timeTrackingBegan;
	CEKAnimationGenerator* __animationGenerator;
	NSTimer* __collapseTimer;
	unsigned long long __expandedAnimationCounter;
	CEKSelectionFeedbackGenerator* __selectionFeedbackGenerator;
	SCD_Struct_CE8 _collapsedItemFading;

}

@property (nonatomic,readonly) NSArray * _effectTypes;                                                                       //@synthesize _effectTypes=__effectTypes - In the implementation block
@property (nonatomic,retain) NSSet * _enabledEffectTypes;                                                                    //@synthesize _enabledEffectTypes=__enabledEffectTypes - In the implementation block
@property (setter=_setEffectItemsForType:,nonatomic,retain) NSDictionary * _effectItemsForType;                              //@synthesize _effectItemsForType=__effectItemsForType - In the implementation block
@property (assign,setter=_setSelectionAngularOffset:,nonatomic) double _selectionAngularOffset;                              //@synthesize _selectionAngularOffset=__selectionAngularOffset - In the implementation block
@property (nonatomic,readonly) unsigned long long _selectionIndex;                                                           //@synthesize _selectionIndex=__selectionIndex - In the implementation block
@property (nonatomic,readonly) CEKLightingFrameCache * _frameCache;                                                          //@synthesize _frameCache=__frameCache - In the implementation block
@property (setter=_setItemViewsForType:,nonatomic,retain) NSDictionary * _itemViewsForType;                                  //@synthesize _itemViewsForType=__itemViewsForType - In the implementation block
@property (setter=_setItemShadowViewsForType:,nonatomic,retain) NSDictionary * _itemShadowViewsForType;                      //@synthesize _itemShadowViewsForType=__itemShadowViewsForType - In the implementation block
@property (setter=_setItemOutlineViewsForType:,nonatomic,retain) NSDictionary * _itemOutlineViewsForType;                    //@synthesize _itemOutlineViewsForType=__itemOutlineViewsForType - In the implementation block
@property (setter=_setBackgroundView:,nonatomic,retain) CEKLightingDialBackground * _backgroundView;                         //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (setter=_setSelectionOverlay:,nonatomic,retain) UIImageView * _selectionOverlay;                                   //@synthesize _selectionOverlay=__selectionOverlay - In the implementation block
@property (setter=_setSelectionUnderlay:,nonatomic,retain) UIImageView * _selectionUnderlay;                                 //@synthesize _selectionUnderlay=__selectionUnderlay - In the implementation block
@property (setter=_setNameBadge:,nonatomic,retain) CEKLightingNameBadge * _nameBadge;                                        //@synthesize _nameBadge=__nameBadge - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * _panGesture;                                                         //@synthesize _panGesture=__panGesture - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * _pressGesture;                                                 //@synthesize _pressGesture=__pressGesture - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * _tapGesture;                                                         //@synthesize _tapGesture=__tapGesture - In the implementation block
@property (setter=_setTimeTrackingBegan:,nonatomic,retain) NSDate * _timeTrackingBegan;                                      //@synthesize _timeTrackingBegan=__timeTrackingBegan - In the implementation block
@property (assign,setter=_setTracking:,getter=isTracking,nonatomic) BOOL tracking;                                           //@synthesize tracking=_tracking - In the implementation block
@property (nonatomic,readonly) CEKAnimationGenerator * _animationGenerator;                                                  //@synthesize _animationGenerator=__animationGenerator - In the implementation block
@property (setter=_setCollapseTimer:,nonatomic,retain) NSTimer * _collapseTimer;                                             //@synthesize _collapseTimer=__collapseTimer - In the implementation block
@property (assign,setter=_setExpandedAnimationCounter:,nonatomic) unsigned long long _expandedAnimationCounter;              //@synthesize _expandedAnimationCounter=__expandedAnimationCounter - In the implementation block
@property (nonatomic,readonly) CEKSelectionFeedbackGenerator * _selectionFeedbackGenerator;                                  //@synthesize _selectionFeedbackGenerator=__selectionFeedbackGenerator - In the implementation block
@property (assign,nonatomic,__weak) id<CEKLightingControlDelegate> delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long lightingEffectSet;                                                                    //@synthesize lightingEffectSet=_lightingEffectSet - In the implementation block
@property (assign,nonatomic) long long selectedLightingType;                                                                 //@synthesize selectedLightingType=_selectedLightingType - In the implementation block
@property (nonatomic,readonly) long long defaultLightingType; 
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                                                //@synthesize expanded=_expanded - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                                          //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) SCD_Struct_CE8 collapsedItemFading;                                                             //@synthesize collapsedItemFading=_collapsedItemFading - In the implementation block
@property (assign,getter=isNameBadgeHidden,nonatomic) BOOL nameBadgeHidden;                                                  //@synthesize nameBadgeHidden=_nameBadgeHidden - In the implementation block
@property (assign,nonatomic) unsigned long long nameBadgeFontStyle; 
@property (assign,nonatomic) long long orientation;                                                                          //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CEKLightingControlDelegate>)delegate;
-(void)setDelegate:(id<CEKLightingControlDelegate>)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CEKLightingDialBackground *)_backgroundView;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)_setBackgroundView:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isTracking;
-(void)_handlePanGesture:(id)arg1 ;
-(BOOL)isExpanded;
-(void)_handleTapGesture:(id)arg1 ;
-(unsigned long long)_itemCount;
-(void)_handlePressGesture:(id)arg1 ;
-(UIPanGestureRecognizer *)_panGesture;
-(void)setExpanded:(BOOL)arg1 ;
-(CEKSelectionFeedbackGenerator *)_selectionFeedbackGenerator;
-(void)_setTracking:(BOOL)arg1 ;
-(unsigned long long)_selectionIndex;
-(UITapGestureRecognizer *)_tapGesture;
-(UILongPressGestureRecognizer *)_pressGesture;
-(double)contentHeightForWidth:(double)arg1 ;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CEKAnimationGenerator *)_animationGenerator;
-(void)_performFeedback;
-(void)_prepareFeedback;
-(void)badgeViewDidChangeIntrinsicContentSize:(id)arg1 ;
-(long long)defaultLightingType;
-(void)_createBackgroundViewIfNeeded;
-(void)_createSelectionViewsIfNeeded;
-(void)_createNameBadgeIfNeeded;
-(void)_loadItemsIfNeeded;
-(void)_createItemViewsIfNeeded;
-(CEKLightingNameBadge *)_nameBadge;
-(double)_dialBadgePaddingExpanded:(BOOL)arg1 ;
-(double)_selectionAngularOffset;
-(double)_rubberBandOffsetAngleForOffsetAngle:(double)arg1 ;
-(void)_layoutItemViewsRadialWithSelectionOffsetAngle:(double)arg1 ;
-(void)_updateItemViewsWithSelectionOffsetAngle:(double)arg1 ;
-(void)_updateSelectionViewsWithSelectionOffsetAngle:(double)arg1 ;
-(void)_layoutItemViewsLinear;
-(void)_layoutBackgroundExpanded:(BOOL)arg1 ;
-(void)_layoutSelectionViewsExpanded:(BOOL)arg1 ;
-(void)_layoutNameBadgeExpanded:(BOOL)arg1 ;
-(double)_safeWidthForWidth:(double)arg1 ;
-(double)_dialCenterDistanceBelowBoundsForWidth:(double)arg1 ;
-(double)_dialRadiusForWidth:(double)arg1 ;
-(CGPoint)_selectionPointForExpanded:(BOOL)arg1 ;
-(NSDictionary *)_itemViewsForType;
-(NSDictionary *)_itemShadowViewsForType;
-(NSDictionary *)_itemOutlineViewsForType;
-(CGPoint)_dialCenter;
-(double)_offsetAngleForItemAtIndex:(unsigned long long)arg1 withSelectionOffset:(double)arg2 ;
-(NSArray *)_effectTypes;
-(double)_offsetXForItemAtIndex:(unsigned long long)arg1 ;
-(double)_dialRadius;
-(double)_dialVisibleHeightExpanded:(BOOL)arg1 ;
-(UIImageView *)_selectionOverlay;
-(UIImageView *)_selectionUnderlay;
-(CGPoint)_dialCenterForWidth:(double)arg1 ;
-(double)_angularSpacingForRadialLayout;
-(double)_compressedItemOffsetForFractionalItemOffset:(double)arg1 ;
-(double)_spacingForLinearLayout;
-(double)_angleFromCenterToPoint:(CGPoint)arg1 ;
-(unsigned long long)_enabledItemCount;
-(BOOL)_isOverDialedWithSelectionAngularOffset:(double)arg1 selectionIndex:(unsigned long long)arg2 ;
-(void)_setTimeTrackingBegan:(id)arg1 ;
-(void)_setExpanded:(BOOL)arg1 animated:(BOOL)arg2 shouldNotify:(BOOL)arg3 ;
-(void)_cancelDelayedCollapse;
-(NSDate *)_timeTrackingBegan;
-(void)_collapseWithDelay:(double)arg1 ;
-(void)_snapFromSelectionOffsetAngle:(double)arg1 toAngle:(double)arg2 animated:(BOOL)arg3 ;
-(double)_rotationForPanGesture:(id)arg1 ;
-(double)_offsetAngleForRubberBandOffsetAngle:(double)arg1 selectionIndex:(unsigned long long)arg2 ;
-(void)_setSelectedLightingType:(long long)arg1 atIndex:(unsigned long long)arg2 shouldNotify:(BOOL)arg3 shouldSuppressHaptic:(BOOL)arg4 animated:(BOOL)arg5 ;
-(unsigned long long)_expandedAnimationCounter;
-(void)_rotateForTapFromSelectionIndex:(unsigned long long)arg1 offset:(double)arg2 toSelectionIndex:(unsigned long long)arg3 ;
-(void)_setSelectionAngularOffset:(double)arg1 ;
-(void)_settleSelectionViewsFromSelectionOffsetAngle:(double)arg1 ;
-(void)_setExpandedAnimationCounter:(unsigned long long)arg1 ;
-(void)_updateNameBadgeAnimated:(BOOL)arg1 ;
-(void)_handleCollapseTimer:(id)arg1 ;
-(void)_setCollapseTimer:(id)arg1 ;
-(NSTimer *)_collapseTimer;
-(void)setLightingEffectSet:(long long)arg1 animated:(BOOL)arg2 ;
-(void)set_enabledEffectTypes:(NSSet *)arg1 ;
-(long long)selectedLightingType;
-(BOOL)_isLightingTypeEnabled:(long long)arg1 ;
-(void)setSelectedLightingType:(long long)arg1 animated:(BOOL)arg2 ;
-(NSSet *)_enabledEffectTypes;
-(void)_handleSnapFromOffset:(double)arg1 withProgress:(double)arg2 timingCurve:(id)arg3 ;
-(void)_handleTapRotationFromOffset:(double)arg1 withProgress:(double)arg2 timingCurve:(id)arg3 ;
-(CEKLightingFrameCache *)_frameCache;
-(void)_updateSelectionOverlayColorAnimated:(BOOL)arg1 ;
-(void)_handleSettlingSelectionViewsFromOffset:(double)arg1 withProgress:(double)arg2 timingCurve:(id)arg3 ;
-(void)setCollapsedItemFading:(SCD_Struct_CE8)arg1 animated:(BOOL)arg2 ;
-(NSDictionary *)_effectItemsForType;
-(SCD_Struct_CE8)collapsedItemFading;
-(void)setNameBadgeHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isNameBadgeHidden;
-(void)_setEffectItemsForType:(id)arg1 ;
-(void)_setItemViewsForType:(id)arg1 ;
-(void)_setItemShadowViewsForType:(id)arg1 ;
-(void)_setItemOutlineViewsForType:(id)arg1 ;
-(void)_setSelectionOverlay:(id)arg1 ;
-(void)_setSelectionUnderlay:(id)arg1 ;
-(void)_setNameBadge:(id)arg1 ;
-(void)setLightingEffectSet:(long long)arg1 ;
-(void)setSelectedLightingType:(long long)arg1 ;
-(void)ppt_selectLightingType:(long long)arg1 ;
-(void)preloadEffectChangeAnimation;
-(void)setCollapsedItemFading:(SCD_Struct_CE8)arg1 ;
-(void)setNameBadgeHidden:(BOOL)arg1 ;
-(void)setNameBadgeFontStyle:(unsigned long long)arg1 ;
-(unsigned long long)nameBadgeFontStyle;
-(void)updateToContentSize:(id)arg1 ;
-(long long)lightingEffectSet;
@end

