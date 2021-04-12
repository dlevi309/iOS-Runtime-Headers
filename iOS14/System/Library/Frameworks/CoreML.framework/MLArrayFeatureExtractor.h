/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class NSString, NSArray;

@interface MLArrayFeatureExtractor : MLModel <MLModelSpecificationLoader> {

	NSString* _arrayColumnName;
	NSArray* _extractIndices;
	long long _outputType;

}

@property (nonatomic,readonly) NSString * arrayColumnName;              //@synthesize arrayColumnName=_arrayColumnName - In the implementation block
@property (nonatomic,readonly) NSArray * extractIndices;                //@synthesize extractIndices=_extractIndices - In the implementation block
@property (nonatomic,readonly) long long outputType;                    //@synthesize outputType=_outputType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)extractArrayElement:(id)arg1 indices:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6 ;
+(id)extractArrayElement:(id)arg1 indices:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(NSString *)arrayColumnName;
-(id)initWith:(id)arg1 indices:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 configuration:(id)arg8 ;
-(NSArray *)extractIndices;
-(long long)outputType;
@end

