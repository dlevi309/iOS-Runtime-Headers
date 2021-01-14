/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIFaceClassifier.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMIFaceprinter, HMIFaceQualityFilterSVM, NSString;

@interface HMIFaceClassifierVIP : HMFObject <HMIFaceClassifier, HMFLogging> {

	HMIFaceprinter* _faceprinter;
	HMIFaceQualityFilterSVM* _faceRecognizabilityFilter;
	HMIFaceQualityFilterSVM* _faceAestheticQualityFilter;
	double _classificationThresholdKnown;
	double _classificationThresholdUnknown;

}

@property (readonly) HMIFaceprinter * faceprinter;                                      //@synthesize faceprinter=_faceprinter - In the implementation block
@property (readonly) HMIFaceQualityFilterSVM * faceRecognizabilityFilter;               //@synthesize faceRecognizabilityFilter=_faceRecognizabilityFilter - In the implementation block
@property (readonly) HMIFaceQualityFilterSVM * faceAestheticQualityFilter;              //@synthesize faceAestheticQualityFilter=_faceAestheticQualityFilter - In the implementation block
@property (readonly) double classificationThresholdKnown;                               //@synthesize classificationThresholdKnown=_classificationThresholdKnown - In the implementation block
@property (readonly) double classificationThresholdUnknown;                             //@synthesize classificationThresholdUnknown=_classificationThresholdUnknown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)initWithError:(id*)arg1 ;
-(HMIFaceprinter *)faceprinter;
-(id)qualityPredictionFromSVMUsingFaceQualityFilterSVM:(id)arg1 detectorConfidence:(double)arg2 laplacian:(double)arg3 yaw:(double)arg4 boxSize:(double)arg5 error:(id*)arg6 ;
-(double)classificationThresholdKnown;
-(double)classificationThresholdUnknown;
-(id)classifyFaceEvent:(id)arg1 pixelBuffer:(CVBufferRef)arg2 fastMode:(BOOL)arg3 homeUUID:(id)arg4 error:(id*)arg5 ;
-(HMIFaceQualityFilterSVM *)faceRecognizabilityFilter;
-(HMIFaceQualityFilterSVM *)faceAestheticQualityFilter;
@end

