/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/


@protocol OS_dispatch_queue;
#import <CoreWiFi/CoreWiFi-Structs.h>
@class NSObject, NSString;

@interface CWFEAP8021X : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	SCDynamicStoreRef _storeRef;
	BOOL _isMonitoringEvents;
	NSString* _interfaceName;
	/*^block*/id _eventHandler;

}

@property (nonatomic,copy,readonly) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (copy) id eventHandler;                                          //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(NSString *)interfaceName;
-(id)initWithInterfaceName:(id)arg1 ;
-(void)startEventMonitoring;
-(void)stopEventMonitoring;
-(BOOL)isMonitoringEvents;
-(id)supplicantState:(id*)arg1 ;
-(id)controlMode:(id*)arg1 ;
-(id)controlState:(id*)arg1 ;
-(id)clientStatus:(id*)arg1 ;
-(void)__startEventMonitoring;
@end

