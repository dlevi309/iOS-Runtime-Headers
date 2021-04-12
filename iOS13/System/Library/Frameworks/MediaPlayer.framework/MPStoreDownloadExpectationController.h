/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface MPStoreDownloadExpectationController : NSObject <MPStoreDownloadManagerObserver> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_source> _dispatchSource;
	unsigned long long _downloadManagerMonitorCount;
	/*^block*/id _searchBlock;
	double _timeout;

}

@property (nonatomic,copy) id searchBlock; 
@property (assign,nonatomic) double timeout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(id)searchBlock;
-(void)setSearchBlock:(id)arg1 ;
-(void)_attemptDownloadSearch;
-(void)_finishWithDownload:(id)arg1 error:(id)arg2 ;
-(void)_beginMonitoringDownloadManager;
-(void)_endMonitoringDownloadManager;
@end

