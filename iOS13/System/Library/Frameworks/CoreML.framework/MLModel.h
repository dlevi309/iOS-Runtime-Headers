/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLModeling.h>

@class MLModelInterface, MLModelMetadata, MLModelDescription, MLModelConfiguration;

@interface MLModel : NSObject <MLModeling> {

	MLModelInterface* _interface;
	MLModelMetadata* _metadata;
	MLModelDescription* _modelDescription;
	MLModelConfiguration* _configuration;

}

@property (nonatomic,retain) MLModelDescription * modelDescription;              //@synthesize modelDescription=_modelDescription - In the implementation block
@property (nonatomic,retain) MLModelConfiguration * configuration;               //@synthesize configuration=_configuration - In the implementation block
@property (readonly) MLModelInterface * interface;                               //@synthesize interface=_interface - In the implementation block
@property (readonly) MLModelMetadata * metadata;                                 //@synthesize metadata=_metadata - In the implementation block
+(BOOL)serializeInterfaceAndMetadata:(MLModelSpecification*)arg1 toArchive:(MLModelOutputArchiver*)arg2 error:(id*)arg3 ;
+(id)modelWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(id)modelWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)predictionsFromLoopingOverBatch:(id)arg1 model:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)predictionsFromSubbatchingBatch:(id)arg1 maxSubbatchLength:(long long)arg2 predictionBlock:(/*^block*/id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(id)compileModelAtURL:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(MLModelInterface *)interface;
-(id)initWithConfiguration:(id)arg1 ;
-(id)debugQuickLookObject;
-(MLModelDescription *)modelDescription;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(MLModelMetadata *)metadata;
-(void)setConfiguration:(MLModelConfiguration *)arg1 ;
-(MLModelConfiguration *)configuration;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionsFromBatch:(id)arg1 error:(id*)arg2 ;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)setModelDescription:(MLModelDescription *)arg1 ;
-(id)parameterValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)initDescriptionOnlyWithSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)objectBoundingBoxOutputDescription;
-(id)initInterfaceAndMetadataWithCompiledArchive:(MLModelInputArchiver*)arg1 error:(id*)arg2 ;
-(id)visionFeaturePrintInfo;
-(id)initWithDescription:(id)arg1 ;
-(id)initWithDescription:(id)arg1 configuration:(id)arg2 ;
-(id)initWithInterface:(id)arg1 metadata:(id)arg2 configuration:(id)arg3 ;
-(id)initWithName:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5 configuration:(id)arg6 ;
-(id)vectorizeInput:(id)arg1 error:(id*)arg2 ;
@end

