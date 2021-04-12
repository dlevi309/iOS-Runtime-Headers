/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEEquirectProjectFilter : PAEFilterDefaultBase
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA79*)arg3 ;
-(BOOL)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInput:(SCD_Struct_PA80)arg3 withInfo:(SCD_Struct_PA79*)arg4 ;
-(void)getQuaternion:(/*function pointer*/void**)arg1 :(double*)arg2 :(double*)arg3 :(double*)arg4 :(double*)arg5 ;
-(double)getInitialYaw:(/*function pointer*/void**)arg1 ;
-(BOOL)getIsFrontFacing:(/*function pointer*/void**)arg1 ;
-(void)getProjectionFOVYDegrees:(float*)arg1 FOVXDegrees:(float*)arg2 withFrameAspect:(double)arg3 atTime:(/*function pointer*/void**)arg4 ;
-(PCMatrix44Tmpl<double>)composeViewMatrix:(/*function pointer*/void**)arg1 withCameraBehavior:(int)arg2 heroAngle:(double)arg3 ;
-(HGEquirectProjectParams)getParams:(SCD_Struct_PA79*)arg1 withOutputImage:(id)arg2 inputImage:(id)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 outputWidth:(unsigned long long)arg6 outputHeight:(unsigned long long)arg7 xRotation:(double)arg8 yRotation:(double)arg9 zRotation:(double)arg10 cameraBehavior:(int)arg11 paramAPI:(id)arg12 ;
-(void)getEdgeMode:(unsigned*)arg1 withInfo:(SCD_Struct_PA79*)arg2 ;
-(BOOL)variesOverTime;
-(BOOL)frameSetup:(SCD_Struct_PA79*)arg1 hardware:(BOOL*)arg2 software:(BOOL*)arg3 ;
-(PCMatrix44Tmpl<double>)getViewMatrix:(/*function pointer*/void**)arg1 ;
-(double)convertToFOVYFromFOVX:(double)arg1 width:(double)arg2 height:(double)arg3 ;
-(double)convertToFOVXFromFOVY:(double)arg1 width:(double)arg2 height:(double)arg3 ;
-(BOOL)frameCleanup;
@end

