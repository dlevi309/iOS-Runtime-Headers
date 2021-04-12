/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol FxFilter <FxBaseEffect>
@optional
-(unsigned long long)numberOfFramesToScheduleAtRenderTime:(/*function pointer*/void**)arg1;
-(void)schedule:(unsigned long long)arg1 frames:(/*function pointer*/void**)arg2 forRenderAtTime:(/*function pointer*/void**)arg3;

@required
-(BOOL)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInput:(SCD_Struct_PA83)arg3 withInfo:(SCD_Struct_OZ104*)arg4;
-(BOOL)frameSetup:(SCD_Struct_OZ104*)arg1 inputInfo:(SCD_Struct_PA83)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4;
-(BOOL)frameCleanup;
-(BOOL)renderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_OZ104*)arg3;

@end

