/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


#import <PencilKit/PencilKit-Structs.h>
@class PKMetalBuffer;

@interface PKMetalPaintRenderCacheBuffer : NSObject {

	PKMetalBuffer* _pkUniformsBuffer;
	PKMetalBuffer* _pkStrokePointBuffer;
	unsigned long long _uniformsBufferOffset;
	unsigned long long _strokePointBufferOffset;
	unsigned long long _numVertices;
	unsigned long long _numPoints;

}

@property (nonatomic,readonly) id<MTLBuffer> uniformsBuffer; 
@property (nonatomic,readonly) unsigned long long uniformsBufferOffset;                 //@synthesize uniformsBufferOffset=_uniformsBufferOffset - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> strokePointBuffer; 
@property (nonatomic,readonly) unsigned long long strokePointBufferOffset;              //@synthesize strokePointBufferOffset=_strokePointBufferOffset - In the implementation block
@property (nonatomic,readonly) unsigned long long numVertices;                          //@synthesize numVertices=_numVertices - In the implementation block
@property (nonatomic,readonly) unsigned long long numPoints;                            //@synthesize numPoints=_numPoints - In the implementation block
-(id)init;
-(unsigned long long)numVertices;
-(unsigned long long)numPoints;
-(BOOL)lockPurgeableResourcesAddToSet:(id)arg1 ;
-(id<MTLBuffer>)uniformsBuffer;
-(id<MTLBuffer>)strokePointBuffer;
-(unsigned long long)uniformsBufferOffset;
-(unsigned long long)strokePointBufferOffset;
-(id)initWithUniforms:(const PKMetalPaintKernelUniforms*)arg1 points:(const PKMetalPaintStrokePoint*)arg2 numPoints:(unsigned long long)arg3 numVertices:(unsigned long long)arg4 resourceHandler:(id)arg5 ;
@end

