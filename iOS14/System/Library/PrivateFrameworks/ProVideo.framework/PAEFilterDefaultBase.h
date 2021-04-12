/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAESharedDefaultBase.h>
#import <libobjc.A.dylib/FxFilter.h>

@interface PAEFilterDefaultBase : PAESharedDefaultBase <FxFilter>
-(BOOL)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInput:(SCD_Struct_PA83)arg3 withInfo:(SCD_Struct_PA84*)arg4 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA84*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA84*)arg1 inputInfo:(SCD_Struct_PA83)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(id)getParamErrorFor:(id)arg1 ;
-(HGRef<HGNode>*)makePrescaledBlurNode:(HGRef<HGNode>*)arg1 radius:(float)arg2 withScale:(PCVector2<float>)arg3 minInputScale:(float)arg4 maxInputScale:(float)arg5 ;
-(id)getParamAPIWithError:(id*)arg1 ;
-(BOOL)getInputBitmap:(id*)arg1 withInfo:(SCD_Struct_PA84*)arg2 atTime:(/*function pointer*/void**)arg3 withROI:(HGRect*)arg4 ;
-(BOOL)getInputBitmap:(id*)arg1 withInfo:(SCD_Struct_PA84*)arg2 atTime:(/*function pointer*/void**)arg3 appendHGGraph:(HGRef<HGNode>*)arg4 ;
-(HGRef<HGNode>*)preScaleDown:(float)arg1 withOutputRadius:(float*)arg2 withOutputScaleFactor:(float*)arg3 withInput:(HGRef<HGNode>*)arg4 minInputScale:(float)arg5 maxInputScale:(float)arg6 ;
-(HGRef<HGNode>*)preScaleUp:(float)arg1 withInput:(HGRef<HGNode>*)arg2 ;
-(BOOL)renderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA84*)arg3 ;
@end

