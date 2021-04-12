/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@protocol MLFeatureProvider;
@class MLMultiArray;

@interface MLRegressorResult : NSObject {

	MLMultiArray* _predictedValue;
	id<MLFeatureProvider> _additionalFeatures;

}

@property (readonly) MLMultiArray * predictedValue;                         //@synthesize predictedValue=_predictedValue - In the implementation block
@property (readonly) id<MLFeatureProvider> additionalFeatures;              //@synthesize additionalFeatures=_additionalFeatures - In the implementation block
+(id)resultWithValue:(id)arg1 ;
+(id)resultWithValue:(id)arg1 additionalFeatures:(id)arg2 ;
-(MLMultiArray *)predictedValue;
-(id)initWithValue:(id)arg1 additionalFeatures:(id)arg2 ;
-(id<MLFeatureProvider>)additionalFeatures;
-(id)asFeatureDictionaryWithPredictedValueDescription:(id)arg1 ;
@end

