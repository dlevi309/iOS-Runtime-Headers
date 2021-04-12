/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>
#import <libobjc.A.dylib/MLModeling.h>

@class NSOrderedSet, NSString, MLModelDescription, MLModelInterface, MLModelMetadata;

@interface MLOneHotEncoder : MLModel <MLModelSpecificationLoader, MLModeling> {

	BOOL _ouputSparse;
	BOOL _handleUnknown;
	NSOrderedSet* _featureEncoding;

}

@property (nonatomic,readonly) NSOrderedSet * featureEncoding;                   //@synthesize featureEncoding=_featureEncoding - In the implementation block
@property (nonatomic,readonly) BOOL ouputSparse;                                 //@synthesize ouputSparse=_ouputSparse - In the implementation block
@property (nonatomic,readonly) BOOL handleUnknown;                               //@synthesize handleUnknown=_handleUnknown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MLModelDescription * modelDescription; 
@property (readonly) MLModelInterface * interface; 
@property (readonly) MLModelMetadata * metadata; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)featureEncoderFrom:(id)arg1 inputDescription:(id)arg2 orderedInputFeatureNames:(id)arg3 ;
+(id)featureEncoderFrom:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5 ;
+(id)featureEncoderFrom:(id)arg1 dataTransformerName:(id)arg2 ouputSparse:(BOOL)arg3 handleUnknown:(BOOL)arg4 inputDescription:(id)arg5 outputDescription:(id)arg6 orderedInputFeatureNames:(id)arg7 orderedOutputFeatureNames:(id)arg8 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWith:(id)arg1 dataTransformerName:(id)arg2 ouputSparse:(BOOL)arg3 handleUnknown:(BOOL)arg4 inputDescription:(id)arg5 outputDescription:(id)arg6 orderedInputFeatureNames:(id)arg7 orderedOutputFeatureNames:(id)arg8 configuration:(id)arg9 ;
-(id)encodeFeatureValue:(id)arg1 ;
-(id)unknownDenseVector;
-(id)encodeFeatureValueIntString:(unsigned long long)arg1 ;
-(NSOrderedSet *)featureEncoding;
-(BOOL)ouputSparse;
-(BOOL)handleUnknown;
@end

