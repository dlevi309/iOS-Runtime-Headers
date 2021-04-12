/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)member:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(BOOL)removeObject:(id)arg1 ;
-(void)removeAllObjects;
-(BOOL)containsObject:(id)arg1 ;
-(id<PFWeakHashDelegate>)delegate;
-(void)setDelegate:(id<PFWeakHashDelegate>)arg1 ;
-(id)allObjects;
-(unsigned long long)capacity;
-(void)enumerateObjectsWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)_addObject:(id)arg1 ;
-(void)weakReferenceBecameNil;
-(void)_dumpBuckets;
-(void)_serialize:(/*^block*/id)arg1 ;
-(BOOL)_onSerializedThread;
-(id)initWithObjectHashing;
-(id)initWithPointerHashing;
-(void)postDelegateBecameEmptyNotice;
-(BOOL)_removeAllObjects;
-(void)_rehashWithNewCapacity:(unsigned long long)arg1 ;
-(unsigned long long)_bucketForObject:(id)arg1 foundInHash:(BOOL*)arg2 ;
-(BOOL)_shouldGrow;
-(BOOL)_shouldShrink;
-(void)_resize;
-(void)_purgeOrphanedPayloads;
-(void)_processNilledWeakReferences;
-(void)_doEnumeration:(/*^block*/id)arg1 ;
-(unsigned long long)countEstimate;
-(unsigned long long)countByVerifyingWeakObjects;
-(void)_setPayload:(id)arg1 inBucket:(unsigned long long)arg2 ;
-(void)addObject:(id)arg1 withPayload:(id)arg2 ;
-(void)setPayload:(id)arg1 forObject:(id)arg2 ;
-(id)payloadForObject:(id)arg1 ;
-(void)enumerateObjectsAndPayloadsWithBlock:(/*^block*/id)arg1 ;
@end

