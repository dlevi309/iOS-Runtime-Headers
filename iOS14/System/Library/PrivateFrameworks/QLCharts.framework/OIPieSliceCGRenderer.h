/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QLCharts.framework/QLCharts
*/

#import <QLCharts/QLCharts-Structs.h>
#import <libobjc.A.dylib/OIPieSliceRenderer.h>

@interface OIPieSliceCGRenderer : NSObject <OIPieSliceRenderer> {

	OIChartRef _chart;

}

@property (assign) OIChartRef chart;              //@synthesize chart=_chart - In the implementation block
-(OIChartRef)chart;
-(void)dealloc;
-(void)setChart:(OIChartRef)arg1 ;
-(id)initWithChart:(OIChartRef)arg1 ;
-(void)renderPieSliceFromSeries:(OISeriesRef)arg1 radius:(double)arg2 angle:(double)arg3 newAngle:(double)arg4 xOffset:(double)arg5 yOffset:(double)arg6 thickness:(double)arg7 ;
@end

