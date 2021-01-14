/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CWFXPCConnectionDelegate.h>

@protocol OS_dispatch_queue, CWFXPCListenerDelegate;
@class NSXPCListener, NSMutableArray, NSObject, NSString;

@interface CWFXPCListener : NSObject <NSXPCListenerDelegate, CWFXPCConnectionDelegate> {

	NSXPCListener* _XPCListener;
	NSMutableArray* _mutableXPCConnections;
	NSObject*<OS_dispatch_queue> _mutexQueue;
	id<CWFXPCListenerDelegate> _delegate;
	long long _serviceType;

}

@property (retain) id<CWFXPCListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long serviceType;                //@synthesize serviceType=_serviceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)suspend;
-(id)init;
-(id<CWFXPCListenerDelegate>)delegate;
-(void)sendXPCEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)XPCConnection:(id)arg1 canceledXPCRequestsWithUUID:(id)arg2 ;
-(void)XPCConnection:(id)arg1 receivedXPCRequest:(id)arg2 ;
-(void)setDelegate:(id<CWFXPCListenerDelegate>)arg1 ;
-(id)registeredActivities;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithServiceType:(long long)arg1 ;
-(void)invalidate;
-(long long)serviceType;
-(BOOL)__allowXPCConnection:(id)arg1 serviceType:(long long)arg2 ;
-(void)resume;
-(id)registeredEventIDs;
@end

