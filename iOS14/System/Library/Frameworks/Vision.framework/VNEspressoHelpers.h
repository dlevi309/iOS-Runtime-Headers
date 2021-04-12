/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@interface VNEspressoHelpers : NSObject
+(id)pathForEspressoNetworkModelFileWithName:(id)arg1 error:(id*)arg2 ;
+(BOOL)enableMontrealAndReturnError:(id*)arg1 ;
+(id)_locateFrameworkBundleForResourceWithName:(id)arg1 resourceDirectory:(id*)arg2 error:(id*)arg3 ;
+(id)pathForEspressoResource:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
+(id)pathForEspressoResourceWithFilename:(id)arg1 error:(id*)arg2 ;
+(CVBufferRef)createCVPixelBufferWithPixelFormat:(unsigned)arg1 fromImageInEspressoBuffer:(const SCD_Struct_VN38*)arg2 error:(id*)arg3 ;
+(BOOL)createSingleNetworkPlanFromResourceName:(id)arg1 usingProcessingDevice:(id)arg2 lowPriorityMode:(BOOL)arg3 inputBlobNames:(id)arg4 outputBlobNames:(id)arg5 espressoResources:(id*)arg6 error:(id*)arg7 ;
+(BOOL)createSingleNetworkPlanFromResourceName:(id)arg1 usingProcessingDevice:(id)arg2 lowPriorityMode:(BOOL)arg3 inputBlobNames:(id)arg4 outputBlobNames:(id)arg5 explicitNetworkLayersStorageType:(int)arg6 espressoResources:(id*)arg7 error:(id*)arg8 ;
+(unsigned long long)pixelValueSizeInBytesForBuffer:(const SCD_Struct_VN38*)arg1 error:(id*)arg2 ;
+(BOOL)renderEspressoBufferImage:(const SCD_Struct_VN38*)arg1 intoCVPixelBuffer:(CVBufferRef)arg2 error:(id*)arg3 ;
+(BOOL)feedForwardEspressoBufferForNetwork:(SCD_Struct_VN56*)arg1 fromBufferWithName:(id)arg2 toBufferWithName:(id)arg3 firstFrame:(BOOL)arg4 error:(id*)arg5 ;
@end

