/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class PKMetalBuffer;

@interface PKMetalStrokeRenderCacheBuffer : NSObject {

	PKMetalBuffer* _buffer;
	unsigned long long _offset;
	unsigned long long _numVertices;

}

@property (nonatomic,readonly) unsigned long long offset;                   //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long numVertices;              //@synthesize numVertices=_numVertices - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> vertexBuffer; 
-(id)init;
-(id<MTLBuffer>)vertexBuffer;
-(unsigned long long)offset;
-(unsigned long long)numVertices;
-(id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 numVertices:(unsigned long long)arg3 ;
-(BOOL)lockPurgeableResourcesAddToSet:(id)arg1 ;
@end

