/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@protocol OS_dispatch_queue;
@class NSArray, SUClientInterface, NSObject, SSDownloadManager, NSMutableDictionary;

@interface SUDownloadManager : NSObject {

	NSArray* _cachedDownloads;
	SUClientInterface* _clientInterface;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSDownloadManager* _downloadManager;
	NSMutableDictionary* _downloadsByID;

}

@property (nonatomic,readonly) SSDownloadManager * downloadManager; 
@property (nonatomic,readonly) NSArray * downloads; 
-(void)dealloc;
-(id)initWithDownloadManager:(id)arg1 ;
-(NSArray *)downloads;
-(SSDownloadManager *)downloadManager;
-(void)_reloadDownloadManager;
-(void)reloadDownloadManager;
-(id)initWithDownloadManager:(id)arg1 clientInterface:(id)arg2 ;
-(void)preflightWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_removeObject:(id)arg1 fromArray:(id*)arg2 ;
-(void)_finishPreflightWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)deleteDownload:(id)arg1 ;
-(id)downloadForDownloadIdentifier:(long long)arg1 ;
@end

