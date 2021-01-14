/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)dividerView;
-(void)layoutSubviews;
-(UISegmentedControl *)segmentControl;
-(id)initWithFrame:(CGRect)arg1 backgroundColor:(id)arg2 dividerColor:(id)arg3 rightControl:(id)arg4 ;
-(UIControl *)rightControl;
@end

