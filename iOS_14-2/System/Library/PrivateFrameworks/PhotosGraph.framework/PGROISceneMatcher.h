/*
* Generated on Thursday, January 14, 2021 at 2:25:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSMutableDictionary;

@interface PGROISceneMatcher : NSObject {

	NSMutableDictionary* _confidenceThresholdByWhitelistedSceneIdentifierByROILabel;
	NSMutableDictionary* _confidenceThresholdByBlacklistedSceneIdentifierByROILabel;

}
+(id)confidenceThresholdBySceneIdentifierWithSceneNames:(id)arg1 blacklisted:(BOOL)arg2 ;
+(id)blacklistedSceneNamesByROILabel;
+(id)whitelistedSceneNamesByROILabel;
+(id)sharedROISceneMatcher;
+(id)beachSceneNames;
+(id)mountainSceneNames;
+(id)natureSceneNames;
+(id)nonNatureSceneNames;
+(id)waterSceneNames;
+(id)nonWaterSceneNames;
+(id)urbanSceneNames;
-(id)confidenceThresholdByWhitelistedSceneIdentifierForROILabel:(id)arg1 ;
-(id)confidenceThresholdByBlacklistedSceneIdentifierForROILabel:(id)arg1 ;
@end

