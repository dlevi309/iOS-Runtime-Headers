/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSOrderedSet, NSURL;

@interface MLModelDescription : NSObject <NSSecureCoding> {

	BOOL _isUpdatable;
	NSDictionary* _inputDescriptionsByName;
	NSDictionary* _outputDescriptionsByName;
	NSString* _predictedFeatureName;
	NSString* _predictedProbabilitiesName;
	NSDictionary* _metadata;
	NSOrderedSet* _inputFeatureNames;
	NSOrderedSet* _outputFeatureNames;
	NSURL* _modelURL;
	NSDictionary* _trainingInputDescriptionsByName;
	NSDictionary* _parameterDescriptionsByKey;

}

@property (retain) NSOrderedSet * inputFeatureNames;                                      //@synthesize inputFeatureNames=_inputFeatureNames - In the implementation block
@property (retain) NSOrderedSet * outputFeatureNames;                                     //@synthesize outputFeatureNames=_outputFeatureNames - In the implementation block
@property (nonatomic,retain) NSURL * modelURL;                                            //@synthesize modelURL=_modelURL - In the implementation block
@property (assign,nonatomic) BOOL isUpdatable;                                            //@synthesize isUpdatable=_isUpdatable - In the implementation block
@property (nonatomic,retain) NSDictionary * trainingInputDescriptionsByName;              //@synthesize trainingInputDescriptionsByName=_trainingInputDescriptionsByName - In the implementation block
@property (nonatomic,retain) NSDictionary * parameterDescriptionsByKey;                   //@synthesize parameterDescriptionsByKey=_parameterDescriptionsByKey - In the implementation block
@property (nonatomic,readonly) NSDictionary * inputDescriptionsByName;                    //@synthesize inputDescriptionsByName=_inputDescriptionsByName - In the implementation block
@property (nonatomic,readonly) NSDictionary * outputDescriptionsByName;                   //@synthesize outputDescriptionsByName=_outputDescriptionsByName - In the implementation block
@property (nonatomic,copy,readonly) NSString * predictedFeatureName;                      //@synthesize predictedFeatureName=_predictedFeatureName - In the implementation block
@property (nonatomic,copy,readonly) NSString * predictedProbabilitiesName;                //@synthesize predictedProbabilitiesName=_predictedProbabilitiesName - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata;                                   //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)metadataWithFormat:(MLModelMetadataSpecification*)arg1 ;
+(id)metadataWithSpecification:(MLModelSpecification*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)debugQuickLookObject;
-(NSDictionary *)inputDescriptionsByName;
-(NSDictionary *)outputDescriptionsByName;
-(NSDictionary *)metadata;
-(NSURL *)modelURL;
-(void)setModelURL:(NSURL *)arg1 ;
-(id)initWithInputDescriptions:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 trainingInputDescriptions:(id)arg5 metadata:(id)arg6 ;
-(id)initWithInputDescriptions:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 metadata:(id)arg5 ;
-(id)initWithModelDescriptionSpecification:(MLModelDescriptionSpecification*)arg1 error:(id*)arg2 ;
-(BOOL)isEqualToDescription:(id)arg1 ;
-(BOOL)verifyInput:(id)arg1 error:(id*)arg2 ;
-(NSString *)predictedFeatureName;
-(NSString *)predictedProbabilitiesName;
-(NSOrderedSet *)inputFeatureNames;
-(void)setInputFeatureNames:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)outputFeatureNames;
-(void)setOutputFeatureNames:(NSOrderedSet *)arg1 ;
-(BOOL)isUpdatable;
-(void)setIsUpdatable:(BOOL)arg1 ;
-(NSDictionary *)trainingInputDescriptionsByName;
-(void)setTrainingInputDescriptionsByName:(NSDictionary *)arg1 ;
-(NSDictionary *)parameterDescriptionsByKey;
-(void)setParameterDescriptionsByKey:(NSDictionary *)arg1 ;
@end

