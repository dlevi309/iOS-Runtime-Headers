/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEBloom : PAEFilterDefaultBase
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA79*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA79*)arg1 inputInfo:(SCD_Struct_PA80)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(id)dynamicPropertiesAtTime:(/*function pointer*/void**)arg1 withError:(id*)arg2 ;
-(BOOL)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInput:(SCD_Struct_PA80)arg3 withInfo:(SCD_Struct_PA79*)arg4 ;
-(BOOL)bloomHeliumRender:(id)arg1 withInput:(id)arg2 withRadius:(double)arg3 withBrightness:(double)arg4 withThreshold:(double)arg5 doDarkBloom:(BOOL)arg6 withXScale:(double)arg7 withYScale:(double)arg8 withDoCrop:(BOOL)arg9 withDoClip:(BOOL)arg10 is360:(BOOL)arg11 withInfo:(SCD_Struct_PA79*)arg12 ;
-(BOOL)parameterChanged:(unsigned)arg1 ;
@end

