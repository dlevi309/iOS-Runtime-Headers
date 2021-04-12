/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <HealthUI/HKGraphSeriesDataSource.h>

@class HKGraphSeriesDataBlock;

@interface HKScalarDataSource : HKGraphSeriesDataSource {

	HKGraphSeriesDataBlock* _dataBlock;

}

@property (nonatomic,readonly) HKGraphSeriesDataBlock * dataBlock;              //@synthesize dataBlock=_dataBlock - In the implementation block
-(HKGraphSeriesDataBlock *)dataBlock;
-(id)cachedBlockForPath:(SCD_Struct_WD4)arg1 context:(id)arg2 ;
-(id)initWithValuePoints:(id)arg1 unitForY:(id)arg2 ;
-(id)initWithCGPoints:(CGPoint*)arg1 count:(long long)arg2 unitForY:(id)arg3 ;
-(SCD_Struct_WD4)blockPathForX:(id)arg1 zoom:(long long)arg2 ;
-(void)blocksRequestedFromPath:(SCD_Struct_WD4)arg1 toPath:(SCD_Struct_WD4)arg2 ;
@end

