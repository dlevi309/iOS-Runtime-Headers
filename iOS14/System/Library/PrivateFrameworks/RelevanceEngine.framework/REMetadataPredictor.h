/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REPredictor.h>

@class NSMutableDictionary;

@interface REMetadataPredictor : REPredictor {

	NSMutableDictionary* _interactionFeatureValueCache;
	NSMutableDictionary* _sectionFeatureValueCache;

}
+(id)supportedFeatures;
-(void)update;
-(id)_init;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
@end

