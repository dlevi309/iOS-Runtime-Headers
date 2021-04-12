/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreIndoor/CoreIndoor-Structs.h>
@class NSObject, NSXPCConnection;

@interface CLIndoorXPCProvider : NSObject {

	NSObject*<OS_dispatch_queue> _frameworkQueue;
	NSXPCConnection* _connection;
	optional<std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > > _lastReconnectTime;
	NSObject*<OS_dispatch_source> _interruptReconnection;

}
+(id)newConnectionFor:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)initWithEndpoint:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(id)impl;
-(void)withinQueueReinitializeRemoteState;
-(void)withinQueueInitializeConnection;
-(void)withinQueueInvalidate;
-(void)withinQueueHandleReconnect:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg1 ;
-(int)withinQueueShouldReinitializeRemote:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg1 ;
-(void)withinQueueScheduleReconnect:(duration<long long, std::__1::ratio<1, 1000000000> >)arg1 reason:(id)arg2 ;
-(/*^block*/id)_defaultErrHandler:(/*^block*/id)arg1 forCaller:(id)arg2 ;
-(void)withinQueueInterruptionHandler;
-(/*^block*/id)_defaultErrHandlerForCaller:(id)arg1 ;
@end

