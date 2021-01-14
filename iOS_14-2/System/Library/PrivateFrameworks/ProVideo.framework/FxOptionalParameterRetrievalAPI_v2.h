/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol FxOptionalParameterRetrievalAPI_v2 <NSObject>
@required
-(BOOL)getGradientSamples:(void*)arg1 numSamples:(unsigned long long)arg2 depth:(unsigned long long)arg3 fromParm:(unsigned)arg4 atFxTime:(/*function pointer*/void**)arg5;
-(BOOL)getHistogramBlackIn:(double*)arg1 BlackOut:(double*)arg2 WhiteIn:(double*)arg3 WhiteOut:(double*)arg4 Gamma:(double*)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned)arg7 atFxTime:(/*function pointer*/void**)arg8;

@end

