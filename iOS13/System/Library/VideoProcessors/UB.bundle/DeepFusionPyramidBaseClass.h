/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@class FigMetalContext, DeepFusionLaplacianPyramidShaders, NSMutableArray;

@interface DeepFusionPyramidBaseClass : NSObject {

	FigMetalContext* _metal;
	DeepFusionLaplacianPyramidShaders* _shaders;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _pixelFormat;
	unsigned long long _numLevels;
	unsigned long long _minTexAlignment;
	unsigned long long _pixelBytes;
	NSMutableArray* _outputTextures;

}
+(int)prewarmShaders:(id)arg1 ;
-(id)initWithMetalContext:(id)arg1 ;
-(void)purgeResources;
-(unsigned long long)_strideForWidth:(unsigned long long)arg1 ;
-(int)_computeScratchBufferSizeForTextures:(unsigned long long)arg1 requiredSize:(unsigned long long*)arg2 ;
-(int)computeScratchBufferSize:(unsigned long long*)arg1 ;
-(int)_bindBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(id)outputTextureArray;
-(int)setWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 numLevels:(unsigned long long)arg4 ;
-(int)allocateResourcesUsingScratchBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
@end

