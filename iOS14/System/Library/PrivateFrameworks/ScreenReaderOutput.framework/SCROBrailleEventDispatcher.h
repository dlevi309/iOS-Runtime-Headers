/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSLock, NSMutableArray;

@interface SCROBrailleEventDispatcher : NSObject {

	NSLock* _queueLock;
	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _queueSource;
	NSMutableArray* _queue;
	NSMutableArray* _brailleEventQueue;
	id _target;
	BOOL _isValid;

}
-(id)initWithTarget:(id)arg1 ;
-(void)start;
-(void)_processQueue;
-(BOOL)isValid;
-(void)invalidate;
-(void)enqueueEvent:(id)arg1 ;
-(void)dealloc;
@end

