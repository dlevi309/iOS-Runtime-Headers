/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group, WBSCoalescedAsynchronousWriterDelegate;
#import <SafariShared/SafariShared-Structs.h>
@class NSObject, NSURL, NSString;

@interface WBSCoalescedAsynchronousWriter : NSObject {

	NSObject*<OS_dispatch_queue> _diskAccessQueue;
	NSURL* _fileURL;
	/*^block*/id _writerBlock;
	/*^block*/id _dataSourceBlock;
	NSObject*<OS_dispatch_queue> _dataSourceQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_source> _timer;
	double _writeDelayInterval;
	NSObject*<OS_dispatch_group> _writeGroup;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* _suddenTerminationDisabler;
	BOOL _done;
	NSString* _name;
	id<WBSCoalescedAsynchronousWriterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WBSCoalescedAsynchronousWriterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<WBSCoalescedAsynchronousWriterDelegate>)delegate;
-(void)setDelegate:(id<WBSCoalescedAsynchronousWriterDelegate>)arg1 ;
-(void)_invalidateTimer;
-(void)_timerFired;
-(id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceBlock:(/*^block*/id)arg3 ;
-(void)scheduleWrite;
-(void)completePendingWriteSynchronously;
-(void)_writeData:(id)arg1 ;
-(void)_scheduleTimer;
-(id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(/*^block*/id)arg4 ;
-(id)_initWithName:(id)arg1 fileURL:(id)arg2 writerBlock:(/*^block*/id)arg3 dataSourceQueue:(id)arg4 dataSourceBlock:(/*^block*/id)arg5 writeDelayInterval:(double)arg6 ;
-(id)initWithName:(id)arg1 writerBlock:(/*^block*/id)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(/*^block*/id)arg4 ;
-(id)_dataFromDataSource;
-(void)_writeDataAsynchronously:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_waitForWriteCompletion;
-(void)startScheduledWriteNowWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cancelPendingWriteSynchronouslyLeavingSuddenTerminationIntact;
-(id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceBlock:(/*^block*/id)arg3 writeDelayInterval:(double)arg4 ;
-(id)initWithName:(id)arg1 writerBlock:(/*^block*/id)arg2 dataSourceBlock:(/*^block*/id)arg3 ;
-(void)startScheduledWriteNow;
-(void)performScheduledWriteSynchronously;
-(void)cancelPendingWriteSynchronously;
@end

