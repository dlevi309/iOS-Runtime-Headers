/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/DisparityV4.bundle/DisparityV4
*/


@protocol MTLComputePipelineState, MTLTexture;
#import <DisparityV4/DisparityV4-Structs.h>
@class FigMetalContext;

@interface Demosaic : NSObject {

	id<MTLComputePipelineState> _pipelineStates[2];
	FigMetalContext* _metalContext;
	SCD_Struct_De23 _metadataParameters;
	id<MTLTexture> _lscGainsTex;
	unsigned _outputImageHeight;

}

@property (assign,nonatomic) unsigned outputImageHeight;              //@synthesize outputImageHeight=_outputImageHeight - In the implementation block
-(id)initWithMetalContext:(id)arg1 ;
-(int)_compileShaders;
-(int)demosaicY:(id)arg1 andUV:(id)arg2 toBGRA:(id)arg3 toYUV:(id)arg4 toY:(id)arg5 toUV:(id)arg6 debugTex:(id)arg7 ;
-(int)fillLSCGainsTextureFrom:(SCD_Struct_De25*)arg1 ;
-(int)demosaic:(id)arg1 toLumaTexture:(id)arg2 toChromaTexture:(id)arg3 ;
-(int)demosaicY:(id)arg1 andUV:(id)arg2 toY:(id)arg3 toUV:(id)arg4 ;
-(int)preProcessMetadata:(id)arg1 cameraInfoByPortType:(id)arg2 ;
-(unsigned)outputImageHeight;
-(void)setOutputImageHeight:(unsigned)arg1 ;
@end

