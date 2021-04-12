/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBFluidSwitcherScrollProviding.h>

@protocol SBFluidSwitcherScrollProvidingDelegate, SBGridLayoutSwitcherModifierDelegate;
@class NSString;

@interface SBGridLayoutSwitcherModifier : SBSwitcherModifier <PTSettingsKeyObserver, SBFluidSwitcherScrollProviding> {

	BOOL _usesFixedCardSize;
	id<SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
	double _unroundedCardScale;
	id<SBGridLayoutSwitcherModifierDelegate> _gridDelegate;
	unsigned long long _scrollAxis;
	unsigned long long _fixedGroupingSize;
	NSString* _softFilteredBundleIdentifier;
	unsigned long long _alignment;
	unsigned long long _layoutDirection;
	CGSize _fixedCardSize;

}

@property (assign,nonatomic) unsigned long long alignment;                                                  //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) unsigned long long layoutDirection;                                            //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (assign,nonatomic,__weak) id<SBGridLayoutSwitcherModifierDelegate> gridDelegate;                  //@synthesize gridDelegate=_gridDelegate - In the implementation block
@property (nonatomic,readonly) double effectiveHorizontalSpacing; 
@property (assign,nonatomic) unsigned long long scrollAxis;                                                 //@synthesize scrollAxis=_scrollAxis - In the implementation block
@property (assign,nonatomic) unsigned long long fixedGroupingSize;                                          //@synthesize fixedGroupingSize=_fixedGroupingSize - In the implementation block
@property (assign,nonatomic) double cardScale;                                                              //@synthesize unroundedCardScale=_unroundedCardScale - In the implementation block
@property (assign,getter=isUsingFixedCardSize,nonatomic) BOOL usesFixedCardSize;                            //@synthesize usesFixedCardSize=_usesFixedCardSize - In the implementation block
@property (assign,nonatomic) CGSize fixedCardSize;                                                          //@synthesize fixedCardSize=_fixedCardSize - In the implementation block
@property (nonatomic,copy) NSString * softFilteredBundleIdentifier;                                         //@synthesize softFilteredBundleIdentifier=_softFilteredBundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBFluidSwitcherScrollProvidingDelegate> scrollDelegate;              //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
-(unsigned long long)alignment;
-(void)setAlignment:(unsigned long long)arg1 ;
-(CGSize)contentSize;
-(unsigned long long)numberOfRows;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(unsigned long long)layoutDirection;
-(void)setLayoutDirection:(unsigned long long)arg1 ;
-(id<SBFluidSwitcherScrollProvidingDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id<SBFluidSwitcherScrollProvidingDelegate>)arg1 ;
-(double)decelerationRate;
-(unsigned long long)_numberOfRows;
-(CGPoint)pagingOrigin;
-(unsigned long long)_numberOfColumns;
-(unsigned long long)scrollAxis;
-(void)setScrollAxis:(unsigned long long)arg1 ;
-(double)_verticalSpacing;
-(CGSize)_cardSize;
-(double)contentViewScale;
-(double)switcherCardScale;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1 ;
-(double)titleAndIconOpacityForIndex:(unsigned long long)arg1 ;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(void)didMoveToParentModifier:(id)arg1 ;
-(double)cardScale;
-(void)setCardScale:(double)arg1 ;
-(CGSize)fixedCardSize;
-(void)setFixedCardSize:(CGSize)arg1 ;
-(double)snapshotScale;
-(CGSize)fittedContentSize;
-(long long)layoutUpdateMode;
-(CGPoint)contentOffsetForIndex:(unsigned long long)arg1 centered:(BOOL)arg2 ;
-(BOOL)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1 ;
-(double)minimumTranslationToKillIndex:(unsigned long long)arg1 ;
-(BOOL)scrollViewPagingEnabled;
-(CGSize)interpageSpacingForPaging;
-(double)shadowOffsetForIndex:(unsigned long long)arg1 ;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1 ;
-(CGPoint)restingOffsetForScrollOffset:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)resetAdjustedScrollingState;
-(CGPoint)adjustedOffsetForOffset:(CGPoint)arg1 translation:(CGPoint)arg2 startPoint:(CGPoint)arg3 locationInView:(CGPoint)arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6 ;
-(BOOL)cardsNeedBackgroundWallpaperTreatment;
-(void)_applyPrototypeSettings;
-(id)handleSwitcherSettingsChangedEvent:(id)arg1 ;
-(id)initWithScrollAxis:(unsigned long long)arg1 fixedGroupingSize:(unsigned long long)arg2 cardScale:(double)arg3 alignment:(unsigned long long)arg4 layoutDirection:(unsigned long long)arg5 ;
-(void)setUsesFixedCardSize:(BOOL)arg1 ;
-(double)effectiveHorizontalSpacing;
-(BOOL)interpolatesDuringSwipeToKill;
-(double)centerYOffsetWhenPresented;
-(double)cardCornerRadiusInSwitcher;
-(BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
-(unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1 ;
-(void)setGridDelegate:(id<SBGridLayoutSwitcherModifierDelegate>)arg1 ;
-(void)setSoftFilteredBundleIdentifier:(NSString *)arg1 ;
-(void)setFixedGroupingSize:(unsigned long long)arg1 ;
-(double)_gridSwitcherPageScale;
-(CGRect)_frameForIndex:(unsigned long long)arg1 ignoringScrollOffset:(BOOL)arg2 ;
-(CGRect)_frameWithScaleAppliedForIndex:(unsigned long long)arg1 ignoringScrollOffset:(BOOL)arg2 ;
-(id)_softFilteredAppLayouts;
-(double)_horizontalSpacing;
-(double)_trailingPadding;
-(double)_leadingPadding;
-(CGSize)_scaledCardSize;
-(unsigned long long)_rowForIndex:(unsigned long long)arg1 ;
-(unsigned long long)_columnForIndex:(unsigned long long)arg1 ;
-(double)_cardHeaderHeight;
-(id<SBGridLayoutSwitcherModifierDelegate>)gridDelegate;
-(BOOL)isUsingFixedCardSize;
-(unsigned long long)fixedGroupingSize;
-(NSString *)softFilteredBundleIdentifier;
@end

