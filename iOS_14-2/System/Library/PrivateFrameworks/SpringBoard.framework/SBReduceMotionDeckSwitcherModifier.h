/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBDeckSwitcherModifier.h>

@interface SBReduceMotionDeckSwitcherModifier : SBDeckSwitcherModifier
-(double)titleAndIconOpacityForIndex:(unsigned long long)arg1 ;
-(void)resetAdjustedScrollingState;
-(unsigned long long)indexForScrollProgress:(double)arg1 displayItemsCount:(unsigned long long)arg2 frameOrigin:(double)arg3 ;
-(CGPoint)adjustedOffsetForOffset:(CGPoint)arg1 translation:(CGPoint)arg2 startPoint:(CGPoint)arg3 locationInView:(CGPoint)arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6 ;
-(double)leadingOffsetForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3 ;
-(double)titleOpacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2 ;
-(double)_cardWidth;
-(double)_switcherCardScale;
-(double)wallpaperScale;
-(CGSize)_interpageSpacingForPaging;
-(id)scrollViewAttributes;
-(double)depthForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3 ;
-(double)scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 frameOrigin:(double)arg3 ;
-(double)scrollProgressForIndex:(unsigned long long)arg1 ;
-(CGPoint)_pagingOrigin;
-(double)homeScreenScale;
-(double)homeScreenAlpha;
-(double)opacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2 ;
@end

