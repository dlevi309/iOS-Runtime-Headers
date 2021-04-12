/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@protocol MTLTexture, MTLBuffer;
#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
@class FigMetalContext, BilateralGridShaders;

@interface BilateralGrid : NSObject {

	id<MTLTexture> _grid_tex;
	id<MTLBuffer> _uniforms;
	FigMetalContext* _metal;
	BilateralGridShaders* _shaders;
	BOOL _normalizeGridConfidence;
	int _space_sigma;
	float _range_sigma;
	unsigned long long _input_width;
	unsigned long long _input_height;
	int _grid_width;
	int _grid_height;
	int _grid_depth;
	id<MTLTexture> _tmp_grid_tex;
	id<MTLBuffer> _max_grid_confidence;
	id<MTLTexture> _bistochast_m_tex;
	id<MTLTexture> _bistochast_n_tex;
	id<MTLTexture> _A_tex;
	id<MTLTexture> _x0_tex;
	id<MTLTexture> _x1_tex;
	id<MTLTexture> _residual0_tex;
	id<MTLTexture> _residual1_tex;
	id<MTLTexture> _confidence_solved_tex;
	id<MTLTexture> _d0_tex;
	id<MTLTexture> _d1_tex;
	id<MTLTexture> _q_tex;
	id<MTLBuffer> _l0_buf;
	id<MTLBuffer> _l1_buf;
	id<MTLBuffer> _alpha_buf;
	id<MTLBuffer> _residual_buf;
	id<MTLBuffer> _hasconverged_buf;

}
+(int)prewarmShaders:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)releaseResources;
-(void)dealloc;
-(id)initWithContext:(id)arg1 normalizeGridConfidence:(BOOL)arg2 ;
-(int)config:(unsigned long long)arg1 height:(unsigned long long)arg2 space_sigma:(int)arg3 range_sigma:(float)arg4 solver:(BilateralSolverConfiguration)arg5 ;
-(id)allocGridTexture:(unsigned long long)arg1 ;
-(int)solverfilterWithGuide:(id)arg1 target:(id)arg2 confidence:(id)arg3 ltc_tex:(id)arg4 gtcRatio_tex:(id)arg5 gtcFinal_tex:(id)arg6 ltmROI:(id)arg7 ;
-(int)buildWithGuideAndConfidence:(id)arg1 target:(id)arg2 confidence:(id)arg3 grid_tex:(id)arg4 ltc_tex:(id)arg5 gtcRatio_tex:(id)arg6 gtcFinal_tex:(id)arg7 ;
-(int)solverBistochastize:(int)arg1 ;
-(id)solverPcg:(int)arg1 ;
-(int)blurAndNormalize:(id)arg1 grid_tmp_tex:(id)arg2 ;
-(int)upsample:(id)arg1 grid_tex:(id)arg2 conf_tex:(id)arg3 ltc_tex:(id)arg4 gtcRatio_tex:(id)arg5 gtcFinal_tex:(id)arg6 ltmROI:(id)arg7 ;
-(int)solverfilter:(CVBufferRef)arg1 target:(CVBufferRef)arg2 confidence:(CVBufferRef)arg3 output:(CVBufferRef)arg4 ;
-(int)allocateResourcesWithConfiguration:(BilateralGridConfiguration*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 ;
-(int)filter:(id)arg1 output:(id)arg2 ;
-(int)solverfilterWithGuide:(id)arg1 target:(id)arg2 confidence:(id)arg3 output:(id)arg4 ;
-(int)jointfilter:(CVBufferRef)arg1 target:(CVBufferRef)arg2 output:(CVBufferRef)arg3 ;
@end

