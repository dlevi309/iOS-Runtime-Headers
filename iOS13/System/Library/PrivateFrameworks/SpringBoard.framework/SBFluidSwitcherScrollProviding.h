/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBFluidSwitcherScrollProviding <NSObject>
@property (assign,nonatomic,__weak) id<SBFluidSwitcherScrollProvidingDelegate> scrollDelegate; 
@required
-(CGSize*)contentSize;
-(id<SBFluidSwitcherScrollProvidingDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id)arg1;
-(double)decelerationRate;
-(CGPoint*)pagingOrigin;
-(unsigned long long)scrollAxis;
-(double)switcherCardScale;
-(double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;
-(double)snapshotScale;
-(CGSize*)fittedContentSize;
-(CGPoint*)contentOffsetForIndex:(unsigned long long)arg1 centered:(BOOL)arg2;
-(double)minimumTranslationToKillIndex:(unsigned long long)arg1;
-(BOOL)scrollViewPagingEnabled;
-(CGSize*)interpageSpacingForPaging;
-(CGPoint*)restingOffsetForScrollOffset:(CGPoint)arg1 velocity:(CGPoint)arg2;
-(void)resetAdjustedScrollingState;
-(CGPoint*)adjustedOffsetForOffset:(CGPoint)arg1 translation:(CGPoint)arg2 startPoint:(CGPoint)arg3 locationInView:(CGPoint)arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6;
-(BOOL)cardsNeedBackgroundWallpaperTreatment;
-(BOOL)interpolatesDuringSwipeToKill;
-(double)centerYOffsetWhenPresented;
-(double)cardCornerRadiusInSwitcher;

@end

