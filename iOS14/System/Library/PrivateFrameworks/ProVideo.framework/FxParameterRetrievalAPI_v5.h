/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol FxParameterRetrievalAPI_v5 <NSObject>
@required
-(BOOL)getFloatValue:(double*)arg1 fromParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3;
-(BOOL)getIntValue:(int*)arg1 fromParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3;
-(BOOL)getBoolValue:(BOOL*)arg1 fromParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3;
-(BOOL)getRedValue:(double*)arg1 greenValue:(double*)arg2 blueValue:(double*)arg3 fromParm:(unsigned)arg4 atFxTime:(/*function pointer*/void**)arg5;
-(BOOL)getRedValue:(double*)arg1 greenValue:(double*)arg2 blueValue:(double*)arg3 alphaValue:(double*)arg4 fromParm:(unsigned)arg5 atFxTime:(/*function pointer*/void**)arg6;
-(BOOL)getXValue:(double*)arg1 YValue:(double*)arg2 fromParm:(unsigned)arg3 atFxTime:(/*function pointer*/void**)arg4;
-(BOOL)getBitmap:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(SCD_Struct_OZ104*)arg4 fromParm:(unsigned)arg5 atFxTime:(/*function pointer*/void**)arg6;
-(BOOL)getTexture:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(SCD_Struct_OZ104*)arg4 fromParm:(unsigned)arg5 atFxTime:(/*function pointer*/void**)arg6;
-(BOOL)getCustomParameterValue:(id*)arg1 fromParm:(unsigned)arg2;
-(BOOL)getParameterFlags:(unsigned*)arg1 fromParm:(unsigned)arg2;
-(BOOL)getStringParameterValue:(id*)arg1 fromParm:(unsigned)arg2;
-(BOOL)getCustomParameterValue:(id*)arg1 fromParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3;
-(BOOL)getPathID:(void*)arg1 fromParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3;
-(BOOL)getFontName:(id*)arg1 fromParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3;

@end

