/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class NSString, NSArray, MLAppleImageFeatureExtractorParameters;

@interface MLAppleImageFeatureExtractor : MLModel <MLModelSpecificationLoader> {

	NSString* _inputFeatureName;
	NSArray* _outputFeatureName;
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
-(id)initWithParameters:(id)arg1 modelDescription:(id)arg2 featureExtractorType:(int)arg3 configuration:(id)arg4 error:(id*)arg5 ;
-(id)computeScenePrintFeatures:(CVBufferRef)arg1 handle:(id)arg2 useCPUOnly:(BOOL)arg3 error:(id*)arg4 ;
-(id)featureValueFromObjectPrint:(id)arg1 key:(id)arg2 shape:(id)arg3 ;
-(id)featureValueFromScenePrint:(id)arg1 elementSize:(unsigned long long)arg2 ;
@end

