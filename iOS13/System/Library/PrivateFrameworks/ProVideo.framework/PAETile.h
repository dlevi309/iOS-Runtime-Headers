/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAETile : PAEFilterDefaultBase
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA79*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA79*)arg1 inputInfo:(SCD_Struct_PA80)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(void)getEdgeMode:(unsigned*)arg1 withInfo:(SCD_Struct_PA79*)arg2 ;
-(HGRef<HGNode>*)transformAndTile:(HGRef<HGNode>*)arg1 withXValue:(double)arg2 YValue:(double)arg3 skew:(double)arg4 scale:(double)arg5 stretch:(double)arg6 rotation:(double)arg7 resolution:(PCVector2<double>)arg8 inputImage:(id)arg9 ;
-(void)_compute_2x2_matrix:(float*)arg1 withScale:(float)arg2 angle:(float)arg3 skew:(float)arg4 stretch:(float)arg5 ;
-(void)retrieveXValue:(double*)arg1 YValue:(double*)arg2 skew:(double*)arg3 scale:(double*)arg4 stretch:(double*)arg5 rotation:(double*)arg6 forOutputImage:(id)arg7 withRenderInfo:(SCD_Struct_PA79*)arg8 ;
@end

