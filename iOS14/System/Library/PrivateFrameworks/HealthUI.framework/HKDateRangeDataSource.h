/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeriesDataSource.h>
#import <libobjc.A.dylib/HKDateRangeDataUpdateDelegate.h>

@protocol HKDateRangeDataSourceDelegate;
@class NSMutableDictionary;

@interface HKDateRangeDataSource : HKGraphSeriesDataSource <HKDateRangeDataUpdateDelegate> {

	id<HKDateRangeDataSourceDelegate> _sourceDelegate;
	NSMutableDictionary* _pathToDataBlock;

}

@property (nonatomic,readonly) id<HKDateRangeDataSourceDelegate> sourceDelegate;              //@synthesize sourceDelegate=_sourceDelegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pathToDataBlock;                           //@synthesize pathToDataBlock=_pathToDataBlock - In the implementation block
-(void)invalidateCache;
-(id)cachedBlockForPath:(SCD_Struct_HK12)arg1 context:(id)arg2 ;
-(void)blocksRequestedFromPath:(SCD_Struct_HK12)arg1 toPath:(SCD_Struct_HK12)arg2 priorityDelegate:(id)arg3 ;
-(id)initWithSourceDelegate:(id)arg1 ;
-(void)dateRangeDataUpdated;
-(id)_fetchAndCacheDataForPath:(SCD_Struct_HK12)arg1 ;
-(id<HKDateRangeDataSourceDelegate>)sourceDelegate;
-(NSMutableDictionary *)pathToDataBlock;
-(void)setPathToDataBlock:(NSMutableDictionary *)arg1 ;
@end

