/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@interface ARCoachingTransformations : NSObject
+(SCD_Struct_AR1)scale:;
+(float)degreesToRadians:(float)arg1 ;
+(SCD_Struct_AR1)translate:;
+(SCD_Struct_AR1)rotate:(float)arg1 ;
+(SCD_Struct_AR1)perspective_fov:(float)arg1 aspect:(float)arg2 near:(float)arg3 far:(float)arg4 ;
+(SCD_Struct_AR1)lookAt:center:up:;
+(SCD_Struct_AR1)ortho2d:(float)arg1 right:(float)arg2 bottom:(float)arg3 top:(float)arg4 near:(float)arg5 far:(float)arg6 ;
+(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >)fromMatrix:(SCD_Struct_AR1)arg1 ;
@end

