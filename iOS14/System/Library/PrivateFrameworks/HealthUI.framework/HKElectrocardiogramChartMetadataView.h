/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HKElectrocardiogramChartView, HKElectrocardiogramInfoView, UIScrollView, HKElectrocardiogramAxisView;

@interface HKElectrocardiogramChartMetadataView : UIView {

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
-(void)setScrollView:(UIScrollView *)arg1 ;
-(HKElectrocardiogramChartView *)chartView;
-(CGSize)gridSize;
-(HKElectrocardiogramInfoView *)infoView;
-(void)_setUpUI;
-(HKElectrocardiogramAxisView *)axisView;
-(UIScrollView *)scrollView;
-(void)setInfoView:(HKElectrocardiogramInfoView *)arg1 ;
-(id)initWithGridSize:(CGSize)arg1 ;
-(void)_setUpScrollViewContent;
-(void)_updateMargins;
-(void)setChartView:(HKElectrocardiogramChartView *)arg1 ;
-(void)setAxisView:(HKElectrocardiogramAxisView *)arg1 ;
@end

