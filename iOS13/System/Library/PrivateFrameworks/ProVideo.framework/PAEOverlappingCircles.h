/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAEOverlappingCircles : PAEGeneratorDefaultBase
-(void)dealloc;
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(id)multiplyMatrix:(id)arg1 byMatrix:(id)arg2 ;
-(void)getTransformMatrix:(double*)arg1 forCenterX:(double)arg2 centerY:(double)arg3 angle:(double)arg4 andOutputImage:(id)arg5 ;
-(BOOL)variesOverTime;
-(BOOL)frameSetup:(SCD_Struct_PA79*)arg1 hardware:(BOOL*)arg2 software:(BOOL*)arg3 ;
-(BOOL)frameCleanup;
-(BOOL)parameterChanged:(unsigned)arg1 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInfo:(SCD_Struct_PA79*)arg2 ;
@end

