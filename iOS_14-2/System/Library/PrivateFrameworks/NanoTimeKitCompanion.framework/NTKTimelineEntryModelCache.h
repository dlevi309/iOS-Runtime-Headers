/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKTimelineEntryModelCacheDataSource;
@class NSMutableArray, NSDate;

@interface NTKTimelineEntryModelCache : NSObject {

	NSMutableArray* _cachedEntryModels;
	NSDate* _cacheStartDate;
	NSDate* _cacheEndDate;
	id<NTKTimelineEntryModelCacheDataSource> _dataSource;

}

@property (nonatomic,readonly) NSDate * cacheStartDate;                                               //@synthesize cacheStartDate=_cacheStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * cacheEndDate;                                                 //@synthesize cacheEndDate=_cacheEndDate - In the implementation block
@property (assign,nonatomic,__weak) id<NTKTimelineEntryModelCacheDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(id)_startOfDayBeforeDate:(id)arg1 ;
+(id)_startOfDayAfterDate:(id)arg1 ;
+(id)_startOfDayForDate:(id)arg1 ;
+(id)_endOfDayForDate:(id)arg1 ;
-(id)init;
-(id)calendar;
-(id<NTKTimelineEntryModelCacheDataSource>)dataSource;
-(void)setDataSource:(id<NTKTimelineEntryModelCacheDataSource>)arg1 ;
-(void)invalidate;
-(id)_cachedEntryModelForDate:(id)arg1 ;
-(void)_extendCacheTowardDate:(id)arg1 ;
-(id)_cachedEntryModelBeforeDate:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)_cachedEntryModelAfterDate:(id)arg1 limit:(unsigned long long)arg2 ;
-(BOOL)hasEntryModelForDate:(id)arg1 ;
-(id)entryModelForDate:(id)arg1 ;
-(id)entryModelsBeforeDate:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)entryModelsAfterDate:(id)arg1 limit:(unsigned long long)arg2 ;
-(NSDate *)cacheStartDate;
-(NSDate *)cacheEndDate;
@end

