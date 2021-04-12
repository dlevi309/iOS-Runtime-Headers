/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSURL, NSURLSessionDownloadTask;

@interface NTKGreenfieldDownloader : NSObject {

	NSURL* _remoteWatchFaceURL;
	NSURLSessionDownloadTask* _downloadTask;
	NSURL* _downloadedFileURL;

}
-(void)cancelDownload;
-(id)_downloadURL;
-(id)_downloadedFolderURL;
-(long long)_greenfieldErrorFromURLSessionError:(long long)arg1 ;
-(BOOL)_copyFileFromURL:(id)arg1 ;
-(id)initWithWatchFaceURL:(id)arg1 ;
-(void)downloadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)downloadCleanUp;
@end

