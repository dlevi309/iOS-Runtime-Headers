/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)asFeatureDictionaryWithPredictedValueDescription:(id)arg1 ;
-(id)initWithValue:(id)arg1 additionalFeatures:(id)arg2 ;
-(MLMultiArray *)predictedValue;
-(id<MLFeatureProvider>)additionalFeatures;
@end

