/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMapTable, NSMutableOrderedSet;

@interface PUCachedMapTable : NSObject <NSCopying> {

	unsigned long long _cacheCountLimit;
	NSMapTable* __mapTable;
	NSMutableOrderedSet* __cachedObjects;

}

@property (nonatomic,readonly) NSMapTable * _mapTable;                            //@synthesize _mapTable=__mapTable - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * _cachedObjects;              //@synthesize _cachedObjects=__cachedObjects - In the implementation block
@property (assign,nonatomic) unsigned long long cacheCountLimit;                  //@synthesize cacheCountLimit=_cacheCountLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long accurateCount; 
-(void)removeObjectForKey:(id)arg1 ;
-(void)_objectWasRecentlyUsed:(id)arg1 ;
-(id)keyEnumerator;
-(unsigned long long)_initialCapacity;
-(id)objectForKey:(id)arg1 ;
-(id)_cachedObjectsCreateIfNeeded:(BOOL)arg1 ;
-(unsigned long long)accurateCount;
-(unsigned long long)cacheCountLimit;
-(void)removeAllObjects;
-(NSMapTable *)_mapTable;
-(NSMutableOrderedSet *)_cachedObjects;
-(id)_mapTableCreateIfNeeded:(BOOL)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setCacheCountLimit:(unsigned long long)arg1 ;
@end

