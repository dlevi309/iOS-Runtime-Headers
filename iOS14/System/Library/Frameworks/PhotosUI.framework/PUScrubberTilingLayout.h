/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUSectionedTilingLayout.h>

@protocol PUScrubberTilingLayoutDelegate;
@class NSIndexPath, NSMutableDictionary;

@interface PUScrubberTilingLayout : PUSectionedTilingLayout {

	CGSize _slitSize;
	NSIndexPath* _currentItemIndexPath;
	double _loupeWidth;
	NSIndexPath* _loupeNeighborIndexPath;
	double _loupeTransitionProgress;
	double _expandedItemWidth;
	NSMutableDictionary* _layoutInfosByIndexPathByTileKind;
	struct {
		BOOL respondsToAspectRatioForItemAtIndexPath;
		BOOL respondsToExpandedWidthForItemAtIndexPath;
		BOOL respondsToShouldShowTimeIndicatorForExpandedItemAtIndexPath;
	}  _delegateFlags;
	BOOL _onlyShowExpandedItem;
	BOOL _showPlayheadForExpandedItem;
	BOOL _snapToExpandedItem;
	id<PUScrubberTilingLayoutDelegate> _delegate;
	double _playheadVerticalOverhang;
	double _slitAspectRatio;
	double _maxAspectRatio;
	double _currentItemTransitionProgress;
	double _currentItemFocusProgress;
	NSIndexPath* _loupeIndexPath;
	NSIndexPath* _overrideLoupeIndexPath;
	double _loupeAmount;
	NSIndexPath* _expandedItemIndexPath;
	double _expandedItemPlayheadProgress;
	CGSize _interItemSpacing;
	UIEdgeInsets _contentPadding;

}

@property (assign,nonatomic,__weak) id<PUScrubberTilingLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize interItemSpacing;                                         //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (assign,nonatomic) double playheadVerticalOverhang;                                 //@synthesize playheadVerticalOverhang=_playheadVerticalOverhang - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentPadding;                                     //@synthesize contentPadding=_contentPadding - In the implementation block
@property (assign,nonatomic) double slitAspectRatio;                                          //@synthesize slitAspectRatio=_slitAspectRatio - In the implementation block
@property (assign,nonatomic) double maxAspectRatio;                                           //@synthesize maxAspectRatio=_maxAspectRatio - In the implementation block
@property (nonatomic,readonly) NSIndexPath * currentItemIndexPath; 
@property (nonatomic,readonly) double currentItemTransitionProgress;                          //@synthesize currentItemTransitionProgress=_currentItemTransitionProgress - In the implementation block
@property (nonatomic,readonly) double currentItemFocusProgress;                               //@synthesize currentItemFocusProgress=_currentItemFocusProgress - In the implementation block
@property (nonatomic,readonly) NSIndexPath * loupeIndexPath;                                  //@synthesize loupeIndexPath=_loupeIndexPath - In the implementation block
@property (nonatomic,readonly) double loupeTransitionProgress;                                //@synthesize loupeTransitionProgress=_loupeTransitionProgress - In the implementation block
@property (nonatomic,retain) NSIndexPath * overrideLoupeIndexPath;                            //@synthesize overrideLoupeIndexPath=_overrideLoupeIndexPath - In the implementation block
@property (assign,nonatomic) double loupeAmount;                                              //@synthesize loupeAmount=_loupeAmount - In the implementation block
@property (nonatomic,retain) NSIndexPath * expandedItemIndexPath;                             //@synthesize expandedItemIndexPath=_expandedItemIndexPath - In the implementation block
@property (assign,nonatomic) BOOL onlyShowExpandedItem;                                       //@synthesize onlyShowExpandedItem=_onlyShowExpandedItem - In the implementation block
@property (assign,nonatomic) BOOL showPlayheadForExpandedItem;                                //@synthesize showPlayheadForExpandedItem=_showPlayheadForExpandedItem - In the implementation block
@property (assign,nonatomic) double expandedItemWidth;                                        //@synthesize expandedItemWidth=_expandedItemWidth - In the implementation block
@property (assign,nonatomic) double expandedItemPlayheadProgress;                             //@synthesize expandedItemPlayheadProgress=_expandedItemPlayheadProgress - In the implementation block
@property (assign,nonatomic) BOOL snapToExpandedItem;                                         //@synthesize snapToExpandedItem=_snapToExpandedItem - In the implementation block
@property (nonatomic,readonly) CGPoint focusPoint; 
-(CGRect)contentBounds;
-(CGSize)interItemSpacing;
-(void)setVisibleRect:(CGRect)arg1 ;
-(void)setInterItemSpacing:(CGSize)arg1 ;
-(long long)_indexOfItemClosestToAbscissa:(double)arg1 inSection:(long long)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(double)_loupeAmountFor:(id)arg1 ;
-(CGRect)visibleRectForScrollingToItemAtIndexPath:(id)arg1 transitionProgress:(double)arg2 ;
-(CGSize)estimatedSectionSize;
-(BOOL)_shouldShowTimeIndicatorForExpandedItemAtIndexPath:(id)arg1 ;
-(void)setSlitAspectRatio:(double)arg1 ;
-(id)init;
-(id<PUScrubberTilingLayoutDelegate>)delegate;
-(void)setExpandedItemIndexPath:(NSIndexPath *)arg1 ;
-(void)setShowPlayheadForExpandedItem:(BOOL)arg1 ;
-(void)addLayoutInfosForTilesInRect:(CGRect)arg1 section:(long long)arg2 toSet:(id)arg3 ;
-(id)preferredScrollInfo;
-(BOOL)snapToExpandedItem;
-(NSIndexPath *)currentItemIndexPath;
-(UIEdgeInsets)contentPadding;
-(double)loupeAmount;
-(NSIndexPath *)overrideLoupeIndexPath;
-(NSIndexPath *)loupeIndexPath;
-(void)setDelegate:(id<PUScrubberTilingLayoutDelegate>)arg1 ;
-(double)currentItemFocusProgress;
-(double)currentItemTransitionProgress;
-(double)_normalizedTransitionProgressFrom:(id)arg1 withAbscissa:(double)arg2 outNeighborIndexPath:(out id*)arg3 ;
-(double)maxAspectRatio;
-(void)setMaxAspectRatio:(double)arg1 ;
-(id)_createLayoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2 ;
-(double)_transformedHorizontalOffsetForIndexPath:(id)arg1 ;
-(double)expandedItemWidth;
-(CGRect)visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(long long)arg2 ;
-(NSIndexPath *)expandedItemIndexPath;
-(void)setLoupeAmount:(double)arg1 ;
-(void)setContentPadding:(UIEdgeInsets)arg1 ;
-(id)indexPathOfItemClosestToPoint:(CGPoint)arg1 ;
-(double)expandedItemPlayheadProgress;
-(CGSize)_transformedSizeForIndexPath:(id)arg1 ;
-(CGPoint)focusPoint;
-(id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2 ;
-(float)_aspectRatioForIndexPath:(id)arg1 ;
-(double)playheadVerticalOverhang;
-(void)setPlayheadVerticalOverhang:(double)arg1 ;
-(BOOL)showPlayheadForExpandedItem;
-(double)loupeTransitionProgress;
-(void)setOnlyShowExpandedItem:(BOOL)arg1 ;
-(BOOL)onlyShowExpandedItem;
-(void)setExpandedItemPlayheadProgress:(double)arg1 ;
-(void)setSnapToExpandedItem:(BOOL)arg1 ;
-(double)_focusAbscissa;
-(void)setOverrideLoupeIndexPath:(NSIndexPath *)arg1 ;
-(CGSize)sizeForSection:(long long)arg1 numberOfItems:(long long)arg2 ;
-(void)setExpandedItemWidth:(double)arg1 ;
-(id)_indexPathOfItemClosestToAbscissa:(double)arg1 ;
-(double)slitAspectRatio;
-(CGRect)_rectForItemAtIndexPath:(id)arg1 withLoupeTransform:(BOOL)arg2 withExpanded:(BOOL)arg3 ;
-(CGSize)_slitSize;
@end

