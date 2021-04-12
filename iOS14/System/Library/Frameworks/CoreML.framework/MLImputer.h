/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class MLFeatureValue, NSString;

@interface MLImputer : MLModel <MLModelSpecificationLoader> {

	MLFeatureValue* _imputeValue;
	MLFeatureValue* _replaceValue;

}

@property (nonatomic,readonly) MLFeatureValue * imputeValue;               //@synthesize imputeValue=_imputeValue - In the implementation block
@property (nonatomic,readonly) MLFeatureValue * replaceValue;              //@synthesize replaceValue=_replaceValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)imputeValueFrom:(id)arg1 replaceValue:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6 error:(id*)arg7 ;
+(id)imputeValueFrom:(id)arg1 replaceValue:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 error:(id*)arg8 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWith:(id)arg1 imputeValue:(id)arg2 replaceValue:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 configuration:(id)arg8 error:(id*)arg9 ;
-(MLFeatureValue *)imputeValue;
-(MLFeatureValue *)replaceValue;
@end

