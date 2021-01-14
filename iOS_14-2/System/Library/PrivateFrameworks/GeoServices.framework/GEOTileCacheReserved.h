/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOTileCacheReserved : NSObject {

	mutex _reservedLock;
	list<CacheItem, std::__1::allocator<CacheItem> >* _reservedList;
	unordered_map<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::__list_iterator<CacheItem, void *> > > >* _reservedMap;
	unsigned long long _reservedMaxCapacity;
	unsigned long long _reservedMaxCost;
	unsigned long long _reservedCurrentCost;
	unsigned long long _reservedCurrentCount;

}
-(void)dealloc;
@end

