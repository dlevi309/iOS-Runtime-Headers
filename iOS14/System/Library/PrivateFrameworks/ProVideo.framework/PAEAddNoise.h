/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEAddNoise : PAEFilterDefaultBase
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)parameterChanged:(unsigned)arg1 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA84*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA84*)arg1 inputInfo:(SCD_Struct_PA83)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(id)dynamicPropertiesAtTime:(/*function pointer*/void**)arg1 withError:(id*)arg2 ;
-(BOOL)variesOverTime;
-(HGRef<HGNode>*)translateNode:(HGRef<HGNode>*)arg1 byAmount:(PCVector2<double>)arg2 andCropTo:(HGRect)arg3 ;
-(HGRef<HGNode>*)noiseNodeWithWidth:(int)arg1 height:(int)arg2 noiseType:(int)arg3 isMono:(BOOL)arg4 frameNum:(double)arg5 autoAnimate:(BOOL)arg6 randomSeed:(int)arg7 inputPixelTransform:(PCMatrix44Tmpl<double>)arg8 outputPixelTransform:(PCMatrix44Tmpl<double>)arg9 outputInvPixelTransform:(PCMatrix44Tmpl<double>)arg10 is360:(BOOL)arg11 ;
@end

