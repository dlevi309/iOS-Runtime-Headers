/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _HKBodyMarginsLayout : UIView {

	UIView* _leftMarginView;
	UIView* _bodyView;
	UIView* _rightMarginView;

}

@property (nonatomic,retain) UIView * leftMarginView;               //@synthesize leftMarginView=_leftMarginView - In the implementation block
@property (nonatomic,retain) UIView * bodyView;                     //@synthesize bodyView=_bodyView - In the implementation block
@property (nonatomic,retain) UIView * rightMarginView;              //@synthesize rightMarginView=_rightMarginView - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)init;
-(UIView *)bodyView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBodyView:(UIView *)arg1 ;
-(void)_invalidateLayout;
-(void)setLeftMarginView:(UIView *)arg1 ;
-(void)setRightMarginView:(UIView *)arg1 ;
-(UIView *)leftMarginView;
-(UIView *)rightMarginView;
-(double)_totalViewWidth;
-(double)_maximumViewHeight;
@end

