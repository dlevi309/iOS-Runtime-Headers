/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UISheetLayoutInfoDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray, UIViewController, UIView, UITraitCollection, NSMutableArray;

@interface _UISheetLayoutInfo : NSObject {

	SCD_Struct_UI51 _clean;
	SCD_Struct_UI34 _computing;
	BOOL __bottomAttached;
	BOOL __forcedFullScreen;
	BOOL __functionallyFullScreen;
	BOOL __stacksWithChild;
	BOOL __anyDescendantDragging;
	BOOL __interactionEnabled;
	BOOL __shouldPresentedViewControllerControlStatusBarAppearance;
	BOOL __shouldDimmingIgnoreTouches;
	BOOL __wantsFullScreen;
	BOOL __wantsBottomAttached;
	BOOL __wantsBottomAttachedInCompactHeight;
	BOOL __widthFollowsPreferredContentSizeWhenBottomAttached;
	BOOL __presented;
	BOOL __shouldScaleDownBehindDescendants;
	BOOL __reduceMotionEnabled;
	BOOL __hosting;
	BOOL __dismissible;
	BOOL __shouldDismissWhenTappedOutside;
	BOOL __allowsInteractiveDismissWhenFullScreen;
	BOOL __prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
	BOOL __dragging;
	BOOL __wantsGrabber;
	BOOL __draggingAndDismissing;
	double __systemMinimumTopInset;
	double __minimumTopInset;
	double __maximumWidth;
	double __percentFullHeight;
	double __proposedDepthLevel;
	double __depthLevel;
	double __percentFullScreen;
	double __dismissOffset;
	long long __indexOfCurrentActiveDetent;
	long long __indexOfActiveDimmingDetent;
	double __maximumNonDismissDetentOffset;
	double __rubberBandExtentBeyondMinimumOffset;
	double __rubberBandExtentBeyondMaximumOffset;
	double __currentOffset;
	double __percentPresented;
	double __percentDimmedFromOffset;
	double __percentDimmed;
	double __confinedPercentDimmed;
	double __shadowOpacity;
	double __alpha;
	double __grabberAlpha;
	double __magicShadowOpacity;
	NSArray* __dimmedPassthroughViews;
	UIViewController* __presentingViewController;
	UIViewController* __presentedViewController;
	UIView* __containerView;
	UITraitCollection* __containerTraitCollection;
	double __additionalMinimumTopInset;
	long long __mode;
	long long __indexOfCurrentDetent;
	long long __indexOfLastUndimmedDetent;
	NSArray* __passthroughViews;
	double __latestUserChosenOffset;
	double __tearOffset;
	double __grabberTopSpacing;
	double __dismissCornerRadius;
	double __preferredCornerRadius;
	_UISheetLayoutInfo* __parentLayoutInfo;
	_UISheetLayoutInfo* __childLayoutInfo;
	double __confinedPercentLightened;
	id<_UISheetLayoutInfoDelegate> __delegate;
	NSArray* __reversedDetents;
	NSMutableArray* __mutableActiveDetentValues;
	NSMutableArray* __mutableActiveReversedDetentIndexes;
	CGSize __preferredSize;
	CGRect __effectiveKeyboardFrame;
	CGRect __floatingUntransformedFrame;
	CGRect __bottomAttachedUntransformedFrame;
	CGRect __stackAlignmentFrame;
	CGRect __fullHeightUntransformedFrame;
	CGRect __fullHeightUntransformedFrameForDepthLevel;
	CGRect __untransformedFrame;
	CGRect __hostedUntransformedFrame;
	UIEdgeInsets __touchInsets;
	UIRectCornerRadii __cornerRadii;
	CGRect __containerBounds;
	UIEdgeInsets __containerSafeAreaInsets;
	CGRect __sourceFrame;
	CGRect __keyboardFrame;
	CGRect __dismissSourceFrame;
	CGAffineTransform __transform;

}

@property (setter=_setReversedDetents:,nonatomic,retain) NSArray * _reversedDetents;                                                                                         //@synthesize _reversedDetents=__reversedDetents - In the implementation block
@property (nonatomic,readonly) long long _reversedIndexOfLastUndimmedDetent; 
@property (nonatomic,readonly) double _systemMinimumTopInset;                                                                                                                //@synthesize _systemMinimumTopInset=__systemMinimumTopInset - In the implementation block
@property (nonatomic,readonly) double _minimumTopInset;                                                                                                                      //@synthesize _minimumTopInset=__minimumTopInset - In the implementation block
@property (nonatomic,readonly) double _maximumWidth;                                                                                                                         //@synthesize _maximumWidth=__maximumWidth - In the implementation block
@property (nonatomic,readonly) CGSize _preferredSize;                                                                                                                        //@synthesize _preferredSize=__preferredSize - In the implementation block
@property (nonatomic,readonly) double _percentFullHeight;                                                                                                                    //@synthesize _percentFullHeight=__percentFullHeight - In the implementation block
@property (nonatomic,readonly) double _proposedDepthLevel;                                                                                                                   //@synthesize _proposedDepthLevel=__proposedDepthLevel - In the implementation block
@property (nonatomic,readonly) double _depthLevel;                                                                                                                           //@synthesize _depthLevel=__depthLevel - In the implementation block
@property (nonatomic,readonly) BOOL _scalesDownBehindDescendants; 
@property (getter=_isBottomAttached,nonatomic,readonly) BOOL _bottomAttached;                                                                                                //@synthesize _bottomAttached=__bottomAttached - In the implementation block
@property (getter=_isForcedFullScreen,nonatomic,readonly) BOOL _forcedFullScreen;                                                                                            //@synthesize _forcedFullScreen=__forcedFullScreen - In the implementation block
@property (getter=_isFunctionallyFullScreen,nonatomic,readonly) BOOL _functionallyFullScreen;                                                                                //@synthesize _functionallyFullScreen=__functionallyFullScreen - In the implementation block
@property (nonatomic,readonly) CGRect _effectiveKeyboardFrame;                                                                                                               //@synthesize _effectiveKeyboardFrame=__effectiveKeyboardFrame - In the implementation block
@property (nonatomic,readonly) CGRect _floatingUntransformedFrame;                                                                                                           //@synthesize _floatingUntransformedFrame=__floatingUntransformedFrame - In the implementation block
@property (nonatomic,readonly) CGRect _bottomAttachedUntransformedFrame;                                                                                                     //@synthesize _bottomAttachedUntransformedFrame=__bottomAttachedUntransformedFrame - In the implementation block
@property (nonatomic,readonly) CGRect _stackAlignmentFrame;                                                                                                                  //@synthesize _stackAlignmentFrame=__stackAlignmentFrame - In the implementation block
@property (nonatomic,readonly) BOOL _stacksWithChild;                                                                                                                        //@synthesize _stacksWithChild=__stacksWithChild - In the implementation block
@property (nonatomic,readonly) CGRect _fullHeightUntransformedFrame;                                                                                                         //@synthesize _fullHeightUntransformedFrame=__fullHeightUntransformedFrame - In the implementation block
@property (nonatomic,readonly) CGRect _fullHeightUntransformedFrameForDepthLevel;                                                                                            //@synthesize _fullHeightUntransformedFrameForDepthLevel=__fullHeightUntransformedFrameForDepthLevel - In the implementation block
@property (nonatomic,readonly) double _dismissOffset;                                                                                                                        //@synthesize _dismissOffset=__dismissOffset - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _mutableActiveDetentValues;                                                                                                  //@synthesize _mutableActiveDetentValues=__mutableActiveDetentValues - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _mutableActiveReversedDetentIndexes;                                                                                         //@synthesize _mutableActiveReversedDetentIndexes=__mutableActiveReversedDetentIndexes - In the implementation block
@property (nonatomic,readonly) long long _indexOfActiveDimmingDetent;                                                                                                        //@synthesize _indexOfActiveDimmingDetent=__indexOfActiveDimmingDetent - In the implementation block
@property (nonatomic,readonly) double _currentOffset;                                                                                                                        //@synthesize _currentOffset=__currentOffset - In the implementation block
@property (nonatomic,readonly) double _percentPresented;                                                                                                                     //@synthesize _percentPresented=__percentPresented - In the implementation block
@property (nonatomic,readonly) CGRect _untransformedFrame;                                                                                                                   //@synthesize _untransformedFrame=__untransformedFrame - In the implementation block
@property (nonatomic,readonly) double _percentDimmedFromOffset;                                                                                                              //@synthesize _percentDimmedFromOffset=__percentDimmedFromOffset - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * _presentingViewController;                                                                                            //@synthesize _presentingViewController=__presentingViewController - In the implementation block
@property (nonatomic,retain) UIViewController * _presentedViewController;                                                                                                    //@synthesize _presentedViewController=__presentedViewController - In the implementation block
@property (nonatomic,retain) UIView * _containerView;                                                                                                                        //@synthesize _containerView=__containerView - In the implementation block
@property (assign,setter=_setContainerBounds:,nonatomic) CGRect _containerBounds;                                                                                            //@synthesize _containerBounds=__containerBounds - In the implementation block
@property (assign,setter=_setContainerSafeAreaInsets:,nonatomic) UIEdgeInsets _containerSafeAreaInsets;                                                                      //@synthesize _containerSafeAreaInsets=__containerSafeAreaInsets - In the implementation block
@property (setter=_setContainerTraitCollection:,nonatomic,retain) UITraitCollection * _containerTraitCollection;                                                             //@synthesize _containerTraitCollection=__containerTraitCollection - In the implementation block
@property (assign,setter=_setAdditionalMinimumTopInset:,nonatomic) double _additionalMinimumTopInset;                                                                        //@synthesize _additionalMinimumTopInset=__additionalMinimumTopInset - In the implementation block
@property (assign,setter=_setMode:,nonatomic) long long _mode;                                                                                                               //@synthesize _mode=__mode - In the implementation block
@property (assign,setter=_setSourceFrame:,nonatomic) CGRect _sourceFrame;                                                                                                    //@synthesize _sourceFrame=__sourceFrame - In the implementation block
@property (assign,setter=_setKeyboardFrame:,nonatomic) CGRect _keyboardFrame;                                                                                                //@synthesize _keyboardFrame=__keyboardFrame - In the implementation block
@property (assign,setter=_setWantsFullScreen:,nonatomic) BOOL _wantsFullScreen;                                                                                              //@synthesize _wantsFullScreen=__wantsFullScreen - In the implementation block
@property (assign,setter=_setWantsBottomAttached:,nonatomic) BOOL _wantsBottomAttached;                                                                                      //@synthesize _wantsBottomAttached=__wantsBottomAttached - In the implementation block
@property (assign,setter=_setWantsBottomAttachedInCompactHeight:,nonatomic) BOOL _wantsBottomAttachedInCompactHeight;                                                        //@synthesize _wantsBottomAttachedInCompactHeight=__wantsBottomAttachedInCompactHeight - In the implementation block
@property (assign,setter=_setWidthFollowsPreferredContentSizeWhenBottomAttached:,nonatomic) BOOL _widthFollowsPreferredContentSizeWhenBottomAttached;                        //@synthesize _widthFollowsPreferredContentSizeWhenBottomAttached=__widthFollowsPreferredContentSizeWhenBottomAttached - In the implementation block
@property (assign,setter=_setPresented:,getter=_isPresented,nonatomic) BOOL _presented;                                                                                      //@synthesize _presented=__presented - In the implementation block
@property (assign,setter=_setShouldScaleDownBehindDescendants:,nonatomic) BOOL _shouldScaleDownBehindDescendants;                                                            //@synthesize _shouldScaleDownBehindDescendants=__shouldScaleDownBehindDescendants - In the implementation block
@property (assign,setter=_setReduceMotionEnabled:,getter=_isReduceMotionEnabled,nonatomic) BOOL _reduceMotionEnabled;                                                        //@synthesize _reduceMotionEnabled=__reduceMotionEnabled - In the implementation block
@property (assign,setter=_setHosting:,getter=_isHosting,nonatomic) BOOL _hosting;                                                                                            //@synthesize _hosting=__hosting - In the implementation block
@property (assign,setter=_setDismissible:,getter=_isDismissible,nonatomic) BOOL _dismissible;                                                                                //@synthesize _dismissible=__dismissible - In the implementation block
@property (setter=_setDetents:,nonatomic,retain) NSArray * _detents; 
@property (assign,setter=_setIndexOfCurrentDetent:,nonatomic) long long _indexOfCurrentDetent;                                                                               //@synthesize _indexOfCurrentDetent=__indexOfCurrentDetent - In the implementation block
@property (assign,setter=_setIndexOfLastUndimmedDetent:,nonatomic) long long _indexOfLastUndimmedDetent;                                                                     //@synthesize _indexOfLastUndimmedDetent=__indexOfLastUndimmedDetent - In the implementation block
@property (assign,setter=_setReversedIndexOfCurrentDetent:,nonatomic) long long _reversedIndexOfCurrentDetent; 
@property (assign,setter=_setShouldDismissWhenTappedOutside:,nonatomic) BOOL _shouldDismissWhenTappedOutside;                                                                //@synthesize _shouldDismissWhenTappedOutside=__shouldDismissWhenTappedOutside - In the implementation block
@property (assign,setter=_setAllowsInteractiveDismissWhenFullScreen:,nonatomic) BOOL _allowsInteractiveDismissWhenFullScreen;                                                //@synthesize _allowsInteractiveDismissWhenFullScreen=__allowsInteractiveDismissWhenFullScreen - In the implementation block
@property (assign,setter=_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:,nonatomic) BOOL _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;              //@synthesize _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge=__prefersScrollingExpandsToLargerDetentWhenScrolledToEdge - In the implementation block
@property (setter=_setPassthroughViews:,nonatomic,retain) NSArray * _passthroughViews;                                                                                       //@synthesize _passthroughViews=__passthroughViews - In the implementation block
@property (assign,setter=_setLatestUserChosenOffset:,nonatomic) double _latestUserChosenOffset;                                                                              //@synthesize _latestUserChosenOffset=__latestUserChosenOffset - In the implementation block
@property (assign,setter=_setTearOffset:,nonatomic) double _tearOffset;                                                                                                      //@synthesize _tearOffset=__tearOffset - In the implementation block
@property (assign,setter=_setDragging:,getter=_isDragging,nonatomic) BOOL _dragging;                                                                                         //@synthesize _dragging=__dragging - In the implementation block
@property (assign,setter=_setWantsGrabber:,nonatomic) BOOL _wantsGrabber;                                                                                                    //@synthesize _wantsGrabber=__wantsGrabber - In the implementation block
@property (assign,setter=_setGrabberTopSpacing:,nonatomic) double _grabberTopSpacing;                                                                                        //@synthesize _grabberTopSpacing=__grabberTopSpacing - In the implementation block
@property (assign,setter=_setDraggingAndDismissing:,getter=_isDraggingAndDismissing,nonatomic) BOOL _draggingAndDismissing;                                                  //@synthesize _draggingAndDismissing=__draggingAndDismissing - In the implementation block
@property (assign,setter=_setDismissSourceFrame:,nonatomic) CGRect _dismissSourceFrame;                                                                                      //@synthesize _dismissSourceFrame=__dismissSourceFrame - In the implementation block
@property (assign,setter=_setDismissCornerRadius:,nonatomic) double _dismissCornerRadius;                                                                                    //@synthesize _dismissCornerRadius=__dismissCornerRadius - In the implementation block
@property (assign,setter=_setPreferredCornerRadius:,nonatomic) double _preferredCornerRadius;                                                                                //@synthesize _preferredCornerRadius=__preferredCornerRadius - In the implementation block
@property (assign,setter=_setParentSheetLayoutInfo:,nonatomic,__weak) _UISheetLayoutInfo * _parentLayoutInfo;                                                                //@synthesize _parentLayoutInfo=__parentLayoutInfo - In the implementation block
@property (setter=_setChildSheetLayoutInfo:,nonatomic,retain) _UISheetLayoutInfo * _childLayoutInfo;                                                                         //@synthesize _childLayoutInfo=__childLayoutInfo - In the implementation block
@property (nonatomic,readonly) double _percentFullScreen;                                                                                                                    //@synthesize _percentFullScreen=__percentFullScreen - In the implementation block
@property (getter=_isAnyDescendantDragging,nonatomic,readonly) BOOL _anyDescendantDragging;                                                                                  //@synthesize _anyDescendantDragging=__anyDescendantDragging - In the implementation block
@property (nonatomic,readonly) NSArray * _activeDetentValues; 
@property (nonatomic,readonly) NSArray * _activeReversedDetentIndexes; 
@property (nonatomic,readonly) long long _indexOfCurrentActiveDetent;                                                                                                        //@synthesize _indexOfCurrentActiveDetent=__indexOfCurrentActiveDetent - In the implementation block
@property (nonatomic,readonly) double _maximumNonDismissDetentOffset;                                                                                                        //@synthesize _maximumNonDismissDetentOffset=__maximumNonDismissDetentOffset - In the implementation block
@property (nonatomic,readonly) double _rubberBandExtentBeyondMinimumOffset;                                                                                                  //@synthesize _rubberBandExtentBeyondMinimumOffset=__rubberBandExtentBeyondMinimumOffset - In the implementation block
@property (nonatomic,readonly) double _rubberBandExtentBeyondMaximumOffset;                                                                                                  //@synthesize _rubberBandExtentBeyondMaximumOffset=__rubberBandExtentBeyondMaximumOffset - In the implementation block
@property (nonatomic,readonly) CGRect _hostedUntransformedFrame;                                                                                                             //@synthesize _hostedUntransformedFrame=__hostedUntransformedFrame - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets _touchInsets;                                                                                                                    //@synthesize _touchInsets=__touchInsets - In the implementation block
@property (nonatomic,readonly) UIRectCornerRadii _cornerRadii;                                                                                                               //@synthesize _cornerRadii=__cornerRadii - In the implementation block
@property (nonatomic,readonly) CGAffineTransform _transform;                                                                                                                 //@synthesize _transform=__transform - In the implementation block
@property (nonatomic,readonly) double _percentDimmed;                                                                                                                        //@synthesize _percentDimmed=__percentDimmed - In the implementation block
@property (nonatomic,readonly) double _confinedPercentDimmed;                                                                                                                //@synthesize _confinedPercentDimmed=__confinedPercentDimmed - In the implementation block
@property (nonatomic,readonly) double _confinedPercentLightened;                                                                                                             //@synthesize _confinedPercentLightened=__confinedPercentLightened - In the implementation block
@property (nonatomic,readonly) double _shadowOpacity;                                                                                                                        //@synthesize _shadowOpacity=__shadowOpacity - In the implementation block
@property (nonatomic,readonly) double _magicShadowOpacity;                                                                                                                   //@synthesize _magicShadowOpacity=__magicShadowOpacity - In the implementation block
@property (nonatomic,readonly) double _alpha;                                                                                                                                //@synthesize _alpha=__alpha - In the implementation block
@property (nonatomic,readonly) double _grabberAlpha;                                                                                                                         //@synthesize _grabberAlpha=__grabberAlpha - In the implementation block
@property (getter=_isInteractionEnabled,nonatomic,readonly) BOOL _interactionEnabled;                                                                                        //@synthesize _interactionEnabled=__interactionEnabled - In the implementation block
@property (nonatomic,readonly) BOOL _shouldPresentedViewControllerControlStatusBarAppearance;                                                                                //@synthesize _shouldPresentedViewControllerControlStatusBarAppearance=__shouldPresentedViewControllerControlStatusBarAppearance - In the implementation block
@property (nonatomic,readonly) BOOL _shouldDimmingIgnoreTouches;                                                                                                             //@synthesize _shouldDimmingIgnoreTouches=__shouldDimmingIgnoreTouches - In the implementation block
@property (nonatomic,readonly) NSArray * _dimmedPassthroughViews;                                                                                                            //@synthesize _dimmedPassthroughViews=__dimmedPassthroughViews - In the implementation block
@property (assign,nonatomic,__weak) id<_UISheetLayoutInfoDelegate> _delegate;                                                                                                //@synthesize _delegate=__delegate - In the implementation block
-(BOOL)_wantsBottomAttached;
-(BOOL)_isHosting;
-(void)_setPassthroughViews:(id)arg1 ;
-(NSArray *)_detents;
-(void)_setAllowsInteractiveDismissWhenFullScreen:(BOOL)arg1 ;
-(double)_additionalMinimumTopInset;
-(BOOL)_wantsGrabber;
-(NSArray *)_passthroughViews;
-(void)_setPreferredCornerRadius:(double)arg1 ;
-(CGAffineTransform)_transform;
-(id<_UISheetLayoutInfoDelegate>)_delegate;
-(void)_layout;
-(_UISheetLayoutInfo *)_childLayoutInfo;
-(long long)_mode;
-(BOOL)_wantsFullScreen;
-(void)_setWidthFollowsPreferredContentSizeWhenBottomAttached:(BOOL)arg1 ;
-(long long)_reversedIndexOfLastUndimmedDetent;
-(void)_setDetents:(id)arg1 ;
-(long long)_indexOfCurrentDetent;
-(BOOL)_widthFollowsPreferredContentSizeWhenBottomAttached;
-(BOOL)_shouldDimmingIgnoreTouches;
-(BOOL)_prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
-(void)_setWantsFullScreen:(BOOL)arg1 ;
-(void)_setIndexOfCurrentDetent:(long long)arg1 ;
-(void)_setIndexOfLastUndimmedDetent:(long long)arg1 ;
-(long long)_indexOfLastUndimmedDetent;
-(void)_setWantsBottomAttachedInCompactHeight:(BOOL)arg1 ;
-(void)_setMode:(long long)arg1 ;
-(void)_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:(BOOL)arg1 ;
-(BOOL)_wantsBottomAttachedInCompactHeight;
-(CGRect)_sourceFrame;
-(CGRect)_fullHeightUntransformedFrameForDepthLevel;
-(double)_grabberTopSpacing;
-(id)init;
-(double)_percentDimmed;
-(void)_setDragging:(BOOL)arg1 ;
-(UITraitCollection *)_containerTraitCollection;
-(double)_dismissOffset;
-(double)_alpha;
-(void)_invalidatePreferredSize;
-(UIEdgeInsets)_containerSafeAreaInsets;
-(id)_descendantDescription;
-(void)set_presentingViewController:(UIViewController *)arg1 ;
-(void)_setContainerBounds:(CGRect)arg1 ;
-(void)_setReduceMotionEnabled:(BOOL)arg1 ;
-(double)_magicShadowOpacity;
-(void)_setGrabberTopSpacing:(double)arg1 ;
-(void)_setDraggingAndDismissing:(BOOL)arg1 ;
-(BOOL)_isDismissible;
-(NSArray *)_activeReversedDetentIndexes;
-(void)_setChildSheetLayoutInfo:(id)arg1 ;
-(BOOL)_shouldDismissWhenTappedOutside;
-(BOOL)_stacksWithChild;
-(NSMutableArray *)_mutableActiveReversedDetentIndexes;
-(CGRect)_bottomAttachedUntransformedFrame;
-(double)_currentOffset;
-(double)_minimumTopInset;
-(CGRect)_hostedUntransformedFrame;
-(void)_setWantsGrabber:(BOOL)arg1 ;
-(void)_setContainerTraitCollection:(id)arg1 ;
-(void)_setParentSheetLayoutInfo:(id)arg1 ;
-(void)_setShouldDismissWhenTappedOutside:(BOOL)arg1 ;
-(UIViewController *)_presentingViewController;
-(UIView *)_containerView;
-(UIViewController *)_presentedViewController;
-(double)_rubberBandExtentBeyondMinimumOffset;
-(void)_setSourceFrame:(CGRect)arg1 ;
-(double)_tearOffset;
-(UIRectCornerRadii)_cornerRadii;
-(BOOL)_isInteractionEnabled;
-(double)_dismissCornerRadius;
-(BOOL)_isAnyDescendantDragging;
-(CGRect)_containerBounds;
-(id)description;
-(void)_setReversedDetents:(id)arg1 ;
-(BOOL)_isPresented;
-(BOOL)_isDraggingAndDismissing;
-(BOOL)_scalesDownBehindDescendants;
-(CGRect)_effectiveKeyboardFrame;
-(double)_systemMinimumTopInset;
-(NSArray *)_dimmedPassthroughViews;
-(void)_setWantsBottomAttached:(BOOL)arg1 ;
-(BOOL)_isForcedFullScreen;
-(void)set_delegate:(id<_UISheetLayoutInfoDelegate>)arg1 ;
-(double)_shadowOpacity;
-(void)_setHosting:(BOOL)arg1 ;
-(void)_setShouldScaleDownBehindDescendants:(BOOL)arg1 ;
-(void)_setAdditionalMinimumTopInset:(double)arg1 ;
-(BOOL)_isFunctionallyFullScreen;
-(void)_setPresented:(BOOL)arg1 ;
-(double)_grabberAlpha;
-(NSMutableArray *)_mutableActiveDetentValues;
-(double)_rubberBandExtentBeyondMaximumOffset;
-(NSArray *)_reversedDetents;
-(CGRect)_fullHeightUntransformedFrame;
-(double)_percentFullHeight;
-(double)_percentPresented;
-(double)_proposedDepthLevel;
-(void)_setTearOffset:(double)arg1 ;
-(double)_maximumWidth;
-(void)_setContainerSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)_setDismissCornerRadius:(double)arg1 ;
-(_UISheetLayoutInfo *)_parentLayoutInfo;
-(CGRect)_stackAlignmentFrame;
-(double)_confinedPercentDimmed;
-(CGRect)_keyboardFrame;
-(UIEdgeInsets)_touchInsets;
-(double)_confinedPercentLightened;
-(long long)_reversedIndexOfCurrentDetent;
-(double)_percentDimmedFromOffset;
-(CGRect)_floatingUntransformedFrame;
-(double)_percentFullScreen;
-(void)_setDismissible:(BOOL)arg1 ;
-(double)_latestUserChosenOffset;
-(NSArray *)_activeDetentValues;
-(void)_setLatestUserChosenOffset:(double)arg1 ;
-(CGSize)_preferredSize;
-(void)_setReversedIndexOfCurrentDetent:(long long)arg1 ;
-(CGRect)_dismissSourceFrame;
-(double)_maximumNonDismissDetentOffset;
-(double)_depthLevel;
-(void)set_presentedViewController:(UIViewController *)arg1 ;
-(BOOL)_shouldScaleDownBehindDescendants;
-(double)_preferredCornerRadius;
-(BOOL)_isDragging;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(void)_setDismissSourceFrame:(CGRect)arg1 ;
-(long long)_indexOfCurrentActiveDetent;
-(CGRect)_untransformedFrame;
-(long long)_indexOfActiveDimmingDetent;
-(BOOL)_allowsInteractiveDismissWhenFullScreen;
-(BOOL)_isReduceMotionEnabled;
-(void)_setKeyboardFrame:(CGRect)arg1 ;
-(BOOL)_isBottomAttached;
-(void)set_containerView:(UIView *)arg1 ;
@end

