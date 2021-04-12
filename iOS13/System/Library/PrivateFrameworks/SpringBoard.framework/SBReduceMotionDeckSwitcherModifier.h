/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBDeckSwitcherModifier.h>

@protocol SBFluidSwitcherScrollProvidingDelegate;
@interface SBReduceMotionDeckSwitcherModifier : SBDeckSwitcherModifier {

	id<SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;

}
-(id)scrollDelegate;
-(void)setScrollDelegate:(id)arg1 ;
-(CGPoint)pagingOrigin;
-(double)_cardWidth;
-(double)wallpaperScale;
-(double)titleAndIconOpacityForIndex:(unsigned long long)arg1 ;
-(double)homeScreenScale;
-(BOOL)scrollViewPagingEnabled;
-(CGSize)interpageSpacingForPaging;
-(double)homeScreenAlpha;
-(void)resetAdjustedScrollingState;
-(CGPoint)adjustedOffsetForOffset:(CGPoint)arg1 translation:(CGPoint)arg2 startPoint:(CGPoint)arg3 locationInView:(CGPoint)arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6 ;
-(double)scrollProgressForIndex:(unsigned long long)arg1 ;
-(double)scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 frameOrigin:(double)arg3 ;
-(double)titleOpacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2 ;
-(double)opacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2 ;
-(double)depthForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3 ;
-(double)leadingOffsetForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3 ;
@end

