/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class MLModel, NSString;

@interface MLLinkedModel : MLModel <MLModelSpecificationLoader> {

	MLModel* _linkedModel;
	NSString* _modelFileName;
	NSString* _modelSearchPath;

}

@property (retain) MLModel * linkedModel;                           //@synthesize linkedModel=_linkedModel - In the implementation block
@property (retain) NSString * modelFileName;                        //@synthesize modelFileName=_modelFileName - In the implementation block
@property (retain) NSString * modelSearchPath;                      //@synthesize modelSearchPath=_modelSearchPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)findFile:(id)arg1 inSearchPath:(id)arg2 basePath:(id)arg3 ;
+(BOOL)areFeaturesIn:(id)arg1 modelNamed:(id)arg2 aSubsetOf:(id)arg3 error:(id*)arg4 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)parameterValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)updateParameterDescriptionsByUnarchivingSpecification:(const LinkedModelFile*)arg1 ;
-(id)initWithLinkedModel:(id)arg1 modelFileName:(id)arg2 modelSearchPath:(id)arg3 configuration:(id)arg4 ;
-(MLModel *)linkedModel;
-(void)setLinkedModel:(MLModel *)arg1 ;
-(NSString *)modelFileName;
-(void)setModelFileName:(NSString *)arg1 ;
-(NSString *)modelSearchPath;
-(void)setModelSearchPath:(NSString *)arg1 ;
@end

