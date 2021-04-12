/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSMutableDictionary, NSObject;

@interface GEOCacheUsageMonitor : NSObject {

	NSMutableDictionary* _typeToHits;
	NSMutableDictionary* _typeToMisses;
	NSMutableDictionary* _tileCacheHitData;
	NSMutableDictionary* _tileCacheMissData;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _isolationQueue;

}
+(id)sharedMonitor;
-(void)flush;
-(id)init;
-(void)recordTileCacheHitForReason:(unsigned char)arg1 tileSource:(unsigned char)arg2 tileKey:(const GEOTileKey*)arg3 tileSizeInBytes:(unsigned)arg4 ;
-(void)recordTileCacheMissForReason:(unsigned char)arg1 missType:(int)arg2 tileKey:(const GEOTileKey*)arg3 tileSizeInBytes:(unsigned)arg4 httpStatus:(unsigned)arg5 ;
-(void)recordCacheHitForType:(int)arg1 ;
-(void)recordCacheMissForType:(int)arg1 ;
-(void)recordTileCacheMissForReason:(unsigned char)arg1 missType:(int)arg2 tileKey:(const GEOTileKey*)arg3 loadError:(id)arg4 ;
-(void)_flush;
-(void)_startTimerIfNecessary;
-(void)dealloc;
-(void)_recordTileCacheEventWithKey:(id)arg1 cacheEventDict:(id)arg2 tileSizeInBytes:(unsigned)arg3 error:(id)arg4 ;
@end

