/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(id)searchBlock;
-(void)setSearchBlock:(id)arg1 ;
-(void)_attemptDownloadSearch;
-(void)_finishWithDownload:(id)arg1 error:(id)arg2 ;
-(void)_beginMonitoringDownloadManager;
-(void)_endMonitoringDownloadManager;
-(void)dealloc;
@end

