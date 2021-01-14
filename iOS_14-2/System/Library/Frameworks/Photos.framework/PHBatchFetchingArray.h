/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <CoreFoundation/NSArray.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>

@protocol PHBatchFetchingArrayDataSource, OS_dispatch_queue;
@class NSArray, NSSet, NSCache, NSObject, NSMutableDictionary, PHPhotoLibrary, NSString;

@interface PHBatchFetchingArray : NSArray <NSCacheDelegate> {

	NSArray* _oids;
	NSSet* _oidsSet;
	id<PHBatchFetchingArrayDataSource> _dataSource;
	unsigned long long _count;
	os_unfair_lock_s _cacheLock;
	NSCache* _cache;
	os_unfair_lock_s _lastBatchLock;
	unsigned long long _lastBatchIndex;
	NSArray* _lastBatch;
	NSObject*<OS_dispatch_queue> _uuidsQueue;
	NSMutableDictionary* _uuidsByOIDs;
	unsigned long long _batchSize;
	Class _fetchedPropertySetClass;
	unsigned long long _propertyHint;

}

@property (readonly) PHPhotoLibrary * photoLibrary; 
@property (readonly) NSArray * oids;                                //@synthesize oids=_oids - In the implementation block
@property (readonly) NSSet * oidsSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)accessInstanceVariablesDirectly;
-(unsigned long long)batchSize;
-(void)prefetchObjectsAtIndexes:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PH16*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(PHPhotoLibrary *)photoLibrary;
-(NSSet *)oidsSet;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(id)_fetchObjectsInBatchNumber:(unsigned long long)arg1 ;
-(unsigned long long)test_lastBatchIndex;
-(unsigned long long)count;
-(id)_phObjectAtIndex:(unsigned long long)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithObjects:(id)arg1 options:(id)arg2 photoLibrary:(id)arg3 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(NSString *)description;
-(void)_rememberUUIDsForBatch:(id)arg1 ;
-(void)test_evictBatchNumber:(long long)arg1 ;
-(id)_phObjectsForOIDs:(id)arg1 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)_batchForBatchNumber:(unsigned long long)arg1 shouldUpdateLastBatch:(BOOL)arg2 ;
-(id)initWithOIDs:(id)arg1 options:(id)arg2 dataSource:(id)arg3 ;
-(NSArray *)oids;
-(void)test_invalidateUUIDCache;
-(unsigned long long)_populateObjectBuffer:(id*)arg1 range:(NSRange)arg2 ;
-(id)initWithOIDs:(id)arg1 options:(id)arg2 photoLibrary:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

