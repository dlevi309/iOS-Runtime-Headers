/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>

@class SBSwitcherModifier, SBAppLayout, NSString;

@interface SBAppExposeGridSwitcherModifier : SBSwitcherModifier {

	CGPoint _previousContentOffset;
	BOOL _isScrollingForward;
	SBSwitcherModifier* _gridModifier;
	unsigned long long _numberOfHiddenAppLayouts;
	BOOL _isShowingReopenClosedWindowsButton;
	SBAppLayout* _activeAppLayoutInSwitcher;
	BOOL _hasForegroundFullScreenApp;
	BOOL _reversesFloatingCardDirection;
	BOOL _disableFullScreenCardScaleRounding;
	NSString* _bundleIdentifier;
	CGSize _fullScreenCardSize;
	CGSize _floatingCardSize;

}

@property (assign,nonatomic) BOOL disableFullScreenCardScaleRounding;              //@synthesize disableFullScreenCardScaleRounding=_disableFullScreenCardScaleRounding - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) CGSize fullScreenCardSize;                          //@synthesize fullScreenCardSize=_fullScreenCardSize - In the implementation block
@property (nonatomic,readonly) CGSize floatingCardSize;                            //@synthesize floatingCardSize=_floatingCardSize - In the implementation block
@property (assign,nonatomic) BOOL reversesFloatingCardDirection;                   //@synthesize reversesFloatingCardDirection=_reversesFloatingCardDirection - In the implementation block
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)visibleAppLayouts;
-(id)appLayoutsToCacheSnapshots;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(BOOL)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1 ;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(double)titleAndIconOpacityForIndex:(unsigned long long)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(BOOL)_isIndexVisible:(unsigned long long)arg1 ;
-(double)plusButtonAlpha;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(long long)plusButtonStyle;
-(void)resetAdjustedScrollingState;
-(id)handleScrollEvent:(id)arg1 ;
-(double)contentViewScale;
-(CGPoint)adjustedOffsetForOffset:(CGPoint)arg1 translation:(CGPoint)arg2 startPoint:(CGPoint)arg3 locationInView:(CGPoint)arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6 ;
-(double)_horizontalSpacing;
-(double)reopenClosedWindowsButtonScale;
-(CGPoint)restingOffsetForScrollOffset:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(double)_cardCornerRadiusInSwitcher;
-(double)contentPageViewScaleForAppLayout:(id)arg1 ;
-(BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
-(double)shadowOffsetForIndex:(unsigned long long)arg1 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(CGRect)fullyPresentedFrameForAppLayout:(id)arg1 ;
-(unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1 ;
-(id)scrollViewAttributes;
-(double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1 ;
-(id)appLayoutToScrollToBeforeReopeningClosedWindows;
-(void)didMoveToParentModifier:(id)arg1 ;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(CGSize)_contentSize;
-(NSRange)_visibleAppLayoutRangeForContentOffset:(CGPoint)arg1 ;
-(id)handleTimerEvent:(id)arg1 ;
-(long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(id)handleRemovalEvent:(id)arg1 ;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)snapshotScaleForAppLayout:(id)arg1 ;
-(unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1 ;
-(CGPoint)contentOffsetForIndex:(unsigned long long)arg1 centered:(BOOL)arg2 ;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)_verticalSpacing;
-(id)_updateReopenClosedWindowsButtonPresence;
-(double)minimumTranslationToKillIndex:(unsigned long long)arg1 ;
-(double)reopenClosedWindowsButtonAlpha;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 fullScreenCardSize:(CGSize)arg2 floatingCardSize:(CGSize)arg3 ;
-(id)responseForProposedChildResponse:(id)arg1 childModifier:(id)arg2 event:(id)arg3 ;
-(id)handleInsertionEvent:(id)arg1 ;
-(BOOL)reversesFloatingCardDirection;
-(BOOL)_canShowReopenClosedWindowsButton;
-(CGRect)_frameForIndex:(unsigned long long)arg1 applyScrollViewContentOffset:(BOOL)arg2 ;
-(BOOL)_isIndexFullScreen:(unsigned long long)arg1 ;
-(double)_fullScreenCardScale;
-(double)_floatingCardScale;
-(BOOL)_isDoubleStackingFullScreenCards;
-(unsigned long long)_numberOfFloatingAppLayouts;
-(unsigned long long)_indexOfFirstMainAppLayoutFromAppLayouts:(id)arg1 ;
-(unsigned long long)_indexOfLeadingCard;
-(CGSize)_fittedContentSize;
-(CGSize)_fittedFullScreenContentSize;
-(CGSize)_fittedFloatingContentSize;
-(unsigned long long)_numberOfFullScreenAppLayouts;
-(unsigned long long)_numberOfFullScreenColumns;
-(unsigned long long)_numberOfFloatingColumns;
-(CGSize)_scaledCardSizeForIndex:(unsigned long long)arg1 ;
-(unsigned long long)_numberOfOffScreenTrailingFloatingCardsForContentOffset:(CGPoint)arg1 ;
-(unsigned long long)_numberOfOffScreenTrailingFullScreenCardsForContentOffset:(CGPoint)arg1 ;
-(NSRange)_visibleAppLayoutRangeForContentOffset:(CGPoint)arg1 lastVisibleIndex:(unsigned long long)arg2 ;
-(BOOL)disableFullScreenCardScaleRounding;
-(unsigned long long)_subtreeIndexForIndex:(unsigned long long)arg1 indexOfFirstMainAppLayout:(unsigned long long)arg2 ;
-(CGRect)_unpaddedCoplanarFrameForIndex:(unsigned long long)arg1 doubleStack:(BOOL)arg2 count:(unsigned long long)arg3 cardSize:(CGSize)arg4 scale:(double)arg5 contentWidth:(double)arg6 ;
-(double)_cardHeaderHeight;
-(unsigned long long)_numberOfFullScreenRows;
-(CGSize)fullScreenCardSize;
-(CGSize)floatingCardSize;
-(void)setReversesFloatingCardDirection:(BOOL)arg1 ;
-(void)setDisableFullScreenCardScaleRounding:(BOOL)arg1 ;
@end

