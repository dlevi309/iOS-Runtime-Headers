/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEZoomBlur : PAEFilterDefaultBase {

	double _upscaleFactor;

}
-(void)dealloc;
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA79*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA79*)arg1 inputInfo:(SCD_Struct_PA80)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(id)dynamicPropertiesAtTime:(/*function pointer*/void**)arg1 withError:(id*)arg2 ;
-(BOOL)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInput:(SCD_Struct_PA80)arg3 withInfo:(SCD_Struct_PA79*)arg4 ;
-(BOOL)parameterChanged:(unsigned)arg1 ;
-(void)constrainWidth:(unsigned long long*)arg1 andHeight:(unsigned long long*)arg2 withImageInfo:(SCD_Struct_PA80)arg3 ;
-(void)polarToRect:(id)arg1 withInputImage:(id)arg2 withInputNode:(HGRef<HGNode>*)arg3 centerX:(double)arg4 centerY:(double)arg5 andOutputNode:(HGRef<HGNode>*)arg6 ;
-(void)rectToPolar:(id)arg1 withInputImage:(id)arg2 withInputNode:(HGRef<HGNode>*)arg3 centerX:(double)arg4 centerY:(double)arg5 andOutputNode:(HGRef<HGGLBlend>*)arg6 ;
@end

