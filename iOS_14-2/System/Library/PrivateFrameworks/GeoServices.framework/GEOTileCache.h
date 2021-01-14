/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_source;
#import <GeoServices/GeoServices-Structs.h>
@class GEOTileCacheReserved, NSObject;

@interface GEOTileCache : NSObject {

	GEOTileCacheReserved* _reserved;
	NSObject*<OS_dispatch_source> _memoryNotificationEventSource;

}

@property (nonatomic,readonly) unsigned long long currentCount; 
@property (nonatomic,readonly) unsigned long long currentCost; 
@property (assign) unsigned long long maxCapacity; 
@property (assign) unsigned long long maxCost; 
-(unsigned long long)maxCapacity;
-(void)setMaxCapacity:(unsigned long long)arg1 ;
-(void)_evictWithMaxCost:(unsigned long long)arg1 maxCapacity:(unsigned long long)arg2 ;
-(void)enumerate:(/*^block*/id)arg1 ;
-(id)_description;
-(void)setTile:(id)arg1 forKey:(const GEOTileKey*)arg2 cost:(unsigned long long)arg3 ;
-(id)init;
-(void)_receivedMemoryNotification;
-(unsigned long long)maxCost;
-(unsigned long long)currentCost;
-(void)removeTilesWithKeys:(id)arg1 ;
-(void)_removeTileForKey:(const GEOTileKey*)arg1 ;
-(BOOL)containsKey:(const GEOTileKey*)arg1 cost:(unsigned long long*)arg2 ;
-(void)removeTileForKey:(const GEOTileKey*)arg1 ;
-(id)description;
-(void)_enteredBackground:(id)arg1 ;
-(unsigned long long)currentCount;
-(void)removeAllObjects;
-(void)removeTilesMatchingPredicate:(/*^block*/id)arg1 ;
-(void)setMaxCost:(unsigned long long)arg1 ;
-(id)tileForKey:(const GEOTileKey*)arg1 ;
-(void)dealloc;
@end

