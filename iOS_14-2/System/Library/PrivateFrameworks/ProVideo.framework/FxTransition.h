/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol FxTransition <FxBaseEffect>
@required
-(BOOL)frameCleanup;
-(BOOL)frameSetup:(SCD_Struct_OZ104*)arg1 inputInfoA:(SCD_Struct_PA83)arg2 inputInfoB:(SCD_Struct_PA83)arg3 timeFraction:(float)arg4 hardware:(BOOL*)arg5 software:(BOOL*)arg6;
-(BOOL)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInputA:(SCD_Struct_PA83)arg3 withInputB:(SCD_Struct_PA83)arg4 withTimeFraction:(float)arg5 withInfo:(SCD_Struct_OZ104*)arg6;
-(BOOL)renderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withInfo:(SCD_Struct_OZ104*)arg5;

@end

