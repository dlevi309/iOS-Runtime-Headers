/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeriesDataSource.h>
#import <libobjc.A.dylib/HKChartDataCacheObserver.h>

@class HKChartCache, NSString;

@interface HKCacheBackedChartSeriesDataSource : HKGraphSeriesDataSource <HKChartDataCacheObserver> {

	SCD_Struct_HK12 _lastStartPath;
	SCD_Struct_HK12 _lastEndPath;
	HKChartCache* _chartCache;

}

@property (nonatomic,retain) HKChartCache * chartCache;              //@synthesize chartCache=_chartCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidateCache;
-(id)init;
-(id)cachedBlockForPath:(SCD_Struct_HK12)arg1 context:(id)arg2 ;
-(void)blocksRequestedFromPath:(SCD_Struct_HK12)arg1 toPath:(SCD_Struct_HK12)arg2 priorityDelegate:(id)arg3 ;
-(void)setChartCache:(HKChartCache *)arg1 ;
-(HKChartCache *)chartCache;
-(void)_resetCachedPaths;
-(void)chartCacheDidUpdate:(id)arg1 ;
-(BOOL)hasPendingQueriesBetweenStartPath:(SCD_Struct_HK12)arg1 endPath:(SCD_Struct_HK12)arg2 ;
-(BOOL)hasAvailableBlocksBetweenStartPath:(SCD_Struct_HK12)arg1 endPath:(SCD_Struct_HK12)arg2 ;
@end

