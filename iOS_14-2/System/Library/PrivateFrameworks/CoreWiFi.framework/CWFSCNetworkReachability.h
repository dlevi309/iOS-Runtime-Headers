/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isMonitoringEvents;
-(id)eventHandler;
-(void)stopEventMonitoring;
-(void)setEventHandler:(id)arg1 ;
-(id)init;
-(unsigned)flags;
-(void)startEventMonitoring;
-(void)dealloc;
@end

