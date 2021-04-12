/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSArray, NSOrderedSet, NSURL, MLLayerPath;

@interface MLModelDescription : NSObject <NSSecureCoding> {

	BOOL _isUpdatable;
	NSDictionary* _inputDescriptionsByName;
	NSDictionary* _outputDescriptionsByName;
	NSString* _predictedFeatureName;
	NSString* _predictedProbabilitiesName;
	NSDictionary* _metadata;
	NSArray* _classLabels;
	NSOrderedSet* _inputFeatureNames;
	NSOrderedSet* _outputFeatureNames;
	NSURL* _modelURL;
	NSDictionary* _trainingInputDescriptionsByName;
	NSDictionary* _parameterDescriptionsByKey;
	MLLayerPath* _modelPath;

}

@property (retain) NSOrderedSet * inputFeatureNames;                                      //@synthesize inputFeatureNames=_inputFeatureNames - In the implementation block
@property (retain) NSOrderedSet * outputFeatureNames;                                     //@synthesize outputFeatureNames=_outputFeatureNames - In the implementation block
@property (nonatomic,copy) NSArray * classLabels;                                         //@synthesize classLabels=_classLabels - In the implementation block
@property (nonatomic,retain) NSURL * modelURL;                                            //@synthesize modelURL=_modelURL - In the implementation block
@property (assign,nonatomic) BOOL isUpdatable;                                            //@synthesize isUpdatable=_isUpdatable - In the implementation block
@property (nonatomic,retain) NSDictionary * trainingInputDescriptionsByName;              //@synthesize trainingInputDescriptionsByName=_trainingInputDescriptionsByName - In the implementation block
@property (nonatomic,retain) NSDictionary * parameterDescriptionsByKey;                   //@synthesize parameterDescriptionsByKey=_parameterDescriptionsByKey - In the implementation block
@property (nonatomic,retain) MLLayerPath * modelPath;                                     //@synthesize modelPath=_modelPath - In the implementation block
@property (nonatomic,readonly) NSDictionary * inputDescriptionsByName;                    //@synthesize inputDescriptionsByName=_inputDescriptionsByName - In the implementation block
@property (nonatomic,readonly) NSDictionary * outputDescriptionsByName;                   //@synthesize outputDescriptionsByName=_outputDescriptionsByName - In the implementation block
@property (nonatomic,copy,readonly) NSString * predictedFeatureName;                      //@synthesize predictedFeatureName=_predictedFeatureName - In the implementation block
@property (nonatomic,copy,readonly) NSString * predictedProbabilitiesName;                //@synthesize predictedProbabilitiesName=_predictedProbabilitiesName - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata;                                   //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)metadataWithSpecification:(MLModelSpecification*)arg1 ;
+(id)metadataWithFormat:(MLModelMetadataSpecification*)arg1 ;
-(id)debugQuickLookObject;
-(NSArray *)classLabels;
-(void)setClassLabels:(NSArray *)arg1 ;
-(void)setModelURL:(NSURL *)arg1 ;
-(NSURL *)modelURL;
-(NSDictionary *)parameterDescriptionsByKey;
-(NSOrderedSet *)inputFeatureNames;
-(MLLayerPath *)modelPath;
-(BOOL)isUpdatable;
-(void)setInputFeatureNames:(NSOrderedSet *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)trainingInputDescriptionsByName;
-(NSDictionary *)inputDescriptionsByName;
-(id)description;
-(id)initWithInputDescriptionsAndFeatureNames:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 trainingInputDescriptions:(id)arg5 inputFeatureNames:(id)arg6 outputFeatureNames:(id)arg7 metadata:(id)arg8 ;
-(NSDictionary *)outputDescriptionsByName;
-(void)setOutputFeatureNames:(NSOrderedSet *)arg1 ;
-(id)initWithInputDescriptions:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 metadata:(id)arg5 ;
-(id)initWithModelDescriptionSpecification:(MLModelDescriptionSpecification*)arg1 error:(id*)arg2 ;
-(void)setIsUpdatable:(BOOL)arg1 ;
-(BOOL)verifyInput:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)hash;
-(void)setModelPath:(MLLayerPath *)arg1 ;
-(BOOL)isEqualToDescription:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)predictedProbabilitiesName;
-(void)setTrainingInputDescriptionsByName:(NSDictionary *)arg1 ;
-(NSOrderedSet *)outputFeatureNames;
-(NSDictionary *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithInputDescriptions:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 trainingInputDescriptions:(id)arg5 metadata:(id)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)predictedFeatureName;
-(void)setParameterDescriptionsByKey:(NSDictionary *)arg1 ;
@end

