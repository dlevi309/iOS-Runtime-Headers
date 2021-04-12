/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOTilePool;

@interface GEOTileLoaderInternal : NSObject {

	list<LoadItem, std::__1::allocator<LoadItem> >* _loadItems;
	GEOTilePool* _cache;
	GEOTilePool* _expiringCache;
	unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer> >* _timer;
	list<_CacheRequester<void ()(unsigned long long)>, std::__1::allocator<_CacheRequester<void ()(unsigned long long)> > >* _shrinkCacheRequesters;
	list<_CacheRequester<void ()(unsigned long long)>, std::__1::allocator<_CacheRequester<void ()(unsigned long long)> > >* _freeableSizeRequesters;
	Ai _memoryHits;
	Ai _diskHits;
	Ai _networkHits;
	deque<ErrorInfo, std::__1::allocator<ErrorInfo> >* _recentErrors;

}
@end

