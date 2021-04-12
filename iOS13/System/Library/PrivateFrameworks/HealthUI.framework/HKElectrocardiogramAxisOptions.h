/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class UIFont, UIColor;

@interface HKElectrocardiogramAxisOptions : NSObject {

	BOOL _scaleMetricsAutomatically;
	UIFont* _axisLabelFont;
	UIColor* _lineColor;
	double _lineWidth;
	double _axisLineToLabelSpacing;
	double _topBaselineMargin;
	double _bottomBaselineMargin;

}

@property (nonatomic,readonly) UIFont * axisLabelFont;                      //@synthesize axisLabelFont=_axisLabelFont - In the implementation block
@property (nonatomic,readonly) BOOL scaleMetricsAutomatically;              //@synthesize scaleMetricsAutomatically=_scaleMetricsAutomatically - In the implementation block
@property (nonatomic,readonly) UIColor * lineColor;                         //@synthesize lineColor=_lineColor - In the implementation block
@property (nonatomic,readonly) double lineWidth;                            //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,readonly) double axisLineToLabelSpacing;               //@synthesize axisLineToLabelSpacing=_axisLineToLabelSpacing - In the implementation block
@property (nonatomic,readonly) double topBaselineMargin;                    //@synthesize topBaselineMargin=_topBaselineMargin - In the implementation block
@property (nonatomic,readonly) double bottomBaselineMargin;                 //@synthesize bottomBaselineMargin=_bottomBaselineMargin - In the implementation block
-(double)lineWidth;
-(UIColor *)lineColor;
-(id)initWithAxisLabelFont:(id)arg1 scaleMetricsAutomatically:(BOOL)arg2 lineColor:(id)arg3 lineWidth:(double)arg4 axisLineToLabelSpacing:(double)arg5 topBaselineMargin:(double)arg6 bottomBaselineMargin:(double)arg7 ;
-(BOOL)scaleMetricsAutomatically;
-(double)axisLineToLabelSpacing;
-(UIFont *)axisLabelFont;
-(double)topBaselineMargin;
-(double)bottomBaselineMargin;
@end

