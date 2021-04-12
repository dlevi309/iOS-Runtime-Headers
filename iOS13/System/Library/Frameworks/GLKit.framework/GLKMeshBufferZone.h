/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
*/

#import <libobjc.A.dylib/MDLMeshBufferZone.h>

@class NSMutableOrderedSet, GLKMeshBufferAllocator, NSString;

@interface GLKMeshBufferZone : NSObject <MDLMeshBufferZone> {

	NSMutableOrderedSet* _buffers;
	BOOL _destroyInvoked;
	GLKMeshBufferAllocator* _allocator;
	unsigned _glBufferName;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) unsigned long long capacity;                       //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) id<MDLMeshBufferAllocator> allocator;              //@synthesize allocator=_allocator - In the implementation block
@property (nonatomic,readonly) unsigned glBufferName;                             //@synthesize glBufferName=_glBufferName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)capacity;
-(id<MDLMeshBufferAllocator>)allocator;
-(id)initWithCapacity:(unsigned long long)arg1 allocator:(id)arg2 ;
-(id)newBufferWithLength:(unsigned long long)arg1 type:(unsigned long long)arg2 ;
-(void)destroyBuffer:(id)arg1 ;
-(unsigned)glBufferName;
@end

