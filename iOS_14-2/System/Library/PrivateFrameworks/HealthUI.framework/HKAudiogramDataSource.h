/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeriesDataSource.h>

@class HKGraphSeriesDataBlock;

@interface HKAudiogramDataSource : HKGraphSeriesDataSource {

	HKGraphSeriesDataBlock* _dataBlock;

}

@property (nonatomic,readonly) HKGraphSeriesDataBlock * dataBlock;              //@synthesize dataBlock=_dataBlock - In the implementation block
-(id)cachedBlockForPath:(SCD_Struct_HK1)arg1 context:(id)arg2 ;
-(HKGraphSeriesDataBlock *)dataBlock;
-(SCD_Struct_HK1)blockPathForX:(id)arg1 zoom:(long long)arg2 ;
-(void)blocksRequestedFromPath:(SCD_Struct_HK1)arg1 toPath:(SCD_Struct_HK1)arg2 priorityDelegate:(id)arg3 ;
-(id)_chartPointsFromSensitivityData:(id)arg1 leftEarSeries:(BOOL)arg2 ;
-(id)_flatPointsFromSensitivityData:(id)arg1 leftEarSeries:(BOOL)arg2 ;
-(id)initWithSensitivityData:(id)arg1 forLeftEar:(BOOL)arg2 ;
-(id)initWithFlatSensitivityData:(id)arg1 forLeftEar:(BOOL)arg2 ;
@end

