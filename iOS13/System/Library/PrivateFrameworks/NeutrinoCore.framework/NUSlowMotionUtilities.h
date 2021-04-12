/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUSlowMotionUtilities : NSObject
+(id)slomoFactory;
+(id)photosFormatsSlomoFactory;
+(id)slowMotionVideoFromAsset:(id)arg1 rate:(float)arg2 range:(SCD_Struct_NU14)arg3 error:(out id*)arg4 ;
+(id)slowMotionAudioMixFromAsset:(id)arg1 rate:(float)arg2 range:(SCD_Struct_NU14)arg3 error:(out id*)arg4 ;
+(id)timeMapperForAssetDuration:(double)arg1 rate:(float)arg2 range:(SCD_Struct_NU14)arg3 error:(out id*)arg4 ;
@end

