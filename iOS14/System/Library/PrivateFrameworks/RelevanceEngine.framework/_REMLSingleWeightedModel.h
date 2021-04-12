/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/_REMLWeightedModel.h>
#import <libobjc.A.dylib/_REMLSingleWeightedModelProperties.h>

@class REMLModel;

@interface _REMLSingleWeightedModel : _REMLWeightedModel <_REMLSingleWeightedModelProperties> {

	REMLModel* _model;

}

@property (nonatomic,readonly) REMLModel * model; 
-(REMLModel *)model;
-(BOOL)loadModelFromURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveModelToURL:(id)arg1 error:(id*)arg2 ;
-(id)predictWithFeatures:(id)arg1 ;
-(void)trainModelWithFeatureMap:(id)arg1 positiveEvent:(id)arg2 ;
-(void)enumerateModels:(/*^block*/id)arg1 ;
-(id)initWithFeatureSet:(id)arg1 priorMean:(float)arg2 biasFeature:(id)arg3 modelVarianceEpsilon:(float)arg4 ;
@end

