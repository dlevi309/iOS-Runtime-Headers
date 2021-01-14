/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isMonitoringEvents;
-(id)initWithInterfaceName:(id)arg1 ;
-(id)eventHandler;
-(void)stopEventMonitoring;
-(void)setEventHandler:(id)arg1 ;
-(id)init;
-(id)controlState:(id*)arg1 ;
-(NSString *)interfaceName;
-(id)controlMode:(id*)arg1 ;
-(void)__startEventMonitoring;
-(id)supplicantState:(id*)arg1 ;
-(void)startEventMonitoring;
-(id)clientStatus:(id*)arg1 ;
-(void)dealloc;
@end

