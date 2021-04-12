/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)lockPurgeableResourcesAddToSet:(id)arg1 ;
-(unsigned long long)numVertices;
-(id<MTLBuffer>)uniformsBuffer;
-(id<MTLBuffer>)strokePointBuffer;
-(unsigned long long)uniformsBufferOffset;
-(unsigned long long)strokePointBufferOffset;
-(unsigned long long)numPoints;
-(id)initWithUniforms:(const PKMetalPaintKernelUniforms*)arg1 points:(const PKMetalPaintStrokePoint*)arg2 numPoints:(unsigned long long)arg3 numVertices:(unsigned long long)arg4 resourceHandler:(id)arg5 ;
@end

