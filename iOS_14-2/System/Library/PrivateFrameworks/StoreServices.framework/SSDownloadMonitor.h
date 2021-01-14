/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol SSDownloadMonitorDelegate, OS_dispatch_queue;
@class SSXPCConnection, NSObject;

@interface SSDownloadMonitor : NSObject {

	SSXPCConnection* _connection;
	id<SSDownloadMonitorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (assign) id<SSDownloadMonitorDelegate> delegate; 
-(id)init;
-(id<SSDownloadMonitorDelegate>)delegate;
-(void)setDelegate:(id<SSDownloadMonitorDelegate>)arg1 ;
-(id)_copyItemsWithReply:(id)arg1 error:(id*)arg2 ;
-(void)getMonitorItemsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)pauseMonitorItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)prioritizeMonitorItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resumeMonitorItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_reloadForChangeNotification;
-(id)_connection;
-(void)dealloc;
@end

