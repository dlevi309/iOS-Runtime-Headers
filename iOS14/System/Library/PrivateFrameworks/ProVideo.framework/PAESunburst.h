/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAESunburst : PAEGeneratorDefaultBase
-(id)properties;
-(void)dealloc;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)parameterChanged:(unsigned)arg1 ;
-(id)multiplyMatrix:(id)arg1 byMatrix:(id)arg2 ;
-(void)getTransformMatrix:(double*)arg1 forCenterX:(double)arg2 centerY:(double)arg3 angle:(double)arg4 andOutputImage:(id)arg5 ;
-(BOOL)variesOverTime;
-(BOOL)frameSetup:(SCD_Struct_PA84*)arg1 hardware:(BOOL*)arg2 software:(BOOL*)arg3 ;
-(BOOL)frameCleanup;
-(BOOL)canThrowRenderOutput:(id)arg1 withInfo:(SCD_Struct_PA84*)arg2 ;
@end

