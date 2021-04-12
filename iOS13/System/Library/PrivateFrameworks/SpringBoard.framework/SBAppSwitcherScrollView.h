/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <BaseBoardUI/BSUIScrollView.h>

@interface SBAppSwitcherScrollView : BSUIScrollView {

	CGPoint _previousContentOffset;
	double _previousScrollTime;
	CGPoint _rawContentOffsetVelocity;

}
-(void)setContentOffset:(CGPoint)arg1 ;
-(CGPoint)contentOffsetVelocityConsideringNextContentOffset:(CGPoint)arg1 ;
-(CGPoint)contentOffsetVelocity;
@end

