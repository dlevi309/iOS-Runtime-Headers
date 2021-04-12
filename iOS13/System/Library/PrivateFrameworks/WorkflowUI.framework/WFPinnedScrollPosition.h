/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


#import <WorkflowUI/WorkflowUI-Structs.h>
@class WFScrollPositionPinningCollectionView, UIView;

@interface WFPinnedScrollPosition : NSObject {

	WFScrollPositionPinningCollectionView* _scrollView;
	UIView* _view;
	CGPoint _center;

}

@property (nonatomic,__weak,readonly) WFScrollPositionPinningCollectionView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) UIView * view;                                                          //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) CGPoint center;                                                         //@synthesize center=_center - In the implementation block
-(CGPoint)center;
-(UIView *)view;
-(WFScrollPositionPinningCollectionView *)scrollView;
-(id)initWithScrollView:(id)arg1 view:(id)arg2 ;
-(CGRect)adjustedBounds:(CGRect)arg1 contentSize:(CGSize)arg2 ;
@end

