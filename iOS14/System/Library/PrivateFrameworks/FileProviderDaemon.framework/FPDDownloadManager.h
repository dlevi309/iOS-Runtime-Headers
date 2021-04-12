/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface FPDDownloadManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _preflightQueue;

}
+(void)initialize;
+(id)sharedInstance;
+(id)acquireDownloadSlotForItem:(id)arg1 ;
+(void)releaseDownloadSlot:(id)arg1 ;
-(id)init;
-(void)progressComputationPreflightForRecursiveRoot:(id)arg1 downloader:(id)arg2 itemProgressNeedsSetup:(/*^block*/id)arg3 itemProgressSetup:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)retrieveFPItemForURL:(id)arg1 domain:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)progressComputationPreflightForItem:(id)arg1 ;
-(void)downloadItem:(id)arg1 recursively:(BOOL)arg2 downloader:(id)arg3 request:(id)arg4 perItemCompletion:(/*^block*/id)arg5 withCompletion:(/*^block*/id)arg6 ;
-(void)_recursivelyDownloadItem:(id)arg1 downloader:(id)arg2 request:(id)arg3 perItemCompletion:(/*^block*/id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)_downloadItem:(id)arg1 downloader:(id)arg2 request:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)downloadItems:(id)arg1 recursively:(BOOL)arg2 downloader:(id)arg3 request:(id)arg4 perItemCompletion:(/*^block*/id)arg5 withCompletion:(/*^block*/id)arg6 ;
@end

