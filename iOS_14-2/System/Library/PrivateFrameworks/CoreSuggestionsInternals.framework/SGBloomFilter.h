/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol SGBloomFilterChunk, OS_dispatch_queue;
@class NSObject;

@interface SGBloomFilter : NSObject {

	id<SGBloomFilterChunk> _head;
	id<SGBloomFilterChunk> _tail;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)counts;
-(BOOL)exists:(id)arg1 ;
-(void)add:(id)arg1 ;
-(void)_rotate;
-(id)initWithHead:(id)arg1 tail:(id)arg2 ;
-(id)initWithInMemoryStorage;
-(id)initWithInMemoryStorageSparse;
-(id)initWithDirectory:(id)arg1 name:(id)arg2 ;
-(void)_rotateIfNecessary;
-(void)forceRotate;
-(void)addAsync:(id)arg1 ;
@end

