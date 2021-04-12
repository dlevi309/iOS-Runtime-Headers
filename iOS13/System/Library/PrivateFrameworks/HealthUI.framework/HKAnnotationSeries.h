/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setUpdateDelegate:(id)arg1 ;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK9)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(BOOL)supportsMultiTouchSelection;
-(NSArray *)chartPoints;
-(id)dataForDateRange:(id)arg1 timeScope:(long long)arg2 ;
-(id)initWithDateInterval:(id)arg1 trendData:(id)arg2 ;
@end

