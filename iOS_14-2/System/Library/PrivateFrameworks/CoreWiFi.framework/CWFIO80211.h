/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/


@protocol OS_dispatch_queue;
#import <CoreWiFi/CoreWiFi-Structs.h>
@class NSObject;

@interface CWFIO80211 : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	IONotificationPortRef _portRef;
	unsigned _publishIO80211Interface;
	unsigned _terminatedIO80211Interface;
	unsigned _publishIO80211VirtualInterface;
	unsigned _terminatedIO80211VirtualInterface;
	unsigned _publishIO80211SkywalkInterface;
	unsigned _terminatedIO80211SkywalkInterface;
	BOOL _isMonitoringEvents;
	/*^block*/id _eventHandler;

}

@property (copy) id eventHandler;              //@synthesize eventHandler=_eventHandler - In the implementation block
-(BOOL)isMonitoringEvents;
-(id)eventHandler;
-(void)stopEventMonitoring;
-(void)setEventHandler:(id)arg1 ;
-(id)init;
-(id)__IO80211InfoMatchingService:(id)arg1 interfaceName:(id)arg2 ;
-(id)IO80211VirtualInterfaceInfo:(id)arg1 error:(id*)arg2 ;
-(id)IO80211SkywalkInterfaceInfo:(id)arg1 error:(id*)arg2 ;
-(id)__IO80211InfoConformingToService:(id)arg1 interfaceName:(id)arg2 ;
-(void)startEventMonitoring;
-(id)IO80211ControllerInfo:(id)arg1 error:(id*)arg2 ;
-(id)IO80211InterfaceInfo:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

