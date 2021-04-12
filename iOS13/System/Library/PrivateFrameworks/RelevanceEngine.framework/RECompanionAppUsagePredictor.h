/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/RECompanionAppUsagePredictorProperties.h>

@class NSDictionary;

@interface RECompanionAppUsagePredictor : REPredictor <RECompanionAppUsagePredictorProperties> {

	NSDictionary* _predictions;

}

@property (nonatomic,readonly) NSDictionary * predictions; 
+(double)updateInterval;
-(void)dealloc;
-(id)_init;
-(void)update;
-(NSDictionary *)predictions;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(void)_loadStoreIfNeeded;
@end

