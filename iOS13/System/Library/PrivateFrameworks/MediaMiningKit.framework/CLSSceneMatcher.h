/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSMutableDictionary;

@interface CLSSceneMatcher : NSObject {

	NSMutableDictionary* _confidenceThresholdBySceneIdentifierBySceneLabel;

}
+(id)confidenceThresholdTypeBySceneLabel;
+(id)sceneNameBySceneLabel;
+(id)sharedSceneMatcher;
+(id)junkSceneNames;
+(id)junkSceneNamesLegacy;
+(id)babyChildTeenAdultAndPetSceneNames;
+(id)babyAndPetSceneNames;
+(id)childTeenAndAdultSceneNames;
+(id)interestingSceneNames;
+(id)whiteboardSceneNames;
-(id)confidenceThresholdBySceneIdentifierForSceneLabel:(id)arg1 ;
@end

