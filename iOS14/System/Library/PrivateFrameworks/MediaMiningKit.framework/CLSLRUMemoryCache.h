/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class NSMapTable, NSRecursiveLock;

@interface CLSLRUMemoryCache : NSObject {

	unsigned long long _numberOfSlots;
	NSMapTable* _cacheDictionary;
	NSRecursiveLock* _recursiveLock;
	CLSLRUMemoryCacheList* _leastRecentUsedList;
	NSMapTable* _leastRecentUsedDictionary;

}

@property (assign,nonatomic) unsigned long long numberOfSlots;                   //@synthesize numberOfSlots=_numberOfSlots - In the implementation block
@property (nonatomic,readonly) unsigned long long currentUsedSlots; 
-(unsigned long long)numberOfSlots;
-(id)init;
-(void)_removeListElement:(CLSLRUMemoryCacheListElement*)arg1 ;
-(void)_promoteListElement:(CLSLRUMemoryCacheListElement*)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(unsigned long long)currentUsedSlots;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(BOOL)writeToURL:(id)arg1 ;
-(void)evictSlots:(unsigned long long)arg1 ;
-(BOOL)loadFromURL:(id)arg1 ;
-(id)allKeys;
-(void)setNumberOfSlots:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

