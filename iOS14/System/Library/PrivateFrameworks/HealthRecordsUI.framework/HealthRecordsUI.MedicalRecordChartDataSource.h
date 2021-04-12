/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/HealthRecordsUI-Structs.h>
#import <HealthUI/HKGraphSeriesDataSource.h>

@class NSString;

@interface HealthRecordsUI.MedicalRecordChartDataSource : HKGraphSeriesDataSource {

	 type;
	 concept;
	 dataTransformer;
	 chartableCodedQuantitySets;
	 cachedBucketedSets;
	 collapseIntoRangePoints;
	 unit;
	 preferredColors;
	 chartableXRange;
	 chartableYRange;

}

@property (readonly,nonatomic) NSString * displayName; 
-(id)init;
-(id)initWithConcept:(id)arg1 dataTransformer:(id)arg2 unit:(id)arg3 preferredColors:(id)arg4 collapseIntoRangePoints:(BOOL)arg5 type:(long long)arg6 ;
-(id)cachedBlockForPath:(SCD_Struct_He2)arg1 context:(id)arg2 ;
-(id)chartDisplayTypeWithVerticalAxis:(id)arg1 ;
-(NSString *)displayName;
@end

