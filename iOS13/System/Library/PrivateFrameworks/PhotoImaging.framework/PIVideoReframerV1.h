/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIVideoReframer.h>

@class NSMutableArray;

@interface PIVideoReframerV1 : PIVideoReframer {

	const Session* v1Session;
	NSMutableArray* debugSceneSegments;
	NSMutableArray* debugReframeSegments;
	NSMutableArray* debugKeyframes;

}
-(long long)revision;
-(id)initWithEncodedPixelSize:(SCD_Struct_PI5)arg1 orientation:(long long)arg2 clapRect:(SCD_Struct_PI6)arg3 viewRect:(SCD_Struct_PI6)arg4 config:(const /*function pointer*/void**)arg5 ;
-(id)debugSceneSegments;
-(id)debugReframeSegments;
-(id)debugKeyframes;
-(id)debugSubjectsAtTime:(SCD_Struct_PI8)arg1 ;
-(CGVector)debugCameraMotionAtTime:(SCD_Struct_PI8)arg1 ;
@end

