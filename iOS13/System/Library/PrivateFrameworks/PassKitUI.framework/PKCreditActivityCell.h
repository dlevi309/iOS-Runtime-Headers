/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UILabel, NSString, PKDashboardCreditAccountItem, PKSpendingSummaryChartView, UIFont;

@interface PKCreditActivityCell : PKDashboardCollectionViewCell {

	UILabel* _labelTitle;
	NSString* _title;
	BOOL _isCompactUI;
	BOOL _useAccssibilityLayout;
	PKDashboardCreditAccountItem* _item;
	PKSpendingSummaryChartView* _chartView;
	UIFont* _titleFont;

}

@property (nonatomic,retain) PKDashboardCreditAccountItem * item;                   //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) PKSpendingSummaryChartView * chartView;              //@synthesize chartView=_chartView - In the implementation block
@property (assign,nonatomic) BOOL useAccssibilityLayout;                            //@synthesize useAccssibilityLayout=_useAccssibilityLayout - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                    //@synthesize titleFont=_titleFont - In the implementation block
-(PKDashboardCreditAccountItem *)item;
-(void)setItem:(PKDashboardCreditAccountItem *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)_createSubviews;
-(PKSpendingSummaryChartView *)chartView;
-(BOOL)useAccssibilityLayout;
-(void)setUseAccssibilityLayout:(BOOL)arg1 ;
@end

