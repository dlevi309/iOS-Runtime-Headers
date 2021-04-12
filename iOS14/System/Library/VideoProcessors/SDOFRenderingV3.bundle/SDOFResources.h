/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/SDOFRenderingV3.bundle/SDOFRenderingV3
*/


@protocol MTLBuffer, MTLTexture;
@class FigMetalContext;

@interface SDOFResources : NSObject {

	id<MTLBuffer> _halfResRGBABuffer1;
	id<MTLBuffer> _halfResRGBABuffer2;
	int _referenceCount;
	int _activeCount;
	FigMetalContext* _metalContext;
	unsigned long long _inputImageWidth;
	unsigned long long _inputImageHeight;
	unsigned long long _shiftMapWidth;
	unsigned long long _shiftMapHeight;
	id<MTLTexture> _disparityRefinement_weightsX_tex;
	id<MTLTexture> _disparityRefinement_weightsY_tex;
	id<MTLTexture> _disparityRefinement_sampledD_tex;
	id<MTLTexture> _disparityRefinement_preproc_tex;
	id<MTLTexture> _disparityRefinement_blurmap_tex;
	id<MTLTexture> _faceMask_adjBlurmap_tex;
	id<MTLTexture> _blurMapSmoothing_intermediate_tex;
	id<MTLTexture> _blurMapSmoothing_result_tex;
	id<MTLBuffer> _slm_mapping_buf;
	id<MTLBuffer> _rendering_xhlrbProcessList_buf;
	id<MTLTexture> _rendering_halfResRGBA1_tex;
	id<MTLTexture> _rendering_halfResRGBA2_tex;
	id<MTLTexture> _rendering_halfResRGBAsRGB1_texalias;
	id<MTLTexture> _rendering_halfResRGBAsRGB2_texalias;
	id<MTLTexture> _rendering_halfResRG_tex;

}

@property (nonatomic,readonly) FigMetalContext * metalContext;                                  //@synthesize metalContext=_metalContext - In the implementation block
@property (nonatomic,readonly) int referenceCount;                                              //@synthesize referenceCount=_referenceCount - In the implementation block
@property (nonatomic,readonly) int activeCount;                                                 //@synthesize activeCount=_activeCount - In the implementation block
@property (nonatomic,readonly) unsigned long long inputImageWidth;                              //@synthesize inputImageWidth=_inputImageWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long inputImageHeight;                             //@synthesize inputImageHeight=_inputImageHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long shiftMapWidth;                                //@synthesize shiftMapWidth=_shiftMapWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long shiftMapHeight;                               //@synthesize shiftMapHeight=_shiftMapHeight - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> disparityRefinement_weightsX_tex;                 //@synthesize disparityRefinement_weightsX_tex=_disparityRefinement_weightsX_tex - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> disparityRefinement_weightsY_tex;                 //@synthesize disparityRefinement_weightsY_tex=_disparityRefinement_weightsY_tex - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> disparityRefinement_sampledD_tex;                 //@synthesize disparityRefinement_sampledD_tex=_disparityRefinement_sampledD_tex - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> disparityRefinement_preproc_tex;                  //@synthesize disparityRefinement_preproc_tex=_disparityRefinement_preproc_tex - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> disparityRefinement_blurmap_tex;                  //@synthesize disparityRefinement_blurmap_tex=_disparityRefinement_blurmap_tex - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> faceMask_adjBlurmap_tex;                          //@synthesize faceMask_adjBlurmap_tex=_faceMask_adjBlurmap_tex - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> blurMapSmoothing_intermediate_tex;                //@synthesize blurMapSmoothing_intermediate_tex=_blurMapSmoothing_intermediate_tex - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> blurMapSmoothing_result_tex;                      //@synthesize blurMapSmoothing_result_tex=_blurMapSmoothing_result_tex - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> slm_mapping_buf;                                   //@synthesize slm_mapping_buf=_slm_mapping_buf - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> rendering_xhlrbProcessList_buf;                    //@synthesize rendering_xhlrbProcessList_buf=_rendering_xhlrbProcessList_buf - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> rendering_halfResRGBA1_tex;                       //@synthesize rendering_halfResRGBA1_tex=_rendering_halfResRGBA1_tex - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> rendering_halfResRGBA2_tex;                       //@synthesize rendering_halfResRGBA2_tex=_rendering_halfResRGBA2_tex - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> rendering_halfResRGBAsRGB1_texalias;              //@synthesize rendering_halfResRGBAsRGB1_texalias=_rendering_halfResRGBAsRGB1_texalias - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> rendering_halfResRGBAsRGB2_texalias;              //@synthesize rendering_halfResRGBAsRGB2_texalias=_rendering_halfResRGBAsRGB2_texalias - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> rendering_halfResRG_tex;                          //@synthesize rendering_halfResRG_tex=_rendering_halfResRG_tex - In the implementation block
+(id)sharedInstance;
-(void)deallocateResources;
-(int)activeCount;
-(unsigned long long)inputImageWidth;
-(unsigned long long)inputImageHeight;
-(FigMetalContext *)metalContext;
-(int)referenceCount;
-(void)clearInstance;
-(id)initInstance;
-(int)allocateResourcesUsingMetalContext:(id)arg1 inputImageWidth:(unsigned long long)arg2 inputImageHeight:(unsigned long long)arg3 shiftMapWidth:(unsigned long long)arg4 shiftMapHeight:(unsigned long long)arg5 ;
-(BOOL)activateResources;
-(void)deactivateResources;
-(unsigned long long)shiftMapWidth;
-(unsigned long long)shiftMapHeight;
-(id<MTLTexture>)disparityRefinement_weightsX_tex;
-(id<MTLTexture>)disparityRefinement_weightsY_tex;
-(id<MTLTexture>)disparityRefinement_sampledD_tex;
-(id<MTLTexture>)disparityRefinement_preproc_tex;
-(id<MTLTexture>)disparityRefinement_blurmap_tex;
-(id<MTLTexture>)faceMask_adjBlurmap_tex;
-(id<MTLTexture>)blurMapSmoothing_intermediate_tex;
-(id<MTLTexture>)blurMapSmoothing_result_tex;
-(id<MTLBuffer>)slm_mapping_buf;
-(id<MTLBuffer>)rendering_xhlrbProcessList_buf;
-(id<MTLTexture>)rendering_halfResRGBA1_tex;
-(id<MTLTexture>)rendering_halfResRGBA2_tex;
-(id<MTLTexture>)rendering_halfResRGBAsRGB1_texalias;
-(id<MTLTexture>)rendering_halfResRGBAsRGB2_texalias;
-(id<MTLTexture>)rendering_halfResRG_tex;
@end

