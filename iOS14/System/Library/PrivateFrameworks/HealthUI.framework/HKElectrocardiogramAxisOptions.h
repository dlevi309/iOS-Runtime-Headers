/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class UIFont, UIColor;

@interface HKElectrocardiogramAxisOptions : NSObject {

	BOOL _scaleMetricsAutomatically;
	UIFont* _axisLabelFont;
	UIColor* _lineColor;
	UIColor* _axisLabelTextColor;
	double _lineWidth;
	double _axisLineToLabelSpacing;
	double _topBaselineMargin;
	double _bottomBaselineMargin;

}

@property (nonatomic,readonly) UIFont * axisLabelFont;                      //@synthesize axisLabelFont=_axisLabelFont - In the implementation block
@property (nonatomic,readonly) BOOL scaleMetricsAutomatically;              //@synthesize scaleMetricsAutomatically=_scaleMetricsAutomatically - In the implementation block
@property (nonatomic,readonly) UIColor * lineColor;                         //@synthesize lineColor=_lineColor - In the implementation block
@property (nonatomic,readonly) UIColor * axisLabelTextColor;                //@synthesize axisLabelTextColor=_axisLabelTextColor - In the implementation block
@property (nonatomic,readonly) double lineWidth;                            //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,readonly) double axisLineToLabelSpacing;               //@synthesize axisLineToLabelSpacing=_axisLineToLabelSpacing - In the implementation block
@property (nonatomic,readonly) double topBaselineMargin;                    //@synthesize topBaselineMargin=_topBaselineMargin - In the implementation block
@property (nonatomic,readonly) double bottomBaselineMargin;                 //@synthesize bottomBaselineMargin=_bottomBaselineMargin - In the implementation block
-(double)lineWidth;
-(UIColor *)lineColor;
-(id)initWithAxisLabelFont:(id)arg1 axisLabelTextColor:(id)arg2 scaleMetricsAutomatically:(BOOL)arg3 lineColor:(id)arg4 lineWidth:(double)arg5 axisLineToLabelSpacing:(double)arg6 topBaselineMargin:(double)arg7 bottomBaselineMargin:(double)arg8 ;
-(BOOL)scaleMetricsAutomatically;
-(double)axisLineToLabelSpacing;
-(UIFont *)axisLabelFont;
-(UIColor *)axisLabelTextColor;
-(double)topBaselineMargin;
-(double)bottomBaselineMargin;
@end

