/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REActivitySummaryPredictorProperties.h>

@class NSSet;

@interface REActivitySummaryPredictor : REPredictor <REActivitySummaryPredictorProperties> {

	NSSet* _queries;
	float _activeEnergyPercentComplete;
	float _exerciseTimePercentComplete;
	float _standHourPercentComplete;

}

@property (assign) float activeEnergyPercentComplete;              //@synthesize activeEnergyPercentComplete=_activeEnergyPercentComplete - In the implementation block
@property (assign) float exerciseTimePercentComplete;              //@synthesize exerciseTimePercentComplete=_exerciseTimePercentComplete - In the implementation block
@property (assign) float standHourPercentComplete;                 //@synthesize standHourPercentComplete=_standHourPercentComplete - In the implementation block
+(double)updateInterval;
+(id)supportedFeatures;
-(id)_init;
-(void)pause;
-(void)resume;
-(void)update;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(void)setActiveEnergyPercentComplete:(float)arg1 ;
-(void)setExerciseTimePercentComplete:(float)arg1 ;
-(void)setStandHourPercentComplete:(float)arg1 ;
-(void)_startActivitySummaryQueryWithRetries:(long long)arg1 ;
-(void)_stopQueries;
-(float)activeEnergyPercentComplete;
-(float)exerciseTimePercentComplete;
-(float)standHourPercentComplete;
-(void)_stopQuery:(id)arg1 ;
-(void)_updateWithActivitySummary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_runQuery:(id)arg1 ;
@end

