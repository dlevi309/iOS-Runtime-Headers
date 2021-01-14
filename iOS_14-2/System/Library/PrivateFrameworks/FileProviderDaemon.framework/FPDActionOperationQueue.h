/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dequeue;
-(void)dumpStateTo:(id)arg1 ;
-(void)enqueue:(id)arg1 ;
-(void)cancel;
-(id)initWithMoveInfo:(id)arg1 ;
-(void)finishedEnqueuing;
@end

