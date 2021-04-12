/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, PKSpendingSummaryChartView, UIImage, PKSpendingSummary;

@interface PKSpendingSummaryView : UIView {

	UILabel* _totalAmount;
	UILabel* _spendingLabel;
	UIImageView* _upOrDownImage;
	UILabel* _percentageLabel;
	PKSpendingSummaryChartView* _chartView;
	PKSpendingSummaryChartView* _chartViewToFadeOut;
	BOOL _isTemplateLayout;
	UIImage* _downImage;
	UIImage* _upImage;
	PKSpendingSummary* _summary;
	BOOL _visible;

}

@property (nonatomic,retain) UIImage * upImage;                          //@synthesize upImage=_upImage - In the implementation block
@property (nonatomic,retain) UIImage * downImage;                        //@synthesize downImage=_downImage - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;              //@synthesize visible=_visible - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)upImage;
-(void)configureWithSummary:(id)arg1 presentationStyle:(unsigned long long)arg2 ;
-(BOOL)_needsLayoutWithSummary:(id)arg1 ;
-(void)setUpImage:(UIImage *)arg1 ;
-(UIImage *)downImage;
-(void)setDownImage:(UIImage *)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isVisible;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)_createSubviews;
@end

