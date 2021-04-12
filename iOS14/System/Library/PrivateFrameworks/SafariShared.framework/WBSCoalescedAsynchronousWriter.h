/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group, WBSCoalescedAsynchronousWriterDelegate;
#import <SafariShared/SafariShared-Structs.h>
@class NSObject, NSURL, NSDictionary, NSString;

@interface WBSCoalescedAsynchronousWriter : NSObject {

	NSObject*<OS_dispatch_queue> _diskAccessQueue;
	NSURL* _fileURL;
	/*^block*/id _writerBlock;
	/*^block*/id _dataSourceBlock;
	NSObject*<OS_dispatch_queue> _dataSourceQueue;
	NSDictionary* _fileResourceValues;
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
-(id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceBlock:(/*^block*/id)arg3 ;
-(void)_writeDataAsynchronously:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<WBSCoalescedAsynchronousWriterDelegate>)delegate;
-(id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceBlock:(/*^block*/id)arg3 writeDelayInterval:(double)arg4 ;
-(void)startScheduledWriteNow;
-(id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(/*^block*/id)arg4 ;
-(id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(/*^block*/id)arg4 fileResourceValues:(id)arg5 ;
-(void)cancelPendingWriteSynchronously;
-(id)initWithName:(id)arg1 writerBlock:(/*^block*/id)arg2 dataSourceBlock:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<WBSCoalescedAsynchronousWriterDelegate>)arg1 ;
-(void)performScheduledWriteSynchronously;
-(void)startScheduledWriteNowWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_timerFired;
-(void)completePendingWriteSynchronously;
-(void)_cancelPendingWriteSynchronouslyLeavingSuddenTerminationIntact;
-(id)_dataFromDataSource;
-(void)_invalidateTimer;
-(id)initWithName:(id)arg1 writerBlock:(/*^block*/id)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(/*^block*/id)arg4 ;
-(void)scheduleWrite;
-(void)_waitForWriteCompletion;
-(id)_initWithName:(id)arg1 fileURL:(id)arg2 writerBlock:(/*^block*/id)arg3 dataSourceQueue:(id)arg4 dataSourceBlock:(/*^block*/id)arg5 writeDelayInterval:(double)arg6 fileResourceValues:(id)arg7 ;
-(void)dealloc;
-(void)_writeData:(id)arg1 ;
-(void)_scheduleTimer;
@end

