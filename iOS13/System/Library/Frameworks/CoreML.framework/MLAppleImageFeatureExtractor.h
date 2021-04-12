/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class NSString, MLAppleImageFeatureExtractorParameters;

@interface MLAppleImageFeatureExtractor : MLModel <MLModelSpecificationLoader> {

	NSString* _inputFeatureName;
	NSString* _outputFeatureName;
	long long _outputDataType;
	int _extractorType;
	MLAppleImageFeatureExtractorParameters* _parameters;

}

@property (readonly) MLAppleImageFeatureExtractorParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(MLAppleImageFeatureExtractorParameters *)parameters;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)featureValueFromScenePrint:(id)arg1 elementSize:(unsigned long long)arg2 ;
-(id)initWithParameters:(id)arg1 modelDescription:(id)arg2 featureExtractorType:(int)arg3 configuration:(id)arg4 error:(id*)arg5 ;
-(id)computeScenePrintFeatures:(CVBufferRef)arg1 handle:(id)arg2 useCPUOnly:(BOOL)arg3 error:(id*)arg4 ;
@end

