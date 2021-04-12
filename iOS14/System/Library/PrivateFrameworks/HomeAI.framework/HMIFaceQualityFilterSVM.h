/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class MLModel, NSString;

@interface HMIFaceQualityFilterSVM : HMFObject <HMFLogging> {

	MLModel* _mlModel;
	MLModel* _scalerModel;

}

@property (readonly) MLModel * mlModel;                             //@synthesize mlModel=_mlModel - In the implementation block
@property (readonly) MLModel * scalerModel;                         //@synthesize scalerModel=_scalerModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)dataScalerInputName;
+(id)dataScalerOutputName;
+(id)svmInputName;
+(id)svmOutputName;
+(id)modelPathForResource:(id)arg1 ;
+(id)defaultRecognizabilityModelPath;
+(id)defaultRecognizabilityDataScalerPath;
+(id)defaultAestheticQualityModelPath;
+(id)defaultAestheticQualityDataScalerPath;
-(MLModel *)mlModel;
-(MLModel *)scalerModel;
-(id)initWithModelPath:(id)arg1 dataScalerPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)predict:(id)arg1 output:(double*)arg2 error:(id*)arg3 ;
@end

