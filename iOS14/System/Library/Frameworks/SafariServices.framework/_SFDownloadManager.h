/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/_SFDownloadDelegate.h>

@protocol _SFDownloadDelegate;
@class NSMutableArray, NSURL, WBSCoalescedAsynchronousWriter, NSMapTable, NSTimer, _SFDownloadIconCache, NSArray, NSString;

@interface _SFDownloadManager : NSObject <_SFDownloadDelegate> {

	NSMutableArray* _downloads;
	NSURL* _downloadHistoryURL;
	WBSCoalescedAsynchronousWriter* _historyWriter;
	BOOL _loadedDownloadHistory;
	/*^block*/id _blockToExecuteWhenDownloadHistoryIsLoaded;
	NSMapTable* _downloadsToDeferAdding;
	NSTimer* _removeDownloadsTimer;
	NSTimer* _updateTotalProgressTimer;
	NSURL* _downloadsRootURL;
	id<_SFDownloadDelegate> _extraDownloadDelegate;
	_SFDownloadIconCache* _iconCache;
	double _totalProgress;

}

@property (nonatomic,readonly) NSURL * downloadsRootURL;                                        //@synthesize downloadsRootURL=_downloadsRootURL - In the implementation block
@property (assign,nonatomic,__weak) id<_SFDownloadDelegate> extraDownloadDelegate;              //@synthesize extraDownloadDelegate=_extraDownloadDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * downloads; 
@property (nonatomic,readonly) _SFDownloadIconCache * iconCache;                                //@synthesize iconCache=_iconCache - In the implementation block
@property (nonatomic,readonly) double totalProgress;                                            //@synthesize totalProgress=_totalProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)downloadRepresentationsAtURL:(id)arg1 ;
+(id)defaultDownloadsHistoryURL;
-(NSArray *)downloads;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)downloadDidImportFileToDownloadsFolder:(id)arg1 ;
-(BOOL)_canExpireDownloadOnCompletion:(id)arg1 ;
-(void)createDirectoryForDownload:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateTotalProgress:(id)arg1 ;
-(double)_calculateTotalProgress;
-(BOOL)shouldExcludeDownloadFromList:(id)arg1 ;
-(void)_removeDeletedDownloads;
-(void)setExtraDownloadDelegate:(id<_SFDownloadDelegate>)arg1 ;
-(NSURL *)downloadsRootURL;
-(_SFDownloadIconCache *)iconCache;
-(void)downloadDidStart:(id)arg1 ;
-(void)_startUpdateTotalProgressTimerIfNeeded;
-(void)_loadDownloadHistoryAsynchronous:(BOOL)arg1 ;
-(void)_removeOldDownloadsAndUpdateTimerIfNeeded;
-(id<_SFDownloadDelegate>)extraDownloadDelegate;
-(id)initAsReadonly:(BOOL)arg1 ;
-(void)deferAddingDownloadWhenStarted:(id)arg1 ;
-(BOOL)shouldExcludeDownloadFromFileSystem:(id)arg1 ;
-(void)_addDownload:(id)arg1 ;
-(void)downloadDidReceiveResponse:(id)arg1 ;
-(void)downloadShouldContinueAfterReceivingResponse:(id)arg1 decisionHandler:(/*^block*/id)arg2 ;
-(void)removeDownloads:(id)arg1 ;
-(double)totalProgress;
-(void)downloadContentsDidChange:(id)arg1 ;
-(void)_loadDownloadHistory;
-(void)downloadWillBeDeleted:(id)arg1 ;
-(void)_noteDownloadsChanged;
-(BOOL)downloadShouldImportPlaceholderToDownloadsFolder:(id)arg1 ;
-(void)downloadDidFinish:(id)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)getDownloadsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeDownloadsStartedAfterDate:(id)arg1 ;
-(id)_dataForPersistingToHistory;
-(void)downloadDidResume:(id)arg1 ;
-(void)reloadDownloadsSynchronously;
-(void)downloadDidFail:(id)arg1 ;
-(void)savePendingChangesBeforeTermination;
-(id)_containerDirectoryForDownload:(id)arg1 ;
-(id)_busyDownloads;
-(void)dealloc;
@end

