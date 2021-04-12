/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class CHDChart, EDCollection, CHDSeriesCollection, CHDDataLabel;

@interface CHDChartType : NSObject {

	CHDChart* mChart;
	EDCollection* mAxisIds;
	CHDSeriesCollection* mSeries;
	CHDDataLabel* mDefaultDataLabel;
	BOOL mVaryColors;

}
+(id)chartTypeWithChart:(id)arg1 ;
+(BOOL)is3DType;
-(id)description;
-(id)axes;
-(BOOL)isHorizontal;
-(unsigned long long)categoryCount;
-(id)contentFormat;
-(id)seriesCollection;
-(id)defaultDataLabel;
-(id)chart;
-(id)initWithChart:(id)arg1 ;
-(int)defaultLabelPosition;
-(BOOL)isPlotedOnSecondaryAxis;
-(void)switchAxes:(id)arg1 ;
-(unsigned long long)seriesCount;
-(void)setDefaultDataLabel:(id)arg1 ;
-(void)setSeriesCollection:(id)arg1 ;
-(BOOL)isVaryColors;
-(void)setVaryColors:(BOOL)arg1 ;
-(id)defaultTitleWithResources:(id)arg1 ;
-(id)axisIds;
-(id)axisForClass:(Class)arg1 ;
@end

