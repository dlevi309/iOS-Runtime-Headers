/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)cachedBlockForPath:(SCD_Struct_HK0)arg1 context:(id)arg2 ;
-(void)blocksRequestedFromPath:(SCD_Struct_HK0)arg1 toPath:(SCD_Struct_HK0)arg2 ;
-(id)_fetchAndCacheDataForPath:(SCD_Struct_HK0)arg1 ;
-(void)dateRangeDataUpdated;
-(id)initWithSourceDelegate:(id)arg1 ;
-(id<HKDateRangeDataSourceDelegate>)sourceDelegate;
-(NSMutableDictionary *)pathToDataBlock;
-(void)setPathToDataBlock:(NSMutableDictionary *)arg1 ;
@end

