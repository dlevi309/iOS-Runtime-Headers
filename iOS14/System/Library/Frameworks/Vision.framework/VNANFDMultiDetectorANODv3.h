/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNANFDMultiDetector.h>

@interface VNANFDMultiDetectorANODv3 : VNANFDMultiDetector
+(id)detectedObjectClassToRequestClass;
+(Class)detectorClass;
+(id)knownFoodAndDrinkIdentifiers;
+(id)recognizedFoodAndDrinkObjectClassToFoodAndDrinkCategoryName;
+(id)detectedObjectRequestClassToRequestInfo;
-(BOOL)processDetectedObject:(id)arg1 requestRevision:(unsigned long long)arg2 objectBoundingBox:(CGRect)arg3 imageBuffer:(id)arg4 warningRecorder:(id)arg5 detectedObjectResults:(id)arg6 error:(id*)arg7 ;
@end

