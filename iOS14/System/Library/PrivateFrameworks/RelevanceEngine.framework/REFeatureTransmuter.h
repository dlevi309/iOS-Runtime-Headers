/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class REFeatureSet, NSArray, REFeatureMapGenerator, REFeatureMap, NSMutableOrderedSet, NSLock;

@interface REFeatureTransmuter : NSObject {

	REFeatureSet* _inputSet;
	REFeatureSet* _outputSet;
	NSArray* _orderedFeatures;
	REFeatureMapGenerator* _orderedFeatureMapGenerator;
	REFeatureMap* _scratchValues;
	unsigned long long* _scratchTaggedValues;
	REFeatureMapGenerator* _outputFeatureMapGenerator;
	NSMutableOrderedSet* _featureValuesCache;
	NSLock* _featureValuesCacheLock;

}

@property (nonatomic,readonly) REFeatureSet * inputFeatures; 
@property (nonatomic,readonly) REFeatureSet * outputFeatures; 
-(void)dealloc;
-(id)initWithInputFeatures:(id)arg1 outputFeatures:(id)arg2 outputFeatureMapGenerator:(id)arg3 ;
-(id)_buildGraph;
-(BOOL)_supportedFeature:(id)arg1 ;
-(id)transformFeatureMaps:(id)arg1 ;
-(REFeatureSet *)inputFeatures;
-(REFeatureSet *)outputFeatures;
@end

