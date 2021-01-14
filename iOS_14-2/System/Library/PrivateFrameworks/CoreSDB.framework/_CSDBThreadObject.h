/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)thread;
-(BOOL)isCurrentThreadOtherwiseAssert:(BOOL)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 qosClass:(unsigned short)arg2 ;
-(void)_threadedMain;
-(void)performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(void)dealloc;
@end

