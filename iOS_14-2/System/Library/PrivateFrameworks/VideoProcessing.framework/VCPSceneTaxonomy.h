/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

