/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEGlow : PAEFilterDefaultBase
-(id)properties;
-(void)dealloc;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInput:(SCD_Struct_PA83)arg3 withInfo:(SCD_Struct_PA84*)arg4 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA84*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA84*)arg1 inputInfo:(SCD_Struct_PA83)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(id)dynamicPropertiesAtTime:(/*function pointer*/void**)arg1 withError:(id*)arg2 ;
-(HGRef<HGNode>*)get360BlurNode:(HGRef<HGNode>*)arg1 withInputImage:(id)arg2 outputImage:(id)arg3 blurRadius:(double)arg4 blurScale:(PCVector2<double>)arg5 ;
-(HGRef<HGNode>*)getPlanarBlurNode:(HGRef<HGNode>*)arg1 withInputImage:(id)arg2 outputImage:(id)arg3 blurRadius:(double)arg4 blurScale:(PCVector2<double>)arg5 ;
-(HGRef<HGNode>*)getBlurNode:(HGRef<HGNode>*)arg1 withInputImage:(id)arg2 outputImage:(id)arg3 blurRadius:(double)arg4 blurScale:(PCVector2<double>)arg5 is360:(BOOL)arg6 ;
@end

