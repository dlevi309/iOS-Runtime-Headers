/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSLogEventStreamBase.h>

@class _OSLogCatalogFilter, _OSLogIndex, OSLogEventSource, NSPredicate;

@interface OSLogEventStream : OSLogEventStreamBase {

	_OSLogCatalogFilter* _catalogFilter;
	_OSLogIndex* _index;
	OSLogEventSource* _source;
	os_timesync_db_sRef _tsdb;

}

@property (nonatomic,retain) _OSLogIndex * index;                              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) os_timesync_db_sRef tsdb;                         //@synthesize tsdb=_tsdb - In the implementation block
@property (nonatomic,retain) _OSLogCatalogFilter * catalogFilter;              //@synthesize catalogFilter=_catalogFilter - In the implementation block
@property (nonatomic,readonly) OSLogEventSource * source;                      //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned long long flags; 
@property (nonatomic,copy) NSPredicate * filterPredicate; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> target; 
-(void)setFilterPredicate:(NSPredicate *)arg1 ;
-(id)initWithSource:(id)arg1 ;
-(_OSLogIndex *)index;
-(void)activateStreamFromLastBoot;
-(void)setIndex:(_OSLogIndex *)arg1 ;
-(void)activateStreamFromPosition:(id)arg1 ;
-(_OSLogCatalogFilter *)catalogFilter;
-(void)activateStreamFromDate:(id)arg1 ;
-(id)initWithSource:(id)arg1 skipNonSignpostFiles:(BOOL)arg2 ;
-(void)_activateStreamFromTimeIntervalSinceLastBoot:(double)arg1 ;
-(id)_initWithSource:(id)arg1 flags:(unsigned long long)arg2 ;
-(os_timesync_db_sRef)tsdb;
-(void)_foreachIndexFile:(/*^block*/id)arg1 ;
-(void)setCatalogFilter:(_OSLogCatalogFilter *)arg1 ;
-(void)_activateStreamInRange:(os_timesync_range_s*)arg1 ;
-(void)setTsdb:(os_timesync_db_sRef)arg1 ;
-(void)dealloc;
-(OSLogEventSource *)source;
@end

