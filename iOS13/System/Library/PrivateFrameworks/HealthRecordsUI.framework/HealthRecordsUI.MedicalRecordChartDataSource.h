/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)displayName;
-(id)chartDisplayTypeWithVerticalAxis:(id)arg1 ;
-(id)initWithConcept:(id)arg1 dataTransformer:(id)arg2 unit:(id)arg3 preferredColors:(id)arg4 collapseIntoRangePoints:(BOOL)arg5 type:(long long)arg6 ;
-(id)cachedBlockForPath:(SCD_Struct_He2)arg1 context:(id)arg2 ;
@end

