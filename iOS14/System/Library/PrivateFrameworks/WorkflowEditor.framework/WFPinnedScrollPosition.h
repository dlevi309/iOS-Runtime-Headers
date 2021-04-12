/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class WFScrollPositionPinningCollectionView, UIView;

@interface WFPinnedScrollPosition : NSObject {

	WFScrollPositionPinningCollectionView* _scrollView;
	UIView* _view;
	CGPoint _center;

}

@property (nonatomic,__weak,readonly) WFScrollPositionPinningCollectionView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) UIView * view;                                                          //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) CGPoint center;                                                         //@synthesize center=_center - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGPoint)center;
-(UIView *)view;
-(WFScrollPositionPinningCollectionView *)scrollView;
-(void)dealloc;
-(id)initWithScrollView:(id)arg1 view:(id)arg2 ;
-(CGRect)adjustedBounds:(CGRect)arg1 contentSize:(CGSize)arg2 ;
@end

