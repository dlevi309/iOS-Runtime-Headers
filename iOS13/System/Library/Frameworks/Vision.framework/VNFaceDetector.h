/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>
#import <libobjc.A.dylib/VNDetectorKeyProviding.h>

@class NSString;

@interface VNFaceDetector : VNDetector <VNDetectorKeyProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg1 ;
+(void)fullyPopulateConfigurationOptions:(id)arg1 ;
+(Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2 ;
+(BOOL)shouldDumpDebugIntermediates;
+(void)printDebugInfo:(id)arg1 facesDataRaw:(vector<vision::mod::DetectedObject, std::__1::allocator<vision::mod::DetectedObject> >*)arg2 faceDetectorBGRAImage:(CVBufferRef)arg3 tempImage:(vImage_Buffer*)arg4 ;
-(void)purgeIntermediates;
@end

