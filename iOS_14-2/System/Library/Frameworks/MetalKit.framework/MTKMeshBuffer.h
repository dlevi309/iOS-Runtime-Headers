/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
*/

#import <MetalKit/MetalKit-Structs.h>
#import <libobjc.A.dylib/MDLMeshBuffer.h>
#import <libobjc.A.dylib/MDLNamed.h>

@protocol MTLBuffer;
@class NSString, MTKMeshBufferZone, MTKMeshBufferAllocator;

@interface MTKMeshBuffer : NSObject <MDLMeshBuffer, MDLNamed> {

	MTKMeshBufferZone* _zone;
	unsigned long long _length;
	MTKMeshBufferAllocator* _allocator;
	id<MTLBuffer> _buffer;
	unsigned long long _offset;
	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long length;                       //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) MTKMeshBufferAllocator * allocator;              //@synthesize allocator=_allocator - In the implementation block
@property (nonatomic,readonly) id<MDLMeshBufferZone> zone;                      //@synthesize zone=_zone - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> buffer;                            //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                       //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name; 
-(id<MDLMeshBufferZone>)zone;
-(unsigned long long)length;
-(NSString *)name;
-(unsigned long long)offset;
-(id<MTLBuffer>)buffer;
-(id)map;
-(void)fillData:(id)arg1 offset:(unsigned long long)arg2 ;
-(unsigned long long)type;
-(void)setName:(NSString *)arg1 ;
-(id)_newMap;
-(MTKMeshBufferAllocator *)allocator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)_initWithLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 zone:(id)arg3 type:(unsigned long long)arg4 ;
-(id)_initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 offset:(unsigned long long)arg3 allocator:(id)arg4 zone:(id)arg5 type:(unsigned long long)arg6 ;
-(id)_initWithLength:(unsigned long long)arg1 allocator:(id)arg2 type:(unsigned long long)arg3 ;
-(id)_initWithData:(id)arg1 allocator:(id)arg2 type:(unsigned long long)arg3 ;
@end

