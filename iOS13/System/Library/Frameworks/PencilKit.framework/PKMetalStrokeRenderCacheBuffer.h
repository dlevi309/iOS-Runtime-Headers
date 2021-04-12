/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)offset;
-(id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 numVertices:(unsigned long long)arg3 ;
-(id<MTLBuffer>)vertexBuffer;
-(BOOL)lockPurgeableResourcesAddToSet:(id)arg1 ;
-(unsigned long long)numVertices;
@end

