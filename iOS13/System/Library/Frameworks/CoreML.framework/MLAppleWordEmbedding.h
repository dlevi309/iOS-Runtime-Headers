/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class MLAppleWordEmbeddingParameters, NSString;

@interface MLAppleWordEmbedding : MLModel <MLModelSpecificationLoader> {

	void* wordEmbeddingModel;
	MLAppleWordEmbeddingParameters* _parameters;

}

@property (readonly) MLAppleWordEmbeddingParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(BOOL)saveAppleWordEmbeddingModelToURL:(id)arg1 wordEmbeddingParameters:(id)arg2 error:(id*)arg3 ;
-(MLAppleWordEmbeddingParameters *)parameters;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithParameters:(id)arg1 modelDescription:(id)arg2 nlpHandle:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
@end

