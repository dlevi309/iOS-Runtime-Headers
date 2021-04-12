/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HKGraphSeriesDataBlock *)dataBlock;
-(id)cachedBlockForPath:(SCD_Struct_HK9)arg1 context:(id)arg2 ;
-(SCD_Struct_HK9)blockPathForX:(id)arg1 zoom:(long long)arg2 ;
-(void)blocksRequestedFromPath:(SCD_Struct_HK9)arg1 toPath:(SCD_Struct_HK9)arg2 ;
-(void)setHeartbeatSequencePoints:(id)arg1 ;
-(CGRect)unionWithExtent:(CGRect)arg1 ;
@end

