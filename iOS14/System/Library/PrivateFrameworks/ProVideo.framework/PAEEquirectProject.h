/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAEEquirectProject : PAEGeneratorDefaultBase
-(id)properties;
-(void)dealloc;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)variesOverTime;
-(BOOL)frameSetup:(SCD_Struct_PA84*)arg1 hardware:(BOOL*)arg2 software:(BOOL*)arg3 ;
-(PCMatrix44Tmpl<float>)getViewMatrix:(/*function pointer*/void**)arg1 ;
-(BOOL)frameCleanup;
-(double)getProjectionFOVYDegrees:(/*function pointer*/void**)arg1 ;
-(HGEquirectProjectParams)getParams:(SCD_Struct_PA84*)arg1 :(id)arg2 :(id)arg3 :(id)arg4 ;
-(BOOL)renderOutput:(id)arg1 withInfo:(SCD_Struct_PA84*)arg2 ;
@end

