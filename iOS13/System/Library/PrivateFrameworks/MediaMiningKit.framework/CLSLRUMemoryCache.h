/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)allKeys;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)writeToURL:(id)arg1 ;
-(void)_promoteListElement:(CLSLRUMemoryCacheListElement*)arg1 ;
-(void)_removeListElement:(CLSLRUMemoryCacheListElement*)arg1 ;
-(void)setNumberOfSlots:(unsigned long long)arg1 ;
-(unsigned long long)currentUsedSlots;
-(void)evictSlots:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSlots;
-(BOOL)loadFromURL:(id)arg1 ;
@end

