/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAESharedDefaultBase.h>
#import <libobjc.A.dylib/FxTransition.h>

@interface PAETransitionDefaultBase : PAESharedDefaultBase <FxTransition> {

	BOOL _haveEase;
	BOOL _haveMotionBlur;
	int _initGap;

}
-(BOOL)addParameters;
-(BOOL)parameterChanged:(unsigned)arg1 ;
-(BOOL)addEaseParametersWithDefault:(float)arg1 andFlags:(unsigned)arg2 ;
-(BOOL)convertTimeFraction:(double)arg1 toLocal:(double*)arg2 andDerivative:(double*)arg3 atTime:(/*function pointer*/void**)arg4 ;
-(BOOL)isFrontGap;
-(BOOL)isEndGap;
-(BOOL)frameSetup:(SCD_Struct_PA84*)arg1 inputInfoA:(SCD_Struct_PA83)arg2 inputInfoB:(SCD_Struct_PA83)arg3 timeFraction:(float)arg4 hardware:(BOOL*)arg5 software:(BOOL*)arg6 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withInfo:(SCD_Struct_PA84*)arg5 ;
-(BOOL)finishInitialSetup:(id*)arg1 ;
-(BOOL)getEaseIn:(double*)arg1 easeOut:(double*)arg2 atTime:(/*function pointer*/void**)arg3 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withSpeed:(float)arg5 withInfo:(SCD_Struct_PA84*)arg6 ;
-(BOOL)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInputA:(SCD_Struct_PA83)arg3 withInputB:(SCD_Struct_PA83)arg4 withTimeFraction:(float)arg5 withInfo:(SCD_Struct_PA84*)arg6 ;
-(BOOL)renderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withInfo:(SCD_Struct_PA84*)arg5 ;
-(BOOL)addMotionBlurParameters;
-(double)relativeShutterAtTime:(/*function pointer*/void**)arg1 ;
@end

