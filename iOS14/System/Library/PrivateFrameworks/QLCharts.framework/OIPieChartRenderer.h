/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QLCharts.framework/QLCharts
*/


@protocol OIPieSliceRenderer;
#import <QLCharts/QLCharts-Structs.h>
@interface OIPieChartRenderer : NSObject {

	id<OIPieSliceRenderer> _sliceRenderer;
	OIChartRef _chart;

}

@property (retain) id<OIPieSliceRenderer> sliceRenderer;              //@synthesize sliceRenderer=_sliceRenderer - In the implementation block
@property (assign) OIChartRef chart;                                  //@synthesize chart=_chart - In the implementation block
-(OIChartRef)chart;
-(void)dealloc;
-(void)setChart:(OIChartRef)arg1 ;
-(id)initWithChart:(OIChartRef)arg1 ;
-(void)renderThreeDimensional:(BOOL)arg1 pieFromSeriesArray:(CFArrayRef)arg2 ;
-(void)setSliceRenderer:(id<OIPieSliceRenderer>)arg1 ;
-(id)initWithChart:(OIChartRef)arg1 sliceRenderer:(id)arg2 ;
-(id<OIPieSliceRenderer>)sliceRenderer;
@end

