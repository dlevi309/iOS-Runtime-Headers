/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REPredictor.h>

@class NSMutableDictionary;

@interface REMetadataPredictor : REPredictor {

	NSMutableDictionary* _interactionFeatureValueCache;
	NSMutableDictionary* _sectionFeatureValueCache;

}
+(id)supportedFeatures;
-(id)_init;
-(void)update;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
@end

