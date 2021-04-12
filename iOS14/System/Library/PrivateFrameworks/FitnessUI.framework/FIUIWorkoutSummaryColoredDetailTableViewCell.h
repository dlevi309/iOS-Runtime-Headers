/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIFont, UIView, NSString, UIColor, UIButton;

@interface FIUIWorkoutSummaryColoredDetailTableViewCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _detailLabel;
	UILabel* _secondTitleLabel;
	UILabel* _secondDetailLabel;
	UILabel* _noDataLabel;
	UIFont* _detailFont;
	UIFont* _suffixFont;
	UIView* _dividerView;
	NSString* _detailString;
	NSString* _suffixString;
	UIColor* _textColor;
	BOOL _shouldForceLTRForDetailString;
	BOOL _showBackgroundButton;
	UIButton* _customAccessoryButton;
	UIView* _optionalButtonView;

}

@property (nonatomic,retain) UIView * optionalButtonView;                   //@synthesize optionalButtonView=_optionalButtonView - In the implementation block
@property (assign,nonatomic) BOOL showBackgroundButton;                     //@synthesize showBackgroundButton=_showBackgroundButton - In the implementation block
@property (nonatomic,retain) UIButton * customAccessoryButton;              //@synthesize customAccessoryButton=_customAccessoryButton - In the implementation block
+(double)rowHeightWithNoDataString:(id)arg1 ;
+(double)rowHeightWithSecondMetric;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setTitleString:(id)arg1 ;
-(void)_setupUI;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setDefaultValueFontSizes;
-(void)_resizeFontsIfNeededToFitWidth:(double)arg1 ;
-(void)setShowBackgroundButton:(BOOL)arg1 ;
-(void)setCustomAccessoryButton:(UIButton *)arg1 ;
-(void)setLineHidden:(BOOL)arg1 ;
-(void)setDetailString:(id)arg1 suffixString:(id)arg2 textColor:(id)arg3 shouldForceLTRForDetailString:(BOOL)arg4 ;
-(void)setSecondMetricTitle:(id)arg1 detailString:(id)arg2 detailColor:(id)arg3 ;
-(void)setNoDataString:(id)arg1 textColor:(id)arg2 ;
-(BOOL)showBackgroundButton;
-(UIButton *)customAccessoryButton;
-(UIView *)optionalButtonView;
-(void)setOptionalButtonView:(UIView *)arg1 ;
@end
