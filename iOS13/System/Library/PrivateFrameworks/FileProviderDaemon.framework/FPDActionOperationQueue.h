/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <libobjc.A.dylib/FPCancellable.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSMutableArray;

@interface FPDActionOperationQueue : NSObject <FPCancellable> {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _maxLength;
	NSMutableArray* _fifo;
	NSObject*<OS_dispatch_semaphore> _enqueueSema;
	NSObject*<OS_dispatch_semaphore> _dequeueSema;
	BOOL _finishedEnqueuing;
	BOOL _cancelled;

}
-(void)cancel;
-(id)dequeue;
-(void)enqueue:(id)arg1 ;
-(void)dumpStateTo:(id)arg1 ;
-(id)initWithMoveInfo:(id)arg1 ;
-(void)finishedEnqueuing;
@end

