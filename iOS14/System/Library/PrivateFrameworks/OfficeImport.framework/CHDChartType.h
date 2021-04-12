/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)axes;
-(id)chart;
-(id)description;
-(BOOL)isHorizontal;
-(id)axisIds;
-(unsigned long long)categoryCount;
-(id)contentFormat;
-(id)seriesCollection;
-(id)defaultDataLabel;
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
-(id)axisForClass:(Class)arg1 ;
@end

