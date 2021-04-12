/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/WorldClockComplications.bundle/WorldClockComplications
*/


@protocol NWCComplicationTimelineEntryModelCacheDataSource;
@class NSDate, NSMutableArray;

@interface NWCComplicationTimelineEntryModelCache : NSObject {

	NSDate* _cacheStartDate;
	NSDate* _cacheEndDate;
	id<NWCComplicationTimelineEntryModelCacheDataSource> _dataSource;
	NSMutableArray* _cachedEntryModels;

}

@property (nonatomic,retain) NSMutableArray * cachedEntryModels;                                                    //@synthesize cachedEntryModels=_cachedEntryModels - In the implementation block
@property (nonatomic,readonly) NSDate * cacheStartDate;                                                             //@synthesize cacheStartDate=_cacheStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * cacheEndDate;                                                               //@synthesize cacheEndDate=_cacheEndDate - In the implementation block
@property (nonatomic,__weak,readonly) id<NWCComplicationTimelineEntryModelCacheDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(id)_startOfDayBeforeDate:(id)arg1 ;
+(id)_startOfDayAfterDate:(id)arg1 ;
+(id)_startOfDayForDate:(id)arg1 ;
+(id)_endOfDayForDate:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(id<NWCComplicationTimelineEntryModelCacheDataSource>)dataSource;
-(void)invalidate;
-(id)_cachedEntryModelForDate:(id)arg1 ;
-(void)_extendCacheTowardDate:(id)arg1 ;
-(id)_cachedEntryModelAfterDate:(id)arg1 limit:(unsigned long long)arg2 ;
-(BOOL)hasEntryModelForDate:(id)arg1 ;
-(id)entryModelForDate:(id)arg1 ;
-(id)entryModelsAfterDate:(id)arg1 limit:(unsigned long long)arg2 ;
-(NSDate *)cacheStartDate;
-(NSDate *)cacheEndDate;
-(NSMutableArray *)cachedEntryModels;
-(void)setCachedEntryModels:(NSMutableArray *)arg1 ;
@end

