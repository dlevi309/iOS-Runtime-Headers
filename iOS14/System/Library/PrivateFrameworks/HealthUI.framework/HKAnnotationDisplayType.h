/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKInteractiveChartDisplayType.h>

@class NSArray;

@interface HKAnnotationDisplayType : HKInteractiveChartDisplayType {

	NSArray* _trendChartPoints;

}

@property (nonatomic,readonly) NSArray * trendChartPoints;              //@synthesize trendChartPoints=_trendChartPoints - In the implementation block
-(id)initWithDateInterval:(id)arg1 trendData:(id)arg2 ;
-(NSArray *)trendChartPoints;
@end

