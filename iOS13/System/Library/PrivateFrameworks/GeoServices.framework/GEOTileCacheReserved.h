/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

