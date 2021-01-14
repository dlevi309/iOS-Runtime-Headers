/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <HealthUI/HKGraphSeriesDataSource.h>

@class NSArray;

@interface WDChartExperimentsSimpleDataSource : HKGraphSeriesDataSource {

	NSArray* _chartPoints;

}

@property (nonatomic,retain) NSArray * chartPoints;              //@synthesize chartPoints=_chartPoints - In the implementation block
-(void)setChartPoints:(NSArray *)arg1 ;
-(id)cachedBlockForPath:(SCD_Struct_WD0)arg1 context:(id)arg2 ;
-(NSArray *)chartPoints;
-(id)initWithDosages:(id)arg1 unit:(id)arg2 ;
-(id)_dosagesToChartPoints:(id)arg1 unit:(id)arg2 ;
-(id)_computeSineData:(double)arg1 ;
-(id)initWithSineData:(double)arg1 ;
@end

