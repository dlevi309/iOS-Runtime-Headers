/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@interface VNEspressoHelpers : NSObject
+(id)pathForEspressoResource:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
+(id)pathForEspressoResourceWithFilename:(id)arg1 error:(id*)arg2 ;
+(id)pathForEspressoNetworkModelFileWithName:(id)arg1 error:(id*)arg2 ;
+(int)espressoDeviceIDForMetalDevice:(id)arg1 ;
+(BOOL)createSingleNetworkPlanFromResourceName:(id)arg1 usingProcessingDevice:(id)arg2 lowPriorityMode:(BOOL)arg3 inputBlobNames:(id)arg4 outputBlobNames:(id)arg5 espressoContext:(void*)arg6 espressoPlan:(void*)arg7 espressoNetwork:(SCD_Struct_VN43*)arg8 error:(id*)arg9 ;
+(BOOL)createSingleNetworkPlanFromResourceName:(id)arg1 usingProcessingDevice:(id)arg2 lowPriorityMode:(BOOL)arg3 inputBlobNames:(id)arg4 outputBlobNames:(id)arg5 explicitNetworkLayersStorageType:(int)arg6 espressoContext:(void*)arg7 espressoPlan:(void*)arg8 espressoNetwork:(SCD_Struct_VN43*)arg9 error:(id*)arg10 ;
+(void)tearDownEspressoContext:(void*)arg1 andPlan:(void*)arg2 ;
+(CVBufferRef)createCVPixelBufferWithPixelFormat:(unsigned)arg1 fromImageInEspressoBuffer:(const SCD_Struct_VN35*)arg2 error:(id*)arg3 ;
+(BOOL)renderEspressoBufferImage:(const SCD_Struct_VN35*)arg1 intoCVPixelBuffer:(CVBufferRef)arg2 error:(id*)arg3 ;
+(unsigned long long)pixelValueSizeInBytesForBuffer:(const SCD_Struct_VN35*)arg1 error:(id*)arg2 ;
+(BOOL)enableMontrealAndReturnError:(id*)arg1 ;
+(BOOL)feedForwardEspressoBufferForNetwork:(SCD_Struct_VN43*)arg1 fromBufferWithName:(id)arg2 toBufferWithName:(id)arg3 firstFrame:(BOOL)arg4 error:(id*)arg5 ;
@end

