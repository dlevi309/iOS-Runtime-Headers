/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HKCalendarMonthTitleFormatting.h>

@class UIView, UILabel;

@interface _HKMonthTitleView : UIView <HKCalendarMonthTitleFormatting> {

	UIView* _dividerLine;
	BOOL _highlighted;
	UILabel* _monthTitle;
	double _topPadding;
	double _bottomPadding;
	double _dividerOriginX;
	double _dividerWidth;

}

@property (nonatomic,retain) UILabel * monthTitle;                               //@synthesize monthTitle=_monthTitle - In the implementation block
@property (assign,nonatomic) double topPadding;                                  //@synthesize topPadding=_topPadding - In the implementation block
@property (assign,nonatomic) double bottomPadding;                               //@synthesize bottomPadding=_bottomPadding - In the implementation block
@property (assign,nonatomic) double dividerOriginX;                              //@synthesize dividerOriginX=_dividerOriginX - In the implementation block
@property (assign,nonatomic) double dividerWidth;                                //@synthesize dividerWidth=_dividerWidth - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
-(void)setDate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(double)bottomPadding;
-(double)topPadding;
-(void)_updateFont;
-(void)setDividerWidth:(double)arg1 ;
-(double)dividerWidth;
-(void)setTopPadding:(double)arg1 ;
-(void)setBottomPadding:(double)arg1 ;
-(double)dividerOriginX;
-(id)_monthStringFromDate:(id)arg1 ;
-(UILabel *)monthTitle;
-(void)setMonthTitle:(UILabel *)arg1 ;
-(void)setDividerOriginX:(double)arg1 ;
@end

