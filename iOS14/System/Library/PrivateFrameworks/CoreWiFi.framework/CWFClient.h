/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <libobjc.A.dylib/CWFXPCEventProxyDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSXPCConnection;

@interface CWFClient : NSObject <CWFXPCEventProxyDelegate> {

	NSObject*<OS_dispatch_queue> _mutex;
	NSMutableDictionary* _mutableEventIDMap;
	NSMutableDictionary* _mutableActivityMap;
	NSMutableDictionary* _mutableEventCallbackMap;
	BOOL _invalidated;
	NSXPCConnection* _XPCConnection;
	long long _serviceType;

}

@property (assign) BOOL invalidated;                                      //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) NSXPCConnection * XPCConnection;                     //@synthesize XPCConnection=_XPCConnection - In the implementation block
@property (readonly) long long serviceType;                               //@synthesize serviceType=_serviceType - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> targetQueue; 
@property (copy) id invalidationHandler; 
-(void)setEventHandler:(/*^block*/id)arg1 eventID:(id)arg2 ;
-(/*^block*/id)eventHandlerWithEventID:(id)arg1 ;
-(NSXPCConnection *)XPCConnection;
-(void)clearAllEventHandlers;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)suspend;
-(void)__beginActivity:(id)arg1 requestParameters:(id)arg2 reply:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(id)init;
-(BOOL)invalidated;
-(void)stopMonitoringEvent:(id)arg1 requestParameters:(id)arg2 ;
-(void)stopMonitoringAllEvents:(id)arg1 ;
-(void)__startMonitoringEvent:(id)arg1 requestParameters:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)beginActivity:(id)arg1 requestParameters:(id)arg2 error:(id*)arg3 ;
-(void)endAllActivities:(id)arg1 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(BOOL)startMonitoringEvent:(id)arg1 requestParameters:(id)arg2 error:(id*)arg3 ;
-(void)endActivity:(id)arg1 requestParameters:(id)arg2 ;
-(void)proxy:(id)arg1 receivedEvent:(id)arg2 ;
-(id)initWithServiceType:(long long)arg1 ;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(long long)serviceType;
-(id)invalidationHandler;
-(void)resume;
-(void)dealloc;
@end

