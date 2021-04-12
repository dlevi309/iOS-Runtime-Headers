/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
@class NSObject;

@interface RegWarpPP : NSObject {

	rwppRegistrationEngineS* _regEng;
	BOOL _resourcesAllocated;
	BOOL _usesExternalMemory;
	BOOL _inAPI;
	NSObject*<OS_dispatch_queue> _mtQueue;
	NSObject*<OS_dispatch_group> _mtGroup;

}
+(int)CheckParameters:(SCD_Struct_Re16*)arg1 imageWidth:(unsigned)arg2 imageHeight:(unsigned)arg3 imageFormat:(unsigned)arg4 ;
+(unsigned)getMaxNumCorners;
+(unsigned)computeExternalMemoryBlockSize:(SCD_Struct_Re16*)arg1 imageWidth:(unsigned)arg2 imageHeight:(unsigned)arg3 imageFormat:(unsigned)arg4 ;
+(void)getDefaults:(SCD_Struct_Re16*)arg1 ;
+(int)convertFromImageSizeToUnity:(SCD_Struct_Re17*)arg1 inMatrix:(SCD_Struct_Re17*)arg2 imgWidth:(unsigned long long)arg3 imgHeight:(unsigned long long)arg4 ;
+(int)convertFromUnityToImageSize:(SCD_Struct_Re17*)arg1 inMatrix:(SCD_Struct_Re17*)arg2 imgWidth:(unsigned long long)arg3 imgHeight:(unsigned long long)arg4 ;
-(void)dealloc;
-(void)releaseResources;
-(void)constructPyramid:(CVBufferRef)arg1 selector:(unsigned)arg2 mapping:(SCD_Struct_Re18*)arg3 ;
-(id)initWithParms:(unsigned char)arg1 config:(SCD_Struct_Re16*)arg2 dispatchQueue:(id)arg3 ;
-(int)allocateResources:(unsigned)arg1 imageHeight:(unsigned)arg2 imageFormat:(unsigned)arg3 externalMemory:(void*)arg4 externalMemorySize:(unsigned)arg5 ;
-(int)calculateHistEqLUT:(SCD_Struct_Re18*)arg1 fromHistogram:(SCD_Struct_Re19*)arg2 ;
-(int)calculateTotalCornerStrength:(CVBufferRef)arg1 regionOfInterest:(CGRect*)arg2 mapping:(SCD_Struct_Re18*)arg3 outTotalCornerStrength:(float*)arg4 ;
-(int)processReference:(CVBufferRef)arg1 regionOfInterest:(CGRect*)arg2 numKeypoints:(unsigned*)arg3 mapping:(SCD_Struct_Re18*)arg4 ;
-(int)getReferenceKeypoints:(SCD_Struct_Re20*)arg1 ;
-(int)processNonReference:(CVBufferRef)arg1 seedTransform:(SCD_Struct_Re17*)arg2 outputTransform:(SCD_Struct_Re17*)arg3 mapping:(SCD_Struct_Re18*)arg4 ;
-(int)getNonReferenceKeypoints:(SCD_Struct_Re20*)arg1 ;
-(int)getNormalizedPoints:(SCD_Struct_Re22*)arg1 numPairs:(unsigned*)arg2 ;
@end

