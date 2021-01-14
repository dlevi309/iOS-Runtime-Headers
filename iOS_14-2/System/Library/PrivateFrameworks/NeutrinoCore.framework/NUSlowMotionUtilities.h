/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUSlowMotionUtilities : NSObject
+(id)slowMotionVideoFromAsset:(id)arg1 rate:(float)arg2 range:(SCD_Struct_NU16)arg3 error:(out id*)arg4 ;
+(id)slowMotionAudioMixFromAsset:(id)arg1 rate:(float)arg2 range:(SCD_Struct_NU16)arg3 error:(out id*)arg4 ;
+(id)timeMapperForAssetDuration:(double)arg1 rate:(float)arg2 range:(SCD_Struct_NU16)arg3 error:(out id*)arg4 ;
@end

