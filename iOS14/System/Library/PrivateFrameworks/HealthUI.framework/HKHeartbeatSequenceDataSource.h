/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeriesDataSource.h>

@class HKGraphSeriesDataBlock;

@interface HKHeartbeatSequenceDataSource : HKGraphSeriesDataSource {

	HKGraphSeriesDataBlock* _dataBlock;

}

@property (nonatomic,readonly) HKGraphSeriesDataBlock * dataBlock;              //@synthesize dataBlock=_dataBlock - In the implementation block
-(id)init;
-(id)cachedBlockForPath:(SCD_Struct_HK12)arg1 context:(id)arg2 ;
-(HKGraphSeriesDataBlock *)dataBlock;
-(SCD_Struct_HK12)blockPathForX:(id)arg1 zoom:(long long)arg2 ;
-(void)blocksRequestedFromPath:(SCD_Struct_HK12)arg1 toPath:(SCD_Struct_HK12)arg2 priorityDelegate:(id)arg3 ;
-(void)setHeartbeatSequencePoints:(id)arg1 ;
-(CGRect)unionWithExtent:(CGRect)arg1 ;
@end

