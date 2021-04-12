/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REMLModel.h>
#import <libobjc.A.dylib/REMLLinearModelProperties.h>

@class NSDictionary;

@interface REMLLinearModel : REMLModel <REMLLinearModelProperties> {

	NSDictionary* _models;

}

@property (nonatomic,readonly) NSDictionary * models; 
-(void)_clearCache;
-(NSDictionary *)models;
-(void)setMetricsRecorder:(id)arg1 ;
-(id)initWithFeatureSet:(id)arg1 interactionDescriptors:(id)arg2 ;
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

