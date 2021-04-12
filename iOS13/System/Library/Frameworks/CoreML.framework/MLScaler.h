/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class MLFeatureValue, NSString;

@interface MLScaler : MLModel <MLModelSpecificationLoader> {

	MLFeatureValue* _shiftValue;
	MLFeatureValue* _scaleValue;

}

@property (nonatomic,readonly) MLFeatureValue * shiftValue;              //@synthesize shiftValue=_shiftValue - In the implementation block
@property (nonatomic,readonly) MLFeatureValue * scaleValue;              //@synthesize scaleValue=_scaleValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWith:(id)arg1 scaleValue:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 configuration:(id)arg8 error:(id*)arg9 ;
-(MLFeatureValue *)shiftValue;
-(MLFeatureValue *)scaleValue;
@end

