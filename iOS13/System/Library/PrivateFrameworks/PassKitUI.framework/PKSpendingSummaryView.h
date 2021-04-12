/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_createSubviews;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)configureWithSummary:(id)arg1 presentationStyle:(unsigned long long)arg2 ;
-(BOOL)_needsLayoutWithSummary:(id)arg1 ;
-(UIImage *)upImage;
-(void)setUpImage:(UIImage *)arg1 ;
-(UIImage *)downImage;
-(void)setDownImage:(UIImage *)arg1 ;
@end

