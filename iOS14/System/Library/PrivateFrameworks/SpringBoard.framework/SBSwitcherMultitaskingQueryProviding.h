/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSwitcherMultitaskingQueryProviding <SBSwitcherQueryProviding>
@required
-(void)resetAdjustedScrollingState;
-(CGPoint*)adjustedOffsetForOffset:(CGPoint)arg1 translation:(CGPoint)arg2 startPoint:(CGPoint)arg3 locationInView:(CGPoint)arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6;
-(CGPoint*)restingOffsetForScrollOffset:(CGPoint)arg1 velocity:(CGPoint)arg2;
-(double)contentPageViewScaleForAppLayout:(id)arg1;
-(id)scrollViewAttributes;
-(double)snapshotScaleForAppLayout:(id)arg1;
-(CGPoint*)contentOffsetForIndex:(unsigned long long)arg1 centered:(BOOL)arg2;
-(double)minimumTranslationToKillIndex:(unsigned long long)arg1;
-(double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;

@end

