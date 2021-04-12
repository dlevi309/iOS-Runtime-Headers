/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)cachedBlockForPath:(SCD_Struct_WD4)arg1 context:(id)arg2 ;
-(NSArray *)chartPoints;
-(id)initWithDosages:(id)arg1 unit:(id)arg2 ;
-(id)_dosagesToChartPoints:(id)arg1 unit:(id)arg2 ;
-(id)_computeSineData:(double)arg1 ;
-(id)initWithSineData:(double)arg1 ;
@end

