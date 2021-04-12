/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFWeakContainer.h>

@protocol PFWeakHashDelegate;
@class NSPointerArray;

@interface PFWeakHash : PFWeakContainer {

	opaque_pthread_mutex_t _serializer;
	BOOL _objectHashing;
	A{_opaque_pthread_t}* _serializedThread;
	id* _objects;
	unsigned long long _capacity;
	NSPointerArray* _payload;
	unsigned long long _payloadPurgeCounter;
	unsigned long long* _inUse;
	unsigned long long _count;
	long long _nilledWeakCount;
	id<PFWeakHashDelegate> _delegate;

}

@property (__weak) id<PFWeakHashDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(void)_serialize:(/*^block*/id)arg1 ;
-(void)enumerateObjectsAndPayloadsWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(unsigned long long)_addObject:(id)arg1 ;
-(id<PFWeakHashDelegate>)delegate;
-(unsigned long long)countEstimate;
-(void)_rehashWithNewCapacity:(unsigned long long)arg1 ;
-(unsigned long long)capacity;
-(unsigned long long)_bucketForObject:(id)arg1 foundInHash:(BOOL*)arg2 ;
-(BOOL)_onSerializedThread;
-(id)payloadForObject:(id)arg1 ;
-(void)setPayload:(id)arg1 forObject:(id)arg2 ;
-(BOOL)_shouldGrow;
-(void)postDelegateBecameEmptyNotice;
-(BOOL)containsObject:(id)arg1 ;
-(id)member:(id)arg1 ;
-(void)_processNilledWeakReferences;
-(id)allObjects;
-(void)setDelegate:(id<PFWeakHashDelegate>)arg1 ;
-(void)enumerateObjectsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_shouldShrink;
-(id)initWithPointerHashing;
-(BOOL)_removeAllObjects;
-(void)addObject:(id)arg1 ;
-(void)_dumpBuckets;
-(void)addObject:(id)arg1 withPayload:(id)arg2 ;
-(void)removeAllObjects;
-(void)_setPayload:(id)arg1 inBucket:(unsigned long long)arg2 ;
-(BOOL)removeObject:(id)arg1 ;
-(void)_doEnumeration:(/*^block*/id)arg1 ;
-(void)_resize;
-(void)weakReferenceBecameNil;
-(void)_purgeOrphanedPayloads;
-(void)dealloc;
-(unsigned long long)countByVerifyingWeakObjects;
-(id)initWithObjectHashing;
@end

