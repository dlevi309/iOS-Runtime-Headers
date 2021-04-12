/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class PHAMutableFloatArray;

@interface PHALabeledFeatureVector : NSObject {

	float _label;
	float _labelForTensor;
	PHAMutableFloatArray* _featureVector;

}

@property (nonatomic,readonly) float labelForTensor;                              //@synthesize labelForTensor=_labelForTensor - In the implementation block
@property (nonatomic,readonly) PHAMutableFloatArray * featureVector;              //@synthesize featureVector=_featureVector - In the implementation block
@property (nonatomic,readonly) float label;                                       //@synthesize label=_label - In the implementation block
-(float)label;
-(id)initWithFeatureVector:(id)arg1 label:(long long)arg2 ;
-(float*)_getLabelPointer;
-(PHAMutableFloatArray *)featureVector;
-(float)labelForTensor;
@end

