/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/SSDownloadManagerObserver.h>

@class SSDownloadManager, NSOperationQueue, NSMutableDictionary, NSString;

@interface NSAsyncSSDownloadManager : NSObject <SSDownloadManagerObserver> {

	SSDownloadManager* _manager;
	NSOperationQueue* _queue;
	NSMutableDictionary* _downloads;
	BOOL _reconnectInProgress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(void)downloadHandlerDisconnected:(BOOL)arg1 ;
-(void)cancelDownload:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)withDownloadMatchingIdentifier:(id)arg1 perform:(/*^block*/id)arg2 ;
-(void)setDelegate:(id)arg1 forDownload:(long long)arg2 ;
-(void)addDownload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)finishDownload:(long long)arg1 ;
-(id)initWithDownloadManager:(id)arg1 ;
-(void)withDownload:(long long)arg1 perform:(/*^block*/id)arg2 ;
-(void)withDownload:(long long)arg1 performAsync:(/*^block*/id)arg2 ;
-(void)addDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_attemptReconnect;
@end

