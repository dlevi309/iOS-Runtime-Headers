/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

