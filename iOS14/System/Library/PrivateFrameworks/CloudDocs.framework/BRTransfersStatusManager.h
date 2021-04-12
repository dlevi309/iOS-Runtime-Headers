/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSMutableArray, NSOperationQueue, NSProgress, NSObject, NSArray;

@interface BRTransfersStatusManager : NSObject {

	NSMutableArray* _transfers;
	NSOperationQueue* _operationQueue;
	NSProgress* _globalUploadProgress;
	NSProgress* _globalDownloadProgress;
	id _globalProgressSubscriber;
	unsigned long long _shouldHideGlobalDownloadProgressCount;
	NSObject*<OS_dispatch_source> _timerToDisplayGlobalProgress;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (copy,readonly) NSArray * transfers;              //@synthesize transfers=_transfers - In the implementation block
+(id)defaultManager;
-(id)init;
-(void)addTransfer:(id)arg1 ;
-(void)_progressSubscription;
-(id)startObservingItemDownloadProgressAtURL:(id)arg1 ;
-(void)stopObservingItemDownloadProgress:(id)arg1 ;
-(void)_setupTimerToDisplayGlobalProgress;
-(void)insertTransfer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)showGlobalProgressIfNeeded;
-(void)_setGlobalProgress:(id)arg1 forIvar:(id*)arg2 ;
-(void)downloadAndObserveItemAtURL:(id)arg1 handler:(/*^block*/id)arg2 ;
-(NSArray *)transfers;
-(void)removeTransfer:(id)arg1 ;
-(void)dealloc;
@end

