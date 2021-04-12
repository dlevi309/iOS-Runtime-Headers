/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_source;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject, GEOTileCache;

@interface GEOTilePool : NSObject {

	NSObject*<OS_dispatch_source> _memoryNotificationEventSource;
	GEOGenericContainer<_GEOTileKey, GEOTileData *, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type>* _pool;
	GEOGenericContainer<_GEOTileKey, id, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type>* _decodedPool;
	GEOTileCache* _cache;

}

@property (nonatomic,readonly) unsigned long long currentCount; 
@property (nonatomic,readonly) unsigned long long currentCost; 
@property (assign) unsigned long long maxCapacity; 
@property (assign) unsigned long long maxCost; 
-(id)init;
-(void)removeAllObjects;
-(void)enumerate:(/*^block*/id)arg1 ;
-(unsigned long long)maxCapacity;
-(void)setMaxCapacity:(unsigned long long)arg1 ;
-(void)_receivedMemoryNotification;
-(void)setMaxCost:(unsigned long long)arg1 ;
-(BOOL)containsKey:(const GEOTileKey*)arg1 cost:(unsigned long long*)arg2 ;
-(id)tileForKey:(const GEOTileKey*)arg1 ;
-(void)removeTilesMatchingPredicate:(/*^block*/id)arg1 ;
-(void)setTile:(id)arg1 forKey:(const GEOTileKey*)arg2 cost:(unsigned long long)arg3 ;
-(void)_enteredBackground:(id)arg1 ;
-(unsigned long long)maxCost;
-(void)removeTileForKey:(const GEOTileKey*)arg1 ;
-(void)removeTilesWithKeys:(id)arg1 ;
-(unsigned long long)currentCount;
-(unsigned long long)currentCost;
-(id)initWithSideCacheEnabled:(BOOL)arg1 ;
@end

