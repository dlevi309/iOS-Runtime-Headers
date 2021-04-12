/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <HealthUI/HKGraphSeriesDataSource.h>

@class NSArray;

@interface WDChartExperimentHorizontalSingleLineSource : HKGraphSeriesDataSource {

	NSArray* _chartPoints;

}

@property (nonatomic,readonly) NSArray * chartPoints;              //@synthesize chartPoints=_chartPoints - In the implementation block
-(id)cachedBlockForPath:(SCD_Struct_WD0)arg1 context:(id)arg2 ;
-(NSArray *)chartPoints;
-(id)initWithAppointments:(id)arg1 ;
-(id)_appointmentsToChartPoints:(id)arg1 ;
-(id)initWithHorizontalSingleLineChartPoints:(id)arg1 ;
@end

