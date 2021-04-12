/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@class SNVGGFeatureExtractorConfiguration, MLModel, NSArray;

@interface SNVGGBasedDetectorConfiguration : NSObject {

	SNVGGFeatureExtractorConfiguration* _featureExtractorConfiguration;
	MLModel* _model;
	Class _observationClass;
	NSArray* _outputLabels;

}

@property (nonatomic,readonly) SNVGGFeatureExtractorConfiguration * featureExtractorConfiguration;              //@synthesize featureExtractorConfiguration=_featureExtractorConfiguration - In the implementation block
@property (nonatomic,readonly) MLModel * model;                                                                 //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) Class observationClass;                                                          //@synthesize observationClass=_observationClass - In the implementation block
@property (nonatomic,readonly) NSArray * outputLabels;                                                          //@synthesize outputLabels=_outputLabels - In the implementation block
-(MLModel *)model;
-(NSArray *)outputLabels;
-(SNVGGFeatureExtractorConfiguration *)featureExtractorConfiguration;
-(id)initWithMLModel:(id)arg1 observationClass:(Class)arg2 outputLabels:(id)arg3 ;
-(Class)observationClass;
@end

