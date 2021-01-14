/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableDictionary, OITSUReadWriteQueue, NSString;

@interface TSUConcurrentMutableDictionaryCache : NSObject {

	NSMutableDictionary* _cache;
	OITSUReadWriteQueue* _readWriteQueue;
	NSString* _name;
	unsigned long long _count;

}

@property (nonatomic,readonly) OITSUReadWriteQueue * readWriteQueue;              //@synthesize readWriteQueue=_readWriteQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                          //@synthesize count=_count - In the implementation block
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(OITSUReadWriteQueue *)readWriteQueue;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)p_didReceiveMemoryWarning:(id)arg1 ;
-(void)p_didEnterBackground:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 andWait:(BOOL)arg2 ;
-(void)performSyncWriteWithUnderlyingDictionary:(/*^block*/id)arg1 ;
@end

