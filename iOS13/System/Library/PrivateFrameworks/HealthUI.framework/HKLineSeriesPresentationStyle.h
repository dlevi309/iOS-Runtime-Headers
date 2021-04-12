/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKStrokeStyle, HKFillStyle, HKLineSeriesPointMarkerStyle, HKAxisLabelStyle, HKLegendPointAnnotationStyle;

@interface HKLineSeriesPresentationStyle : NSObject {

	BOOL _shouldApplyRollingAverage;
	BOOL _shouldNegateAnnotationValue;
	int _waveForm;
	HKStrokeStyle* _strokeStyle;
	HKFillStyle* _fillStyle;
	HKLineSeriesPointMarkerStyle* _pointMarkerStyle;
	HKLineSeriesPointMarkerStyle* _endCapStyle;
	HKAxisLabelStyle* _annotationStyle;
	HKLegendPointAnnotationStyle* _legendAnnotationStyle;
	HKAxisLabelStyle* _axisAnnotationStyle;
	double _sineWaveSmoothingFactor;

}

@property (nonatomic,retain) HKStrokeStyle * strokeStyle;                                       //@synthesize strokeStyle=_strokeStyle - In the implementation block
@property (nonatomic,retain) HKFillStyle * fillStyle;                                           //@synthesize fillStyle=_fillStyle - In the implementation block
@property (nonatomic,retain) HKLineSeriesPointMarkerStyle * pointMarkerStyle;                   //@synthesize pointMarkerStyle=_pointMarkerStyle - In the implementation block
@property (nonatomic,retain) HKLineSeriesPointMarkerStyle * endCapStyle;                        //@synthesize endCapStyle=_endCapStyle - In the implementation block
@property (assign,nonatomic) int waveForm;                                                      //@synthesize waveForm=_waveForm - In the implementation block
@property (nonatomic,retain) HKAxisLabelStyle * annotationStyle;                                //@synthesize annotationStyle=_annotationStyle - In the implementation block
@property (nonatomic,retain) HKLegendPointAnnotationStyle * legendAnnotationStyle;              //@synthesize legendAnnotationStyle=_legendAnnotationStyle - In the implementation block
@property (nonatomic,retain) HKAxisLabelStyle * axisAnnotationStyle;                            //@synthesize axisAnnotationStyle=_axisAnnotationStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyRollingAverage;                                    //@synthesize shouldApplyRollingAverage=_shouldApplyRollingAverage - In the implementation block
@property (assign,nonatomic) BOOL shouldNegateAnnotationValue;                                  //@synthesize shouldNegateAnnotationValue=_shouldNegateAnnotationValue - In the implementation block
@property (assign,nonatomic) double sineWaveSmoothingFactor;                                    //@synthesize sineWaveSmoothingFactor=_sineWaveSmoothingFactor - In the implementation block
-(void)setFillStyle:(HKFillStyle *)arg1 ;
-(HKFillStyle *)fillStyle;
-(void)setStrokeStyle:(HKStrokeStyle *)arg1 ;
-(HKStrokeStyle *)strokeStyle;
-(HKAxisLabelStyle *)annotationStyle;
-(void)setWaveForm:(int)arg1 ;
-(void)setEndCapStyle:(HKLineSeriesPointMarkerStyle *)arg1 ;
-(void)setPointMarkerStyle:(HKLineSeriesPointMarkerStyle *)arg1 ;
-(void)setAxisAnnotationStyle:(HKAxisLabelStyle *)arg1 ;
-(void)setLegendAnnotationStyle:(HKLegendPointAnnotationStyle *)arg1 ;
-(HKLineSeriesPointMarkerStyle *)pointMarkerStyle;
-(void)setShouldNegateAnnotationValue:(BOOL)arg1 ;
-(void)setAnnotationStyle:(HKAxisLabelStyle *)arg1 ;
-(BOOL)shouldApplyRollingAverage;
-(int)waveForm;
-(HKAxisLabelStyle *)axisAnnotationStyle;
-(BOOL)shouldNegateAnnotationValue;
-(double)sineWaveSmoothingFactor;
-(HKLineSeriesPointMarkerStyle *)endCapStyle;
-(HKLegendPointAnnotationStyle *)legendAnnotationStyle;
-(void)setSineWaveSmoothingFactor:(double)arg1 ;
-(void)setShouldApplyRollingAverage:(BOOL)arg1 ;
@end

