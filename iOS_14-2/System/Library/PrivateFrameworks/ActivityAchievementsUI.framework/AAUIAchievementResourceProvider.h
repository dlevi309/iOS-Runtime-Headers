/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsUI.framework/ActivityAchievementsUI
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AAUIAchievementResourceProvider : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(id)badgeConfigurationForAchievement:(id)arg1 ;
-(id)_modelFilePathForAchievement:(id)arg1 ;
-(id)_compressedBadgeModelPathForAchievement:(id)arg1 ;
-(id)_modelDirectoryForAchievement:(id)arg1 ;
-(BOOL)_queue_decompressZipFileAtPath:(id)arg1 toDirectory:(id)arg2 ;
-(id)_assetBundleForAchievement:(id)arg1 ;
-(id)badgeModelPathForAchievement:(id)arg1 ;
-(id)texturePathForAchievement:(id)arg1 ;
-(id)metalColorForAchievement:(id)arg1 ;
-(id)enamelColorForAchievement:(id)arg1 ;
-(id)_cachedModelsPath;
-(id)_badgeModelFilename;
-(id)stickersBundlePathForAchievement:(id)arg1 ;
-(id)stickerURLsForAchievement:(id)arg1 ;
-(id)backSideIconImageForAchievement:(id)arg1 ;
@end

