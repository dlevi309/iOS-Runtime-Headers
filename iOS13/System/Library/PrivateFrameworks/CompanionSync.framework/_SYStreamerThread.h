/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <Foundation/NSThread.h>

@class NSRunLoop, NSConditionLock;

@interface _SYStreamerThread : NSThread {

	NSRunLoop* _threadRunLoop;
	CFRunLoopSourceRef _stopRLS;
	NSConditionLock* _startupLock;

}

@property (nonatomic,readonly) NSRunLoop * runLoop; 
+(id)streamerThread;
-(id)init;
-(void)main;
-(NSRunLoop *)runLoop;
-(void)_waitForStartup;
@end

