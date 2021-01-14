/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeries.h>
#import <libobjc.A.dylib/HKDateRangeDataSourceDelegate.h>

@class NSArray;

@interface HKAnnotationSeries : HKGraphSeries <HKDateRangeDataSourceDelegate> {

	NSArray* _chartPoints;

}

@property (nonatomic,readonly) NSArray * chartPoints;              //@synthesize chartPoints=_chartPoints - In the implementation block
+(id)_buildChartPointsForDateInterval:(id)arg1 trendData:(id)arg2 ;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK12)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(BOOL)supportsMultiTouchSelection;
-(NSArray *)chartPoints;
-(void)setUpdateDelegate:(id)arg1 ;
-(id)initWithDateInterval:(id)arg1 trendData:(id)arg2 ;
-(id)dataForDateRange:(id)arg1 timeScope:(long long)arg2 ;
@end

