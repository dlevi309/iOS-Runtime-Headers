/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSOrderedSet, MLFeatureDescription;

@interface MLModelInterface : NSObject <NSSecureCoding> {

	NSDictionary* _inputDescription;
	NSDictionary* _outputDescription;
	NSString* _predictedFeatureName;
	NSString* _predictedProbabilitiesName;
	NSDictionary* _trainingInputDescription;
	NSOrderedSet* _inputFeatureNames;
	NSOrderedSet* _outputFeatureNames;

}

@property (readonly) MLFeatureDescription * predictedValueFeatureDescription; 
@property (readonly) MLFeatureDescription * predictedClassFeatureDescription; 
@property (readonly) MLFeatureDescription * classProbabilityFeatureDescription; 
@property (getter=isValidRegressorInterface,readonly) BOOL validRegressorInterface; 
@property (getter=isValidClassifierInterface,readonly) BOOL validClassifierInterface; 
@property (readonly) NSDictionary * inputDescription;                                              //@synthesize inputDescription=_inputDescription - In the implementation block
@property (readonly) NSDictionary * outputDescription;                                             //@synthesize outputDescription=_outputDescription - In the implementation block
@property (readonly) NSOrderedSet * inputFeatureNames;                                             //@synthesize inputFeatureNames=_inputFeatureNames - In the implementation block
@property (readonly) NSOrderedSet * outputFeatureNames;                                            //@synthesize outputFeatureNames=_outputFeatureNames - In the implementation block
@property (readonly) NSDictionary * trainingInputDescription;                                      //@synthesize trainingInputDescription=_trainingInputDescription - In the implementation block
@property (readonly) NSString * predictedFeatureName;                                              //@synthesize predictedFeatureName=_predictedFeatureName - In the implementation block
@property (readonly) NSString * predictedProbabilitiesName;                                        //@synthesize predictedProbabilitiesName=_predictedProbabilitiesName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)modelInterfaceWithInputDescription:(id)arg1 orderedInputFeatureNames:(id)arg2 outputDescription:(id)arg3 orderedOutputFeatureNames:(id)arg4 predictedFeatureName:(id)arg5 predictedProbabilitiesName:(id)arg6 ;
+(id)modelInterfaceWithInputDescription:(id)arg1 orderedInputFeatureNames:(id)arg2 outputDescription:(id)arg3 orderedOutputFeatureNames:(id)arg4 predictedFeatureName:(id)arg5 predictedProbabilitiesName:(id)arg6 trainingInputDescription:(id)arg7 ;
+(BOOL)validateSingleFeatureInDescription:(id)arg1 withSet:(id)arg2 ;
-(NSDictionary *)outputDescription;
-(NSDictionary *)inputDescription;
-(id)initWithInputDescription:(id)arg1 outputDescription:(id)arg2 orderedInputFeatureNames:(id)arg3 orderedOutputFeatureNames:(id)arg4 predictedFeatureName:(id)arg5 predictedProbabilitiesName:(id)arg6 trainingInputDescription:(id)arg7 ;
-(NSOrderedSet *)inputFeatureNames;
-(id)initWithSpecification:(MLModelSpecification*)arg1 error:(id*)arg2 ;
-(MLFeatureDescription *)predictedClassFeatureDescription;
-(MLFeatureDescription *)predictedValueFeatureDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)validateClassifierInterfaceWithError:(id*)arg1 ;
-(BOOL)validateRegressorInterfaceWithError:(id*)arg1 ;
-(BOOL)isValidRegressorInterface;
-(NSDictionary *)trainingInputDescription;
-(BOOL)isValidClassifierInterface;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)predictedProbabilitiesName;
-(MLFeatureDescription *)classProbabilityFeatureDescription;
-(NSOrderedSet *)outputFeatureNames;
-(id)initWithInterfaceFormat:(MLModelDescriptionSpecification*)arg1 error:(id*)arg2 ;
-(NSString *)predictedFeatureName;
@end

