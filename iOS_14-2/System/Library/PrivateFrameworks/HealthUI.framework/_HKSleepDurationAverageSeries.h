/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKSleepDurationSeries.h>

@class NSString;

@interface _HKSleepDurationAverageSeries : HKSleepDurationSeries {

	double _averageValue;
	NSString* _averageDescription;

}

@property (assign,nonatomic) double averageValue;                      //@synthesize averageValue=_averageValue - In the implementation block
@property (nonatomic,copy) NSString * averageDescription;              //@synthesize averageDescription=_averageDescription - In the implementation block
-(id)init;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(long long)overlayType;
-(double)averageValue;
-(void)drawOverlayInContext:(CGContextRef)arg1 seriesOverlayData:(id)arg2 ;
-(void)setAverageValue:(double)arg1 averageDescription:(id)arg2 ;
-(void)setAverageValue:(double)arg1 ;
-(void)setAverageDescription:(NSString *)arg1 ;
-(NSString *)averageDescription;
@end

