/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAXSpeechManager.dylib
*/

#import <Foundation/NSThread.h>

@class NSPort, NSRunLoop;

@interface AXSpeechThread : NSThread {

	NSPort* _machPort;
	NSRunLoop* _threadRunLoop;

}
-(id)init;
-(void)stop;
-(void)main;
-(void)cancel;
@end

