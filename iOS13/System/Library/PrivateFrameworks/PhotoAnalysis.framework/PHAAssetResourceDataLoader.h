/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <libobjc.A.dylib/PHAAssetResourceDataLoading.h>

@protocol OS_dispatch_queue, PHADownloadRequestManagement;
@class NSObject, NSMutableSet, PHPhotoLibrary, NSString;

@interface PHAAssetResourceDataLoader : NSObject <PHAAssetResourceDataLoading> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _activeDownloads;
	PHPhotoLibrary* _photoLibrary;
	id<PHADownloadRequestManagement> _downloadRequestManager;

}

@property (nonatomic,retain) id<PHADownloadRequestManagement> downloadRequestManager;              //@synthesize downloadRequestManager=_downloadRequestManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataLoaderWithDefaultConfigurationForPhotoLibrary:(id)arg1 ;
-(id)init;
-(void)cancelAllDownloads;
-(id)_localFileURLForAssetResource:(id)arg1 error:(id*)arg2 ;
-(id)assetResourceFromAcceptableAssetResources:(id)arg1 options:(id)arg2 ;
-(void)requestDataForAssetResource:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_firstLocallyAvailableAssetResourceFromAssetResources:(id)arg1 ;
-(void)_inq_downloadAssetResource:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_inq_cancelAllDownloads;
-(id<PHADownloadRequestManagement>)downloadRequestManager;
-(void)setDownloadRequestManager:(id<PHADownloadRequestManagement>)arg1 ;
@end

