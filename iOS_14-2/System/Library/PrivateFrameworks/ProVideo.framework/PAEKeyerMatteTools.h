/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PAEKeyerMatteTools : NSObject
-(id)init;
-(BOOL)doMatteManipulationWithInfo:(SCD_Struct_PA84*)arg1 pixelAspectRatio:(float)arg2 fieldHeight:(float)arg3 doInvertMatte:(BOOL)arg4 inputIsInverted:(BOOL)arg5 fillHoles:(BOOL)arg6 scaling:(BOOL)arg7 blendingGamma:(float)arg8 blackLevel:(double)arg9 whiteLevel:(double)arg10 gammaLevel:(double)arg11 preKeyedInputNode:(HGRef<HGNode>*)arg12 outputNode:(HGRef<HGNode>*)arg13 ;
-(BOOL)addParametersWithParamAPI:(id)arg1 hideSimpleViewParam:(unsigned)arg2 isLumaKey:(BOOL)arg3 ;
-(BOOL)addLevelsParametersWithParamAPI:(id)arg1 hideSimpleViewParam:(unsigned)arg2 ;
-(BOOL)addAdvancedParametersWithParamAPI:(id)arg1 hideSimpleViewParam:(unsigned)arg2 ;
-(BOOL)doMatteManipulationWithParamAPI:(id)arg1 withPrivateParamAPI:(id)arg2 withInfo:(SCD_Struct_PA84*)arg3 pixelAspectRatio:(float)arg4 fieldHeight:(float)arg5 doInvertMatte:(BOOL)arg6 inputIsInverted:(BOOL)arg7 fillHoles:(BOOL)arg8 scaling:(BOOL)arg9 blendingGamma:(float)arg10 preKeyedInputNode:(HGRef<HGNode>*)arg11 outputNode:(HGRef<HGNode>*)arg12 ;
@end

