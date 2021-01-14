/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


#import <CoreImage/CoreImage-Structs.h>
@interface InpaintingEspressoHelpers : NSObject
+(id)performInpaintingOnBGRA8VImage:(id)arg1 usingMask:(id)arg2 atProcessingResolution:(int)arg3 withOutputFormat:(int)arg4 outputImage:(id)arg5 andModel:(id)arg6 error:(id*)arg7 ;
+(BOOL)createSingleNetworkPlanFromResourceDescriptor:(id)arg1 resourceFileName:(id)arg2 lowPriorityMode:(BOOL)arg3 cpuOnlyModel:(BOOL)arg4 membraneModel:(BOOL)arg5 modelInputPixelFormat:(int)arg6 modelOutputPixelFormat:(int)arg7 inputBlobNames:(id)arg8 outputBlobNames:(id)arg9 storeInEspressoResources:(id)arg10 error:(id*)arg11 ;
+(id)generatePoissonMembraneOnBGRA8VTargetImage:(id)arg1 forSourceImage:(id)arg2 usingMaskOutline:(id)arg3 atProcessingResolution:(int)arg4 withOutputFormat:(int)arg5 outputImage:(id)arg6 andModel:(id)arg7 error:(id*)arg8 ;
+(int)selectModelProcessingResolutionBasedOnEdgeSize:(double)arg1 amongResolutions:(id)arg2 ;
+(BOOL)selectConfigurationAndBuildPlanForNetwork:(id)arg1 configurationName:(id)arg2 error:(id*)arg3 ;
+(void*)createEspressoContextForCPUEngine:(int*)arg1 ;
+(BOOL)bindEspressoInputBufferForInputName:(id)arg1 buffer:(vImage_Buffer*)arg2 preprocessingParams:(SCD_Struct_In66)arg3 network:(SCD_Struct_In65*)arg4 noAlphaPremultiply:(BOOL)arg5 error:(id*)arg6 ;
+(id)convertEspressoOutput:(SCD_Struct_In67*)arg1 intoOutputImageWrapper:(id)arg2 usingOutputPixelsRange:(int)arg3 andOutputFormat:(int)arg4 error:(id*)arg5 ;
+(id)pathForEspressoNetworkModelFileWithName:(id)arg1 error:(id*)arg2 ;
+(void*)createEspressoContextUsingFastestDevicePresent__engineUsed:(int*)arg1 ;
+(id)performInpaintingOnImage:(id)arg1 usingMask:(id)arg2 atProcessingResolution:(int)arg3 withModel:(id)arg4 error:(id*)arg5 ;
@end

