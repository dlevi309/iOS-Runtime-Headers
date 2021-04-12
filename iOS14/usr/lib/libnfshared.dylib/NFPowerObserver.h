/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/


@protocol NFPowerObserverDelegate, OS_dispatch_queue;
#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
@class NSObject;

@interface NFPowerObserver : NSObject {

	id<NFPowerObserverDelegate> _delegate;
	unsigned _powerNotificationConnection;
	IONotificationPortRef _powerNotificationPort;
	unsigned _powerNotificationNotifier;
	NSObject*<OS_dispatch_queue> _workQueue;
	void* _sleepMessageArgument;
	BOOL _willSleep;

}

@property (readonly) BOOL willSleep;              //@synthesize willSleep=_willSleep - In the implementation block
-(void)_powerNotificationMessage:(unsigned)arg1 argument:(void*)arg2 ;
-(id)delegate;
-(void)allowSleep;
-(BOOL)isPluggedIntoPower;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)willSleep;
-(void)unregisterForEvents;
-(BOOL)registerForEvents;
-(void)dealloc;
@end

