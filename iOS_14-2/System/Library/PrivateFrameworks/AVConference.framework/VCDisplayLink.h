/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>

@protocol OS_dispatch_semaphore;
@class CADisplayLink, NSRunLoop, NSObject;

@interface VCDisplayLink : VCObject {

	CADisplayLink* _caDisplayLink;
	tagVCRealTimeThread* _thread;
	NSRunLoop* _runLoop;
	unsigned long long _state;
	NSObject*<OS_dispatch_semaphore> _waitToRunSemaphore;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)deactivate;
-(BOOL)activate;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)dealloc;
-(BOOL)ensureDisplayIsReady;
-(void)handleWaitToRunTimeout;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 threadPriority:(unsigned)arg3 threadOptions:(unsigned)arg4 threadIdentifier:(id)arg5 ;
-(void)runDisplayLinkThreadWithStopRequested:(BOOL*)arg1 ;
@end

