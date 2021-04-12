/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)flush;
-(void)_flush;
-(void)recordTileCacheHitForReason:(unsigned char)arg1 tileSource:(unsigned char)arg2 firstAccess:(BOOL)arg3 tileKey:(const GEOTileKey*)arg4 tileSizeInBytes:(unsigned)arg5 ;
-(void)recordTileCacheMissForReason:(unsigned char)arg1 missType:(int)arg2 tileKey:(const GEOTileKey*)arg3 tileSizeInBytes:(unsigned)arg4 httpStatus:(unsigned)arg5 ;
-(void)recordTileCacheMissForReason:(unsigned char)arg1 missType:(int)arg2 tileKey:(const GEOTileKey*)arg3 loadError:(id)arg4 ;
-(void)recordCacheHitForType:(int)arg1 ;
-(void)recordCacheMissForType:(int)arg1 ;
-(void)_startTimerIfNecessary;
-(void)_recordTileCacheEventWithKey:(id)arg1 cacheEventDict:(id)arg2 tileSizeInBytes:(unsigned)arg3 error:(id)arg4 ;
@end

