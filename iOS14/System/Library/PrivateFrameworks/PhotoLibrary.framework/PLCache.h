/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@class NSMutableDictionary;

@interface PLCache : NSObject {

	NSMutableDictionary* _cacheEntries;
	long long _countLimit;
	long long _currentCount;
	long long _totalCostLimit;
	long long _currentCost;
	opaque_pthread_mutex_t _lock;
	entryList* _lru;

}
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(long long)arg3 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCountLimit:(long long)arg1 totalCostLimit:(long long)arg2 ;
@end

