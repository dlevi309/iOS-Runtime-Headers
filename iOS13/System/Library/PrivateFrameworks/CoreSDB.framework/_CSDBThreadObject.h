/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSDB.framework/CoreSDB
*/


@protocol OS_dispatch_queue;
#import <CoreSDB/CoreSDB-Structs.h>
@class NSThread, NSString, NSRunLoop, NSObject;

@interface _CSDBThreadObject : NSObject {

	NSThread* _thread;
	NSString* _identifier;
	NSRunLoop* _runLoop;
	CFRunLoopSourceRef _runLoopSource;
	NSString* _queueContext;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)_threadedMain;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(id)thread;
-(id)initWithIdentifier:(id)arg1 qosClass:(unsigned short)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(BOOL)isCurrentThreadOtherwiseAssert:(BOOL)arg1 ;
@end

