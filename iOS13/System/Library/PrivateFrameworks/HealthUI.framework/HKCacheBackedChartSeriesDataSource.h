/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeriesDataSource.h>
#import <libobjc.A.dylib/HKChartDataCacheObserver.h>

@class HKChartCache, NSString;

@interface HKCacheBackedChartSeriesDataSource : HKGraphSeriesDataSource <HKChartDataCacheObserver> {

	SCD_Struct_HK9 _lastStartPath;
	SCD_Struct_HK9 _lastEndPath;
	HKChartCache* _chartCache;

}

@property (nonatomic,retain) HKChartCache * chartCache;              //@synthesize chartCache=_chartCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidateCache;
-(id)cachedBlockForPath:(SCD_Struct_HK9)arg1 context:(id)arg2 ;
-(HKChartCache *)chartCache;
-(void)setChartCache:(HKChartCache *)arg1 ;
-(void)blocksRequestedFromPath:(SCD_Struct_HK9)arg1 toPath:(SCD_Struct_HK9)arg2 ;
-(BOOL)hasAvailableBlocksBetweenStartPath:(SCD_Struct_HK9)arg1 endPath:(SCD_Struct_HK9)arg2 ;
-(BOOL)hasPendingQueriesBetweenStartPath:(SCD_Struct_HK9)arg1 endPath:(SCD_Struct_HK9)arg2 ;
-(void)_resetCachedPaths;
-(void)chartCacheDidUpdate:(id)arg1 ;
@end

