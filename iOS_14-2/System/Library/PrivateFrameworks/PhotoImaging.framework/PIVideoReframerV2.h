/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIVideoReframer.h>

@interface PIVideoReframerV2 : PIVideoReframer {

	Session* v2Session;

}
-(long long)revision;
-(id)initWithEncodedPixelSize:(SCD_Struct_PI5)arg1 orientation:(long long)arg2 clapRect:(SCD_Struct_PI6)arg3 viewRect:(SCD_Struct_PI6)arg4 config:(const /*function pointer*/void**)arg5 ;
-(id)debugSubjectsAtTime:(SCD_Struct_PI7)arg1 ;
-(CGVector)debugCameraMotionAtTime:(SCD_Struct_PI7)arg1 ;
-(CGRect)debugRawReframedViewRectAtTime:(SCD_Struct_PI7)arg1 ;
-(CGPoint)debugCenterOfInterestAtTime:(SCD_Struct_PI7)arg1 ;
@end

