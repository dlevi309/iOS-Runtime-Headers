/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSDownloadManager.h>

@protocol SSBookDownloadQueue;
@interface SSDownloadManagerBookShim2 : SSDownloadManager {

	id<SSBookDownloadQueue> _downloadQueue;

}
-(void)resumeDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)cancelDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithManagerOptions:(id)arg1 ;
-(void)moveDownload:(id)arg1 afterDownload:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)restartDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)__book_downloadsForStati:(id)arg1 overrideFinished:(BOOL)arg2 overrideFailed:(BOOL)arg3 ;
-(void)__book_sendDownloadsChanged:(id)arg1 filterBooks:(BOOL)arg2 ;
-(void)__book_cancelDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)__book_dispatchBlock:(/*^block*/id)arg1 withError:(id)arg2 ;
-(void)__book_filterDownloads:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)moveDownload:(id)arg1 beforeDownload:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)__book_resumeDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_copyDownloadsForMessage:(long long)arg1 downloadIDs:(id)arg2 ;
-(id)__book_getAllDownloads;
-(void)__book_pauseDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_pauseDownloads:(id)arg1 forced:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_sendDownloadsChanged:(id)arg1 ;
-(void)downloadQueue:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadQueue:(id)arg1 downloadStates:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)bookDownloads;
@end

