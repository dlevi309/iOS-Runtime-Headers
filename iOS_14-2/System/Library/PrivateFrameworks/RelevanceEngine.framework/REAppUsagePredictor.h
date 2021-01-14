/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REAppUsagePredictorProperties.h>

@class RETimeline;

@interface REAppUsagePredictor : REPredictor <REAppUsagePredictorProperties> {

	RETimeline* _timeline;

}

@property (nonatomic,readonly) RETimeline * timeline; 
+(double)updateInterval;
+(id)supportedFeatures;
-(void)update;
-(RETimeline *)timeline;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
@end

