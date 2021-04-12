/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@class VCPRequest;

@interface VNHumanPoseDetector : VNDetector {

	VCPRequest* _humanPoseDetector;

}
+(Class)recognizedPointsObservationClass;
+(id)configurationOptionKeysForDetectorKey;
-(id)vcpPoseRequestSetupOptionsForDetectorOptions:(id)arg1 error:(id*)arg2 ;
-(id)vcpPoseRequestRuntimeOptionsForDetectorOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
@end

