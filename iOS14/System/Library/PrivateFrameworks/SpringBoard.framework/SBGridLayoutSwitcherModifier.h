/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@class NSString;

@interface SBGridLayoutSwitcherModifier : SBSwitcherModifier <PTSettingsKeyObserver> {

	CGPoint _previousContentOffset;
	BOOL _isScrollingForward;
	BOOL _usesFixedCardSize;
	double _unroundedCardScale;
	unsigned long long _scrollAxis;
	unsigned long long _fixedGroupingSize;
	unsigned long long _alignment;
	unsigned long long _layoutDirection;
	CGSize _fixedCardSize;

}

@property (assign,nonatomic) unsigned long long alignment;                                    //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) unsigned long long layoutDirection;                              //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (assign,nonatomic) unsigned long long scrollAxis;                                   //@synthesize scrollAxis=_scrollAxis - In the implementation block
@property (assign,nonatomic) unsigned long long fixedGroupingSize;                            //@synthesize fixedGroupingSize=_fixedGroupingSize - In the implementation block
@property (assign,nonatomic) double cardScale;                                                //@synthesize unroundedCardScale=_unroundedCardScale - In the implementation block
@property (assign,getter=isUsingFixedCardSize,nonatomic) BOOL usesFixedCardSize;              //@synthesize usesFixedCardSize=_usesFixedCardSize - In the implementation block
@property (assign,nonatomic) CGSize fixedCardSize;                                            //@synthesize fixedCardSize=_fixedCardSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)visibleAppLayouts;
-(id)appLayoutsToCacheSnapshots;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(BOOL)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1 ;
-(double)titleAndIconOpacityForIndex:(unsigned long long)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(BOOL)_isIndexVisible:(unsigned long long)arg1 ;
-(void)resetAdjustedScrollingState;
-(id)handleScrollEvent:(id)arg1 ;
-(void)setScrollAxis:(unsigned long long)arg1 ;
-(double)contentViewScale;
-(CGPoint)adjustedOffsetForOffset:(CGPoint)arg1 translation:(CGPoint)arg2 startPoint:(CGPoint)arg3 locationInView:(CGPoint)arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6 ;
-(double)_horizontalSpacing;
-(unsigned long long)alignment;
-(CGPoint)restingOffsetForScrollOffset:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(double)rotationAngleForIndex:(unsigned long long)arg1 ;
-(double)_cardCornerRadiusInSwitcher;
-(double)contentPageViewScaleForAppLayout:(id)arg1 ;
-(BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
-(unsigned long long)numberOfRows;
-(double)shadowOffsetForIndex:(unsigned long long)arg1 ;
-(unsigned long long)scrollAxis;
-(CGRect)fullyPresentedFrameForAppLayout:(id)arg1 ;
-(unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1 ;
-(id)scrollViewAttributes;
-(double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1 ;
-(void)setAlignment:(unsigned long long)arg1 ;
-(void)didMoveToParentModifier:(id)arg1 ;
-(unsigned long long)_numberOfRows;
-(unsigned long long)_numberOfColumns;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(CGSize)_contentSize;
-(NSRange)_visibleAppLayoutRangeForContentOffset:(CGPoint)arg1 ;
-(id)handleSwitcherSettingsChangedEvent:(id)arg1 ;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(void)_applyPrototypeSettings;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(void)setLayoutDirection:(unsigned long long)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)snapshotScaleForAppLayout:(id)arg1 ;
-(unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1 ;
-(CGPoint)contentOffsetForIndex:(unsigned long long)arg1 centered:(BOOL)arg2 ;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(double)_verticalSpacing;
-(unsigned long long)layoutDirection;
-(double)minimumTranslationToKillIndex:(unsigned long long)arg1 ;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1 ;
-(double)cardScale;
-(void)setCardScale:(double)arg1 ;
-(CGSize)fixedCardSize;
-(void)setFixedCardSize:(CGSize)arg1 ;
-(void)_handleTransitionEvent:(id)arg1 ;
-(id)handleInlineTransitionEvent:(id)arg1 ;
-(id)initWithScrollAxis:(unsigned long long)arg1 fixedGroupingSize:(unsigned long long)arg2 cardScale:(double)arg3 alignment:(unsigned long long)arg4 layoutDirection:(unsigned long long)arg5 ;
-(void)setUsesFixedCardSize:(BOOL)arg1 ;
-(unsigned long long)_indexOfLeadingCard;
-(CGSize)_fittedContentSize;
-(double)_cardHeaderHeight;
-(double)_gridSwitcherPageScale;
-(CGRect)_frameForIndex:(unsigned long long)arg1 ignoringScrollOffset:(BOOL)arg2 ;
-(CGRect)_frameWithScaleAppliedForIndex:(unsigned long long)arg1 ignoringScrollOffset:(BOOL)arg2 ;
-(double)_trailingPadding;
-(double)_leadingPadding;
-(CGSize)_scaledCardSize;
-(unsigned long long)_firstTrailingIndexForContentOffset:(CGPoint)arg1 ;
-(unsigned long long)_rowForIndex:(unsigned long long)arg1 ;
-(unsigned long long)_columnForIndex:(unsigned long long)arg1 ;
-(CGSize)_cardSize;
-(BOOL)isUsingFixedCardSize;
-(unsigned long long)fixedGroupingSize;
-(void)setFixedGroupingSize:(unsigned long long)arg1 ;
@end

