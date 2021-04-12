/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSDownloadManager.h>
#import <libobjc.A.dylib/ASDJobManagerObserver.h>

@class ASDJobManager, NSString;

@interface SSDownloadManagerAppShim : SSDownloadManager <ASDJobManagerObserver> {

	ASDJobManager* _jobManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelAllDownloadsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setDownloads:(id)arg1 forKinds:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithManagerOptions:(id)arg1 ;
-(void)__app_insertDownloads:(id)arg1 before:(id)arg2 after:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)__app_setPropertiesForActivity:(id)arg1 withDownload:(id)arg2 ;
-(void)moveDownload:(id)arg1 afterDownload:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)moveDownload:(id)arg1 beforeDownload:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)resumeDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)restartDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_insertDownloads:(id)arg1 before:(id)arg2 after:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_sendDownloadsChanged:(id)arg1 ;
-(void)finishDownloads:(id)arg1 ;
-(id)__app_newAssetWithDownloadAsset:(id)arg1 assetType:(id)arg2 ;
-(void)_pauseDownloads:(id)arg1 forced:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_copyDownloadsForMessage:(long long)arg1 downloadIDs:(id)arg2 ;
-(void)__app_resumeDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)jobManager:(id)arg1 changedJobs:(id)arg2 ;
-(id)__app_convertOptions:(id)arg1 ;
-(void)__app_finishDownloads:(id)arg1 ;
-(void)__app_sendDownloadsChanged:(id)arg1 filterSoftware:(BOOL)arg2 ;
-(void)__app_pauseDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)__app_filterDownloads:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)__app_newManifestWithType:(long long)arg1 ;
-(id)__app_downloadsForJobs:(id)arg1 ;
-(void)jobManager:(id)arg1 updatedProgressOfJobs:(id)arg2 ;
-(id)__app_getAllDownloads;
-(id)__app_newActivityWithDownload:(id)arg1 ;
-(void)jobManager:(id)arg1 updatedStateOfJobs:(id)arg2 ;
-(void)__app_cancelDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)__app_dispatchBlock:(/*^block*/id)arg1 withError:(id)arg2 ;
-(void)__app_installManifest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)__app_extractJobIDsFromSoftwareDownloads:(id)arg1 ;
-(void)cancelDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

