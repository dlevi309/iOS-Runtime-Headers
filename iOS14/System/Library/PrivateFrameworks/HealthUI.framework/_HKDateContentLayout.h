/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _HKDateContentLayout : UIView {

	UIView* _contentView;
	UIView* _dateView;

}

@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * dateView;                 //@synthesize dateView=_dateView - In the implementation block
-(UIView *)dateView;
-(void)setDateView:(UIView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(long long)_viewCount;
-(UIView *)contentView;
-(void)_invalidateLayout;
-(double)_maximumViewWidth;
-(double)_totalViewHeight;
@end

