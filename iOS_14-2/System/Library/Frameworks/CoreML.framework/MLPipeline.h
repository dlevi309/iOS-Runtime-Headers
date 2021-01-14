/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLSpecificationCompiler.h>

@class NSArray;

@interface MLPipeline : MLModel <MLSpecificationCompiler> {

	NSArray* _models;
	NSArray* _modelNames;

}

@property (retain) NSArray * models;                  //@synthesize models=_models - In the implementation block
@property (retain) NSArray * modelNames;              //@synthesize modelNames=_modelNames - In the implementation block
+(void)archiveCustomModelNames:(const RepeatedPtrField<std::__1::basic_string<char> >*)arg1 to:(MLModelOutputArchiver*)arg2 ;
+(id)classLabelsForPipelineFromSubModelArray:(id)arg1 predictedFeatureName:(id)arg2 ;
+(void)archivePipelineUpdateParameterForModels:(const RepeatedPtrField<CoreML::Specification::Model>*)arg1 to:(MLModelOutputArchiver*)arg2 updatable:(BOOL)arg3 ;
+(BOOL)archivePipelineModelDetailsFrom:(const Pipeline*)arg1 toArchive:(MLModelOutputArchiver*)arg2 error:(id*)arg3 ;
+(id)compileWithModelsInPipeline:(const Pipeline*)arg1 toArchive:(MLModelOutputArchiver*)arg2 options:(id)arg3 updatable:(BOOL)arg4 error:(id*)arg5 ;
+(id)compiledVersionForSpecification:(MLModelSpecification*)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)compileSpecification:(MLModelSpecification*)arg1 toArchive:(MLModelOutputArchiver*)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(NSArray *)modelNames;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)parameterValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)extractModelNamesFromArchive:(MLModelInputArchiver*)arg1 numModels:(unsigned long long)arg2 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initModelFromMetadataAndArchive:(MLModelInputArchiver*)arg1 versionInfo:(id)arg2 interface:(id)arg3 metadata:(id)arg4 configuration:(id)arg5 error:(id*)arg6 ;
-(void)updateParameterDescriptionsByKeyBasedOnSubModel;
-(NSArray *)models;
-(id)executionSchedule;
-(void)setModelNames:(NSArray *)arg1 ;
-(void)setModels:(NSArray *)arg1 ;
-(void)replaceModelAtIndex:(unsigned long long)arg1 with:(id)arg2 ;
@end

