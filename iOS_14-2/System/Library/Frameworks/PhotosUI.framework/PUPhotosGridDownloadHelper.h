/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol OS_dispatch_queue, PUPhotosGridDownloadUpdateHandler;
@class NSMutableDictionary, NSObject;

@interface PUPhotosGridDownloadHelper : NSObject {

	NSMutableDictionary* _downloadContexts;
	NSObject*<OS_dispatch_queue> _downloadContextsIsolationQueue;
	BOOL _shouldTreatLivePhotosAsStills;
	id<PUPhotosGridDownloadUpdateHandler> _updateHandler;
	long long _mode;

}

@property (nonatomic,__weak,readonly) id<PUPhotosGridDownloadUpdateHandler> updateHandler;              //@synthesize updateHandler=_updateHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldTreatLivePhotosAsStills;                                        //@synthesize shouldTreatLivePhotosAsStills=_shouldTreatLivePhotosAsStills - In the implementation block
@property (assign,nonatomic) long long mode;                                                            //@synthesize mode=_mode - In the implementation block
+(id)createAlertControllerForDownloadError:(id)arg1 withAsset:(id)arg2 ;
-(long long)mode;
-(id)init;
-(id<PUPhotosGridDownloadUpdateHandler>)updateHandler;
-(void)setMode:(long long)arg1 ;
-(id)_defaultOptions;
-(id)initWithGridViewController:(id)arg1 ;
-(BOOL)isAnyPickerAssetDownloading:(id)arg1 ;
-(void)_cancelPreviousDownloadsForAsset:(id)arg1 ;
-(void)_checkIfRetrievalIsRequiredForResourceRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startRetrievingRequiredResourcesForRequest:(id)arg1 options:(id)arg2 inCollection:(id)arg3 ;
-(void)_updateDownloadProgressForAsset:(id)arg1 ;
-(void)_setDownloadContext:(id)arg1 forIdentifier:(id)arg2 ;
-(void)_downloadForRequest:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 canceled:(BOOL)arg3 error:(id)arg4 ;
-(id)_downloadContextForIdentifier:(id)arg1 ;
-(void)_removeDownloadRequestForIdentifier:(id)arg1 ;
-(BOOL)shouldTreatLivePhotosAsStills;
-(void)cancelAllDownloads;
-(id)initWithUpdateHandler:(id)arg1 ;
-(void)handleDownloadOfAssetIfNeeded:(id)arg1 inCollection:(id)arg2 withSuccessHandler:(/*^block*/id)arg3 ;
-(void)cancelDownloadForIdentifier:(id)arg1 ;
-(void)setShouldTreatLivePhotosAsStills:(BOOL)arg1 ;
@end

