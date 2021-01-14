/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEEarthquake : PAEFilterDefaultBase
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA84*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA84*)arg1 inputInfo:(SCD_Struct_PA83)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(void)getEdgeMode:(unsigned*)arg1 withInfo:(SCD_Struct_PA84*)arg2 ;
-(BOOL)variesOverTime;
-(HGRef<HGNode>*)quakeHeliumNodeWithInputImage:(HGRef<HGNode>*)arg1 inputImage:(id)arg2 outputImage:(id)arg3 renderInfo:(SCD_Struct_PA84*)arg4 twist:(float)arg5 horizontalShake:(float)arg6 verticalShake:(float)arg7 layers:(float)arg8 centerX:(float)arg9 centerY:(float)arg10 randomSeed:(int)arg11 ;
@end

