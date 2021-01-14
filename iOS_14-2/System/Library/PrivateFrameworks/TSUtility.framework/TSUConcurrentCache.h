/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUCache.h>

@class TSUReadWriteQueue;

@interface TSUConcurrentCache : TSUCache {

	TSUReadWriteQueue* mReadWriteQueue;

}

@property (nonatomic,readonly) TSUReadWriteQueue * readWriteQueue; 
-(void)unload;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(TSUReadWriteQueue *)readWriteQueue;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 andWait:(BOOL)arg2 ;
-(BOOL)hasFlushableContent;
@end

