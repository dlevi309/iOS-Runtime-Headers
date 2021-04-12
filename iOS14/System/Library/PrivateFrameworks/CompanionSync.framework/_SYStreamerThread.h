/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

