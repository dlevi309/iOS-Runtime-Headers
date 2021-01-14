/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <HealthUI/HKGraphSeriesDataSource.h>

@class HKGraphSeriesDataBlock;

@interface HKScalarDataSource : HKGraphSeriesDataSource {

	HKGraphSeriesDataBlock* _dataBlock;

}

@property (nonatomic,readonly) HKGraphSeriesDataBlock * dataBlock;              //@synthesize dataBlock=_dataBlock - In the implementation block
-(id)cachedBlockForPath:(SCD_Struct_WD0)arg1 context:(id)arg2 ;
-(HKGraphSeriesDataBlock *)dataBlock;
-(SCD_Struct_WD0)blockPathForX:(id)arg1 zoom:(long long)arg2 ;
-(void)blocksRequestedFromPath:(SCD_Struct_WD0)arg1 toPath:(SCD_Struct_WD0)arg2 priorityDelegate:(id)arg3 ;
-(id)initWithValuePoints:(id)arg1 unitForY:(id)arg2 ;
-(id)initWithCGPoints:(CGPoint*)arg1 count:(long long)arg2 unitForY:(id)arg3 ;
@end

