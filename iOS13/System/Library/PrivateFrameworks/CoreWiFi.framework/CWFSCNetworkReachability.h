/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/


@protocol OS_dispatch_queue;
#import <CoreWiFi/CoreWiFi-Structs.h>
@class NSObject;

@interface CWFSCNetworkReachability : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	SCNetworkReachabilityRef _reachabilityRef;
	BOOL _isMonitoringEvents;
	/*^block*/id _eventHandler;

}

@property (copy) id eventHandler;              //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned)flags;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(void)startEventMonitoring;
-(void)stopEventMonitoring;
-(BOOL)isMonitoringEvents;
@end

