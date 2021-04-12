/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithConnection:(id)arg1 ;
-(id)init;
-(id)initWithEndpoint:(id)arg1 ;
-(void)invalidate;
-(void)withinQueueReinitializeRemoteState;
-(void)dealloc;
-(id)impl;
-(void)withinQueueInitializeConnection;
-(void)withinQueueInvalidate;
-(void)withinQueueHandleReconnect:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg1 ;
-(int)withinQueueShouldReinitializeRemote:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg1 ;
-(void)withinQueueScheduleReconnect:(duration<long long, std::__1::ratio<1, 1000000000> >)arg1 reason:(id)arg2 ;
-(/*^block*/id)_defaultErrHandler:(/*^block*/id)arg1 forCaller:(id)arg2 ;
-(void)withinQueueInterruptionHandler;
-(/*^block*/id)_defaultErrHandlerForCaller:(id)arg1 ;
@end

