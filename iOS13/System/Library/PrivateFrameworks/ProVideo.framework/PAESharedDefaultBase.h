/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol PROAPIAccessing;
#import <ProVideo/ProVideo-Structs.h>
@interface PAESharedDefaultBase : NSObject {

	id<PROAPIAccessing> _apiManager;
	BOOL _upscalesFields;
	BOOL _hostIsFinalCutPro;
	BOOL _hostIsVertigo;
	BOOL _ignorePixelAspectRatio;

}
-(void)dealloc;
-(id)properties;
-(double)frameRate;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(int)getRenderMode:(/*function pointer*/void**)arg1 ;
-(PCMatrix44Tmpl<double>)getInversePixelTransformForImage:(id)arg1 ;
-(PCMatrix44Tmpl<double>)getPixelTransformForImage:(id)arg1 ;
-(PCVector2<double>)convertRelativeToPixelCoordinates:(const PCVector2<double>*)arg1 withImage:(id)arg2 ;
-(void)overrideFrameSetupForRenderMode:(SCD_Struct_PA79*)arg1 hardware:(BOOL*)arg2 software:(BOOL*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA79*)arg1 inputInfo:(SCD_Struct_PA80)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(BOOL)getPoint:(PCVector2<double>*)arg1 fromParm:(unsigned)arg2 atTime:(/*function pointer*/void**)arg3 withImage:(id)arg4 ;
-(PCVector2<double>)getScaleForImage:(id)arg1 ;
-(BOOL)getHeliumImage:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(SCD_Struct_PA79*)arg4 fromParm:(int)arg5 atTime:(/*function pointer*/void**)arg6 ;
-(void)transform:(HGRef<HGNode>*)arg1 fromImage:(id)arg2 toImage:(id)arg3 fit:(BOOL)arg4 ;
-(void)crop:(HGRef<HGNode>*)arg1 fromImage:(id)arg2 toImage:(id)arg3 ;
-(PCRect<float>)getImageBoundary:(id)arg1 ;
-(HGRef<HGNode>*)smear:(HGRef<HGNode>*)arg1 fromImage:(id)arg2 toImage:(id)arg3 ;
-(BOOL)variesOverTime;
-(BOOL)frameCleanup;
-(float)getBlendingGamma;
-(HGRef<HGNode>*)transformFromImage:(id)arg1 toImage:(id)arg2 fit:(BOOL)arg3 ;
-(void)setIgnoresPixelAspectRatio:(BOOL)arg1 ;
-(PCVector2<double>)convertRelativeToImageCoordinates:(const PCVector2<double>*)arg1 withImage:(id)arg2 ;
-(double)secondsFromFxTime:(/*function pointer*/void**)arg1 ;
-(HGRef<HGNode>*)changeDOD:(HGRef<HGNode>*)arg1 withRect:(const PCRect<double>*)arg2 ;
-(BOOL)getHeliumImage:(id*)arg1 source:(BOOL)arg2 withInfo:(SCD_Struct_PA79*)arg3 atTime:(/*function pointer*/void**)arg4 ;
-(double)frameFromFxTime:(/*function pointer*/void**)arg1 forPlugIn:(id)arg2 ;
-(double)relativeShutterForAngle:(double)arg1 ;
-(PCRect<float>)getCropRectFromImage:(id)arg1 toImage:(id)arg2 ;
-(BOOL)getCropRectFromImage:(id)arg1 toImage:(id)arg2 output:(PCRect<float>*)arg3 ;
-(void)crop:(HGRef<HGNode>*)arg1 withRect:(PCRect<float>)arg2 ;
-(HGRef<HGNode>*)cropFromImage:(id)arg1 toImage:(id)arg2 ;
-(BOOL)smear:(HGRef<HGNode>*)arg1 fromImage:(id)arg2 toImage:(id)arg3 resultNode:(HGRef<HGNode>*)arg4 ;
-(BOOL)ignoresPixelAspectRatio;
-(void)fxTime:(/*function pointer*/void**)arg1 fromFrame:(double)arg2 forPlugIn:(id)arg3 ;
@end
