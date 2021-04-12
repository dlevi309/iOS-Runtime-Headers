/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBFailureNotifyingTapGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBAppPlatterDragSourceViewProviding.h>

@protocol SBFluidSwitcherItemContainerDelegate;
@class SBAppSwitcherPageView, SBFluidSwitcherTouchPassThroughScrollView, SBFluidSwitcherItemContainerHeaderView, SBFluidSwitcherIconOverlayView, UILongPressGestureRecognizer, SBFailureNotifyingTapGestureRecognizer, UITapGestureRecognizer, SBFFluidBehaviorSettings, SBAppSwitcherSettings, NSString, NSArray, UIView;

@interface SBFluidSwitcherItemContainer : SBFTouchPassThroughView <UIScrollViewDelegate, UIGestureRecognizerDelegate, SBFailureNotifyingTapGestureRecognizerDelegate, SBAppPlatterDragSourceViewProviding> {

	SBAppSwitcherPageView* _pageView;
	id<SBFluidSwitcherItemContainerDelegate> _delegate;
	SBFluidSwitcherTouchPassThroughScrollView* _killScrollView;
	SBFluidSwitcherItemContainerHeaderView* _iconAndLabelHeader;
	SBFluidSwitcherIconOverlayView* _iconOverlayView;
	UIRectCornerRadii _contentCornerRadii;
	double _contentPageViewScale;
	double _titleOpacity;
	double _titleAndIconOpacity;
	UILongPressGestureRecognizer* _pressDownGestureRecognizer;
	UILongPressGestureRecognizer* _selectionHighlightGestureRecognizer;
	SBFailureNotifyingTapGestureRecognizer* _tapGestureRecognizer;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	SBFFluidBehaviorSettings* _squishSettings;
	SBAppSwitcherSettings* _settings;
	BOOL _sentKillRequest;
	CGPoint _highlightTapDownLocation;
	BOOL _highlighted;
	BOOL _animatingPageViewScale;
	double _killProgressForCurrentDecelerationTarget;
	BOOL _dragging;
	BOOL _clipsToUnobscuredMargin;
	BOOL _killable;
	BOOL _shouldScaleOverlayToFillBounds;
	BOOL _active;
	BOOL _visible;
	double _unobscuredMargin;
	unsigned long long _killAxis;
	double _minimumTranslationForKillingContainer;
	double _contentAlpha;
	NSString* _additionalDescriptionDebugText;
	NSArray* _headerItems;

}

@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic,__weak) id<SBFluidSwitcherItemContainerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView*<SBAppSwitcherPageContentView> contentView; 
@property (assign,nonatomic) UIRectCornerRadii contentCornerRadii;                                  //@synthesize contentCornerRadii=_contentCornerRadii - In the implementation block
@property (assign,nonatomic) double contentPageViewScale;                                           //@synthesize contentPageViewScale=_contentPageViewScale - In the implementation block
@property (assign,nonatomic) double titleAndIconOpacity;                                            //@synthesize titleAndIconOpacity=_titleAndIconOpacity - In the implementation block
@property (assign,nonatomic) double titleOpacity;                                                   //@synthesize titleOpacity=_titleOpacity - In the implementation block
@property (assign,nonatomic) double unobscuredMargin;                                               //@synthesize unobscuredMargin=_unobscuredMargin - In the implementation block
@property (assign,nonatomic) BOOL clipsToUnobscuredMargin;                                          //@synthesize clipsToUnobscuredMargin=_clipsToUnobscuredMargin - In the implementation block
@property (assign,nonatomic) double darkeningAlpha; 
@property (assign,nonatomic) double wallpaperOverlayAlpha; 
@property (assign,nonatomic) double lighteningAlpha; 
@property (assign,nonatomic) unsigned long long killAxis;                                           //@synthesize killAxis=_killAxis - In the implementation block
@property (assign,getter=isKillable,nonatomic) BOOL killable;                                       //@synthesize killable=_killable - In the implementation block
@property (assign,nonatomic) double minimumTranslationForKillingContainer;                          //@synthesize minimumTranslationForKillingContainer=_minimumTranslationForKillingContainer - In the implementation block
@property (assign,nonatomic) BOOL shouldScaleOverlayToFillBounds;                                   //@synthesize shouldScaleOverlayToFillBounds=_shouldScaleOverlayToFillBounds - In the implementation block
@property (assign,nonatomic) BOOL blocksContentViewTouches; 
@property (nonatomic,retain) UIView * contentOverlay; 
@property (assign,nonatomic) double contentAlpha;                                                   //@synthesize contentAlpha=_contentAlpha - In the implementation block
@property (nonatomic,readonly) double killingProgress; 
@property (nonatomic,readonly) BOOL isDeceleratingTowardsKillZone; 
@property (assign,nonatomic) double shadowAlpha; 
@property (assign,nonatomic) double shadowOffset; 
@property (assign,nonatomic) long long shadowStyle; 
@property (assign,getter=isActive,nonatomic) BOOL active;                                           //@synthesize active=_active - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                         //@synthesize visible=_visible - In the implementation block
@property (nonatomic,copy) NSString * additionalDescriptionDebugText;                               //@synthesize additionalDescriptionDebugText=_additionalDescriptionDebugText - In the implementation block
@property (nonatomic,copy) NSArray * headerItems;                                                   //@synthesize headerItems=_headerItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDragging,nonatomic) BOOL dragging;                                       //@synthesize dragging=_dragging - In the implementation block
+(double)preferredRestingVisibleMarginForBounds:(CGRect)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id<SBFluidSwitcherItemContainerDelegate>)delegate;
-(void)setDelegate:(id<SBFluidSwitcherItemContainerDelegate>)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)prepareForReuse;
-(double)shadowOffset;
-(void)setShadowOffset:(double)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(UIView*<SBAppSwitcherPageContentView>)contentView;
-(void)setContentView:(UIView*<SBAppSwitcherPageContentView>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(BOOL)isDragging;
-(id)sourceView;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setShadowAlpha:(double)arg1 ;
-(double)shadowAlpha;
-(void)setContentAlpha:(double)arg1 ;
-(void)setDragging:(BOOL)arg1 ;
-(BOOL)_scrollViewShouldPanGestureTryToBegin:(id)arg1 ;
-(double)titleOpacity;
-(void)setTitleOpacity:(double)arg1 ;
-(double)contentAlpha;
-(NSArray *)headerItems;
-(void)setHeaderItems:(NSArray *)arg1 ;
-(CGRect)_frameForScrollView;
-(void)setShadowStyle:(long long)arg1 ;
-(void)setDarkeningAlpha:(double)arg1 ;
-(void)setWallpaperOverlayAlpha:(double)arg1 ;
-(void)setLighteningAlpha:(double)arg1 ;
-(long long)shadowStyle;
-(BOOL)shouldScaleOverlayToFillBounds;
-(void)setShouldScaleOverlayToFillBounds:(BOOL)arg1 ;
-(double)darkeningAlpha;
-(double)wallpaperOverlayAlpha;
-(double)lighteningAlpha;
-(double)_killingDarkeningAlpha;
-(CGSize)_overlayViewSize;
-(void)setContentOverlay:(id)arg1 animated:(BOOL)arg2 ;
-(void)setContentCornerRadii:(UIRectCornerRadii)arg1 ;
-(void)setMinimumTranslationForKillingContainer:(double)arg1 ;
-(void)setContentPageViewScale:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 active:(BOOL)arg3 ;
-(void)setAdditionalDescriptionDebugText:(NSString *)arg1 ;
-(double)titleAndIconOpacity;
-(void)setHeaderItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setBlocksContentViewTouches:(BOOL)arg1 ;
-(void)setTitleAndIconOpacity:(double)arg1 ;
-(void)setKillAxis:(unsigned long long)arg1 ;
-(void)setKillable:(BOOL)arg1 ;
-(void)setClipsToUnobscuredMargin:(BOOL)arg1 ;
-(void)setUnobscuredMargin:(double)arg1 ;
-(double)killingProgress;
-(BOOL)isDeceleratingTowardsKillZone;
-(UIView *)contentOverlay;
-(void)configureOverlayForIconZoomWithView:(id)arg1 ;
-(void)removeIconOverlay;
-(id)_createScrollView;
-(void)_addPageView;
-(void)_handleSelectionHighlightGesture:(id)arg1 ;
-(void)_handlePageViewPressDown:(id)arg1 ;
-(void)_handlePageViewTap:(id)arg1 ;
-(void)setContentOverlay:(UIView *)arg1 ;
-(void)_resetKillProgressScrollState;
-(void)_updateShadowVisibility;
-(void)_updateHeaderAnimated:(BOOL)arg1 ;
-(void)_updatePageViewContentClippingFrame;
-(void)_updatePageViewContentViewClipping;
-(CGRect)_frameForPageView;
-(double)_killingProgressForContentOffset:(CGPoint)arg1 ;
-(double)contentPageViewScale;
-(double)_CGPointXOrYBasedOnKillAxis:(CGPoint)arg1 ;
-(CGPoint)_contentOffsetAtRest;
-(double)_CGSizeWidthOrHeightBasedOnKillAxis:(CGSize)arg1 ;
-(CGPoint)_CGPointFromScalarBasedOnKillAxis:(double)arg1 ;
-(CGSize)_contentSizeForScrollView;
-(CGPoint)_contentOffsetForKillingProgress:(double)arg1 ;
-(double)_inverseScaleTransformFactor;
-(double)_scaleTransformFactor;
-(void)_ensureSubviewOrder;
-(CGSize)_CGSizeFromLengthBasedOnKillAxis:(double)arg1 ;
-(CGAffineTransform)_squishedPageViewScaleTransform;
-(void)gestureRecognizerTransitionedToFailed:(id)arg1 ;
-(id)initialCornerRadiusConfiguration;
-(SBDragPreviewShadowParameters)initialDiffuseShadowParameters;
-(SBDragPreviewShadowParameters)initialRimShadowParameters;
-(id)initialDiffuseShadowFilters;
-(id)initialRimShadowFilters;
-(id)containerViewForBlurContentView;
-(BOOL)blocksContentViewTouches;
-(BOOL)_isTitleIconVisible;
-(void)_setKillingDarkeningAlpha:(double)arg1 ;
-(id)_springLoadingEffectTargetView;
-(UIRectCornerRadii)contentCornerRadii;
-(double)unobscuredMargin;
-(BOOL)clipsToUnobscuredMargin;
-(unsigned long long)killAxis;
-(BOOL)isKillable;
-(double)minimumTranslationForKillingContainer;
-(NSString *)additionalDescriptionDebugText;
@end

