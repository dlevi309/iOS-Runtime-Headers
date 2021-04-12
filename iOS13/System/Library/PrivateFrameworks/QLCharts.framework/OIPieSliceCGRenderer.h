/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/QLCharts.framework/QLCharts
*/

#import <QLCharts/QLCharts-Structs.h>
#import <libobjc.A.dylib/OIPieSliceRenderer.h>

@interface OIPieSliceCGRenderer : NSObject <OIPieSliceRenderer> {

	OIChartRef _chart;

}

@property (assign) OIChartRef chart;              //@synthesize chart=_chart - In the implementation block
-(void)dealloc;
-(void)setChart:(OIChartRef)arg1 ;
-(OIChartRef)chart;
-(id)initWithChart:(OIChartRef)arg1 ;
-(void)renderPieSliceFromSeries:(OISeriesRef)arg1 radius:(double)arg2 angle:(double)arg3 newAngle:(double)arg4 xOffset:(double)arg5 yOffset:(double)arg6 thickness:(double)arg7 ;
@end

