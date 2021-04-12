/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLBuffer;
#import <UB/UB-Structs.h>
@class FigMetalContext, PyramidStorage, RegPyrFusionResources, RegPyrFusionShaders;

@interface RegPyrFusion : NSObject {

	FigMetalContext* _metal;
	PyramidStorage* _refPyramid;
	PyramidStorage* _nonRefPyramid;
	id<MTLBuffer> _pyrHomographyTeleIsRef[20];
	id<MTLBuffer> _pyrHomographyWideIsRef[20];
	RegPyrFusionResources* _resources;
	RegPyrFusionShaders* _shaders;
	SCD_Struct_Re35* _teleIsRefCalibData;
	SCD_Struct_Re35* _wideIsRefCalibData;
	id<MTLBuffer> _pyrScaleParamLevel0[2];
	id<MTLBuffer> _pyrRoiScaleLevel0[2];
	id<MTLBuffer> _pyrScaleParams[20];

}

@property (nonatomic,readonly) id<MTLTexture> shiftMap; 
@property (nonatomic,readonly) id<MTLTexture> confidenceMap; 
+(int)prewarmShaders:(id)arg1 ;
+(void)prewarmRenderers:(id)arg1 ;
+(void)calculatePyramidDimensions:(float)arg1 pyrWidths:(int*)arg2 pyrHeights:(int*)arg3 topLevelIndex:(int)arg4 maxDim:(int)arg5 minDim:(int)arg6 ;
-(id)initWithMetalContext:(id)arg1 ;
-(id<MTLTexture>)shiftMap;
-(id<MTLTexture>)confidenceMap;
-(int)setResourcesWithRefPyramid:(id)arg1 nonRefPyramid:(id)arg2 resources:(id)arg3 ;
-(int)registerImagesWithReferenceCam:(int)arg1 calibInfo:(SCD_Struct_Re39*)arg2 ;
-(id)create2DTextureFromBuffer:(id)arg1 offset:(unsigned long long)arg2 descriptor:(id)arg3 ;
-(id)textureFromIOSurfaceOrBuffer:(id)arg1 texDesc:(id)arg2 offset:(unsigned long long)arg3 ;
-(void)scaleHomographyUsingCalib:(SCD_Struct_Re35*)arg1 to:(id*)arg2 ;
-(int)setupPyramidScalersUsingCalib;
-(int)initialDownScaleWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 refTex:(id)arg3 nonRefTex:(id)arg4 refTexOut:(id)arg5 nonRefTexOut:(id)arg6 refCamType:(int)arg7 ;
-(int)bilinearScaleWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 refTexIn:(id)arg3 refTexOut:(id)arg4 nonRefTexIn:(id)arg5 nonRefTexOut:(id)arg6 pyrLevel:(int)arg7 ;
-(int)clearTextureWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 outputTex:(id)arg3 ;
-(int)generateDerivativesWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 inputTex:(id)arg3 sobelOutput:(id)arg4 derivInput:(id)arg5 outputTex:(id)arg6 ;
-(int)basicSearchWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 refDerivTex:(id)arg3 nonRefDerivTex:(id)arg4 prevShiftMap:(id)arg5 nextShiftMap:(id)arg6 homography:(id)arg7 pyrLevel:(int)arg8 ;
-(int)smoothShiftMapWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 input:(id)arg3 output:(id)arg4 ;
-(int)selectionWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 refDerivTex:(id)arg3 nonRefDerivTex:(id)arg4 prevShiftMap:(id)arg5 nextShiftMap:(id)arg6 homography:(id)arg7 pyrLevel:(int)arg8 ;
-(int)fusionWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 refTex:(id)arg3 refDerivTex:(id)arg4 nonRefDerivTex:(id)arg5 prevShiftMap:(id)arg6 shiftMapWeight:(id)arg7 nextShiftMap:(id)arg8 homography:(id)arg9 pyrLevel:(int)arg10 ;
-(int)confidenceMapWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 prevShiftMap:(id)arg3 confidenceOut:(id)arg4 confidenceErodeIn:(id)arg5 confidenceErodeOut:(id)arg6 confidenceDilateIn:(id)arg7 confidenceDilateOut:(id)arg8 ;
@end

