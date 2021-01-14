/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(void)_attemptReconnect;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)dealloc;
@end

