/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


@protocol OS_dispatch_semaphore;
#import <MetalTools/MetalTools-Structs.h>
@class NSObject;

@interface MTLToolsPointerArray : NSObject {

	unsigned long long _pointerAdditions;
	unordered_set<void *, std::__1::hash<void *>, std::__1::equal_to<void *>, std::__1::allocator<void *> >* _pointerSet;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	unsigned _options;

}
-(void)dealloc;
-(unsigned long long)count;
-(id)initWithOptions:(unsigned)arg1 ;
-(void)addPointer:(void*)arg1 ;
-(void)removePointer:(void*)arg1 ;
-(void)removeObjectAssociatedWithBaseObject:(id)arg1 ;
-(id)newObjectAssociatedWithBaseObject:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)objectAssociatedWithBaseObject:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumeratePointersUsingBlock:(/*^block*/id)arg1 ;
-(void)_addPointer:(void*)arg1 ;
-(id)_objectAssociatedWithBaseObject:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

