/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CFMorphunAssetsManager : NSObject {

	NSObject*<OS_dispatch_queue> queue;

}
+(id)sharedMorphunAssetsManager;
-(id)init;
-(void)cancelDownload:(id)arg1 ;
-(void)downloadAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)triggerMorphunAssetsManagement;
-(void)downloadAssetsForAssetType:(id)arg1 forLanguage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)replaceLanguageCodeFormat:(id)arg1 ;
-(id)downloadedLocalAsset:(id)arg1 forLanguage:(id)arg2 error:(id*)arg3 ;
-(void)downloadAssets:(id)arg1 language:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)morphunAssetsVersion:(id)arg1 forLanguage:(id)arg2 ;
-(id)morphunAssetsPathForLanguage:(id)arg1 ;
-(void)downloadMorphunAssetsForLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerPath:(id)arg1 withLanguage:(id)arg2 ;
@end

