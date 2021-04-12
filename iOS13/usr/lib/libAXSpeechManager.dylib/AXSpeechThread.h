/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAXSpeechManager.dylib
*/

#import <Foundation/NSThread.h>

@class NSPort, NSRunLoop;

@interface AXSpeechThread : NSThread {

	NSPort* _machPort;
	NSRunLoop* _threadRunLoop;

}
-(id)init;
-(void)cancel;
-(void)stop;
-(void)main;
@end

