/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class HKElectrocardiogramChartView, HKElectrocardiogramInfoView, UIScrollView, HKElectrocardiogramAxisView;

@interface HKElectrocardiogramChartTableViewCell : UITableViewCell {

	HKElectrocardiogramChartView* _chartView;
	HKElectrocardiogramInfoView* _infoView;
	UIScrollView* _scrollView;
	HKElectrocardiogramAxisView* _axisView;

}

@property (nonatomic,retain) UIScrollView * scrollView;                             //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) HKElectrocardiogramChartView * chartView;              //@synthesize chartView=_chartView - In the implementation block
@property (nonatomic,retain) HKElectrocardiogramAxisView * axisView;                //@synthesize axisView=_axisView - In the implementation block
@property (nonatomic,retain) HKElectrocardiogramInfoView * infoView;                //@synthesize infoView=_infoView - In the implementation block
@property (nonatomic,readonly) CGSize gridSize; 
-(void)layoutMarginsDidChange;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(CGSize)gridSize;
-(HKElectrocardiogramChartView *)chartView;
-(void)setChartView:(HKElectrocardiogramChartView *)arg1 ;
-(HKElectrocardiogramInfoView *)infoView;
-(void)setInfoView:(HKElectrocardiogramInfoView *)arg1 ;
-(void)_setUpUI;
-(void)_setUpScrollViewContent;
-(void)_updateMargins;
-(HKElectrocardiogramAxisView *)axisView;
-(void)setAxisView:(HKElectrocardiogramAxisView *)arg1 ;
-(id)initWithGridSize:(CGSize)arg1 reuseIdentifier:(id)arg2 ;
@end

