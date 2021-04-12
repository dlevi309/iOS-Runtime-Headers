/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class PVSceneTaxonomy;

@interface VCPSceneTaxonomy : NSObject {

	PVSceneTaxonomy* _sceneTaxonomy;

}
+(id)sharedTaxonomy;
-(id)init;
-(id)sceneNameFromSceneId:(unsigned)arg1 ;
-(id)sceneIdFromSceneName:(id)arg1 ;
@end

