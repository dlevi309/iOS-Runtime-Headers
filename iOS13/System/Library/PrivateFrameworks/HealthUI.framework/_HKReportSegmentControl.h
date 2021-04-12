/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UISegmentedControl, UIView, UIControl;

@interface _HKReportSegmentControl : UIView {

	UISegmentedControl* _segmentControl;
	UIView* _dividerView;
	UIControl* _rightControl;

}

@property (nonatomic,readonly) UISegmentedControl * segmentControl;              //@synthesize segmentControl=_segmentControl - In the implementation block
@property (nonatomic,readonly) UIView * dividerView;                             //@synthesize dividerView=_dividerView - In the implementation block
@property (nonatomic,readonly) UIControl * rightControl;                         //@synthesize rightControl=_rightControl - In the implementation block
-(BOOL)isOpaque;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(UISegmentedControl *)segmentControl;
-(UIView *)dividerView;
-(id)initWithFrame:(CGRect)arg1 backgroundColor:(id)arg2 dividerColor:(id)arg3 rightControl:(id)arg4 ;
-(UIControl *)rightControl;
@end

