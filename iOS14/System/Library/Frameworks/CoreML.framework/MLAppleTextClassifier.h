/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class MLAppleTextClassifierParameters, NSString;

@interface MLAppleTextClassifier : MLModel <MLModelSpecificationLoader> {

	void* textClassifierModel;
	MLAppleTextClassifierParameters* _parameters;

}

@property (readonly) MLAppleTextClassifierParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(BOOL)saveAppleTextClassifierModelToURL:(id)arg1 textClassifierParameters:(id)arg2 error:(id*)arg3 ;
-(MLAppleTextClassifierParameters *)parameters;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithParameters:(id)arg1 modelDescription:(id)arg2 nlpHandle:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
-(void)dealloc;
@end
