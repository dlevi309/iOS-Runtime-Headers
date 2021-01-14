/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <BaseBoardUI/BSUIScrollView.h>

@interface SBAppSwitcherScrollView : BSUIScrollView {

	CGPoint _previousContentOffset;
	double _previousScrollTime;
	CGPoint _rawContentOffsetVelocity;

}
-(CGPoint)contentOffsetVelocityConsideringNextContentOffset:(CGPoint)arg1 ;
-(CGPoint)contentOffsetVelocity;
-(void)setContentOffset:(CGPoint)arg1 ;
@end

