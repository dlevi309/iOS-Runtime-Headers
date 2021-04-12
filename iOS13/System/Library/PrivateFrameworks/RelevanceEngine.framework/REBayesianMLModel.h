/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REMLModel.h>
#import <libobjc.A.dylib/REBayesianMLModelProperties.h>

@class REExportedTable;

@interface REBayesianMLModel : REMLModel <REBayesianMLModelProperties> {

	BayesianModel* _model;
	unsigned long long _numberOfFeatures;

}

@property (nonatomic,readonly) REExportedTable * content; 
+(unsigned long long)featureBitWidth;
+(unsigned long long)maxFeatureCount;
-(REExportedTable *)content;
-(void)logCoreAnalyticsMetrics;
-(id)_predictWithFeatures:(id)arg1 ;
-(id)initWithFeatureSet:(id)arg1 priorMean:(float)arg2 modelVarianceEpsilon:(float)arg3 ;
-(void)_clearModel;
-(float)_getAveragePrediction;
-(float)_getNormalizedEntropy;
-(long long)_getNumberOfCoordinates;
-(unsigned long long)_getTotalExampleCount;
-(unsigned long long)_getTotalPositiveCount;
-(void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2 ;
-(BOOL)_saveModelToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_loadModelFromURL:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)_maxFeatureCoordinates;
-(void)_loadFeatureVector:(vector<unsigned long long, std::__1::allocator<unsigned long long> >*)arg1 fromFeatureMap:(id)arg2 ;
-(BOOL)_saveModelToURL:(id)arg1 includeDebugData:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_saveDebugModelToURL:(id)arg1 error:(id*)arg2 ;
@end

