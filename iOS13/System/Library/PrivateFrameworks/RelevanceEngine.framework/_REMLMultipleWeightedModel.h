/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/_REMLWeightedModel.h>
#import <libobjc.A.dylib/_REMLMultipleWeightedModelProperties.h>

@class NSDictionary, REFeature, REFeatureSet, NSMutableDictionary;

@interface _REMLMultipleWeightedModel : _REMLWeightedModel <_REMLMultipleWeightedModelProperties> {

	REFeature* _identificationFeature;
	REFeatureSet* _featureSet;
	float _priorMean;
	float _varianceEpsilon;
	NSMutableDictionary* _models;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) NSDictionary * models; 
-(NSDictionary *)models;
-(BOOL)loadModelFromURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveModelToURL:(id)arg1 error:(id*)arg2 ;
-(id)predictWithFeatures:(id)arg1 ;
-(void)trainModelWithFeatureMap:(id)arg1 positiveEvent:(id)arg2 ;
-(void)enumerateModels:(/*^block*/id)arg1 ;
-(id)initWithFeature:(id)arg1 featureSet:(id)arg2 priorMean:(float)arg3 biasFeature:(id)arg4 modelVarianceEpsilon:(float)arg5 ;
-(id)_modelForKey:(id)arg1 ;
-(id)_modelForFeatureMap:(id)arg1 ;
@end

