/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAEEquirectProject : PAEGeneratorDefaultBase
-(void)dealloc;
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)variesOverTime;
-(BOOL)frameSetup:(SCD_Struct_PA79*)arg1 hardware:(BOOL*)arg2 software:(BOOL*)arg3 ;
-(PCMatrix44Tmpl<float>)getViewMatrix:(/*function pointer*/void**)arg1 ;
-(BOOL)frameCleanup;
-(double)getProjectionFOVYDegrees:(/*function pointer*/void**)arg1 ;
-(HGEquirectProjectParams)getParams:(SCD_Struct_PA79*)arg1 :(id)arg2 :(id)arg3 :(id)arg4 ;
-(BOOL)renderOutput:(id)arg1 withInfo:(SCD_Struct_PA79*)arg2 ;
@end

