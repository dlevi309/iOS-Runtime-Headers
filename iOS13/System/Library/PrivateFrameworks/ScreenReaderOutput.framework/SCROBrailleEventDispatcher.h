/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(void)start;
-(id)initWithTarget:(id)arg1 ;
-(void)_processQueue;
-(void)enqueueEvent:(id)arg1 ;
@end

