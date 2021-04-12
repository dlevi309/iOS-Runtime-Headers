/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REMLModel.h>
#import <libobjc.A.dylib/REMLLinearModelProperties.h>

@class NSDictionary;

@interface REMLLinearModel : REMLModel <REMLLinearModelProperties> {

	NSDictionary* _models;

}

@property (nonatomic,readonly) NSDictionary * models; 
-(NSDictionary *)models;
-(void)_clearCache;
-(id)initWithFeatureSet:(id)arg1 interactionDescriptors:(id)arg2 ;
-(void)setMetricsRecorder:(id)arg1 ;
-(void)logCoreAnalyticsMetrics;
-(BOOL)requiresDirectory;
-(void)trainWithFeatures:(id)arg1 positiveEvent:(id)arg2 interaction:(id)arg3 ;
-(id)_predictWithFeatures:(id)arg1 ;
-(void)_enumerateModelsForFeatureMap:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_clearModel;
-(float)_getAveragePrediction;
-(float)_getNormalizedEntropy;
-(long long)_getNumberOfCoordinates;
-(unsigned long long)_getTotalExampleCount;
-(unsigned long long)_getTotalPositiveCount;
-(void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2 ;
-(id)predictionSetWithFeatures:(id)arg1 ;
-(BOOL)_saveModelToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_loadModelFromURL:(id)arg1 error:(id*)arg2 ;
@end

