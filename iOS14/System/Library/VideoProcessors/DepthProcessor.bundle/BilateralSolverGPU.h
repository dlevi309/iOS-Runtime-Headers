/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
*/


@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;
#import <DepthProcessor/DepthProcessor-Structs.h>
@class FigMetalContext;

@interface BilateralSolverGPU : NSObject {

	FigMetalContext* _metalContext;
	id<MTLComputePipelineState> _computePipelines[9];
	SCD_Struct_Bi10 _threadGroupInfo;
	SCD_Struct_Bi11 _params;
	unsigned _width;
	unsigned _height;
	unsigned long long _maxVertices;
	id<MTLBuffer> _gridHashBuffer;
	id<MTLBuffer> _gridBlurBuffer;
	id<MTLBuffer> _gridCoordIndicesBuffer;
	id<MTLBuffer> _gridCoordTableBuffer;
	id<MTLTexture> _gridHashMatrix;
	id<MTLBuffer> _gridInterpIndicesBuffer;
	id<MTLBuffer> _gridInterpTableBuffer;
	id<MTLBuffer> _gridInterpPadBuffer;
	id<MTLBuffer> _A_buf;
	id<MTLBuffer> _b_buf;
	id<MTLBuffer> _s_buf;
	id<MTLBuffer> _q_buf;
	id<MTLBuffer> _Dn_buf[2];
	id<MTLBuffer> _x_buf[2];
	id<MTLBuffer> _r_buf[2];
	id<MTLBuffer> _d_buf[2];
	int _idxDnBufIn;
	int _idxSwapBufIn;
	BOOL _useTrilinearInterpolation;

}

@property (assign,nonatomic) BOOL useTrilinearInterpolation;              //@synthesize useTrilinearInterpolation=_useTrilinearInterpolation - In the implementation block
-(void)_setupPipelines;
-(BOOL)useTrilinearInterpolation;
-(void)setUseTrilinearInterpolation:(BOOL)arg1 ;
-(void)_setupBuffer;
-(void)_prepareResources:(id)arg1 ;
-(int)_doSliceTrilinearWithCommandBuffer:(id)arg1 ref_tex:(id)arg2 o_tex:(id)arg3 ;
-(int)_doPCGWithCommandBuffer:(id)arg1 nIterations:(int)arg2 ;
-(int)_doSliceWithCommandBuffer:(id)arg1 o_tex:(id)arg2 ;
-(int)_doBistochastizeWithCommandBuffer:(id)arg1 t_tex:(id)arg2 c_tex:(id)arg3 nIterations:(int)arg4 ;
-(id)initWithWidth:(unsigned)arg1 height:(unsigned)arg2 maxVertices:(unsigned long long)arg3 metalContext:(id)arg4 ;
-(int)doSolveWithBilateralGridhash:(id)arg1 reference:(id)arg2 input:(id)arg3 confidence:(id)arg4 output:(id)arg5 lambda:(float)arg6 maxIterations:(int)arg7 ;
@end

