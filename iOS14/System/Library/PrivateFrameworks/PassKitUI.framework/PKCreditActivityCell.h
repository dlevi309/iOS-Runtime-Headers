/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTitleFont:(UIFont *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(PKDashboardCreditAccountItem *)item;
-(void)setTitle:(NSString *)arg1 ;
-(UIFont *)titleFont;
-(void)setItem:(PKDashboardCreditAccountItem *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)useAccssibilityLayout;
-(void)setUseAccssibilityLayout:(BOOL)arg1 ;
-(PKSpendingSummaryChartView *)chartView;
-(NSString *)title;
-(void)_createSubviews;
@end

