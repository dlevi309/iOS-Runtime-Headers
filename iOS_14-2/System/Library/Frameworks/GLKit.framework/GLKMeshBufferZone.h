/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)capacity;
-(id<MDLMeshBufferAllocator>)allocator;
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 allocator:(id)arg2 ;
-(id)newBufferWithLength:(unsigned long long)arg1 type:(unsigned long long)arg2 ;
-(void)destroyBuffer:(id)arg1 ;
-(unsigned)glBufferName;
@end

