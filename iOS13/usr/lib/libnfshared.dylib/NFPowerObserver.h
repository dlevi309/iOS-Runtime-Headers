/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/


@protocol OS_dispatch_queue;
#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
@class NFWeakReference, NSObject;

@interface NFPowerObserver : NSObject {

	NFWeakReference* _delegate;
	unsigned _powerNotificationConnection;
	IONotificationPortRef _powerNotificationPort;
	unsigned _powerNotificationNotifier;
	NSObject*<OS_dispatch_queue> _workQueue;
	void* _sleepMessageArgument;
	BOOL _willSleep;

}

@property (readonly) BOOL willSleep;              //@synthesize willSleep=_willSleep - In the implementation block
-(void)dealloc;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)unregisterForEvents;
-(BOOL)registerForEvents;
-(void)_powerNotificationMessage:(unsigned)arg1 argument:(void*)arg2 ;
-(void)allowSleep;
-(BOOL)willSleep;
@end

