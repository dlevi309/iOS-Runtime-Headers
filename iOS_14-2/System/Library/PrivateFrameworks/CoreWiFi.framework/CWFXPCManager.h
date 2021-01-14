/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <libobjc.A.dylib/CWFXPCListenerDelegate.h>
#import <libobjc.A.dylib/CWFXPCRequestProxyDelegate.h>

@protocol OS_dispatch_queue, CWFXPCManagerDelegate;
@class NSObject, NSMutableArray, CWFXPCRequestProxy, NSSet, NSString;

@interface CWFXPCManager : NSObject <CWFXPCListenerDelegate, CWFXPCRequestProxyDelegate> {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSMutableArray* _mutableXPCListeners;
	CWFXPCRequestProxy* _XPCRequestProxy;
	id<CWFXPCManagerDelegate> _delegate;
	NSSet* _supportedRequestTypes;

}

@property (retain) id<CWFXPCManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSSet * supportedRequestTypes;                     //@synthesize supportedRequestTypes=_supportedRequestTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithServiceTypes:(id)arg1 ;
-(void)suspend;
-(void)XPCRequestProxy:(id)arg1 XPCConnection:(id)arg2 canceledXPCRequestsWithUUID:(id)arg3 ;
-(void)setTargetQueue:(id)arg1 requestType:(long long)arg2 interfaceName:(id)arg3 ;
-(id)init;
-(id<CWFXPCManagerDelegate>)delegate;
-(void)sendXPCEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSSet *)supportedRequestTypes;
-(void)setDelegate:(id<CWFXPCManagerDelegate>)arg1 ;
-(void)setSupportedRequestTypes:(NSSet *)arg1 ;
-(id)registeredActivities;
-(void)XPCRequestProxy:(id)arg1 invalidatedXPCConnection:(id)arg2 ;
-(void)XPCListener:(id)arg1 XPCConnection:(id)arg2 canceledXPCRequestsWithUUID:(id)arg3 ;
-(void)invalidate;
-(void)XPCListener:(id)arg1 XPCConnection:(id)arg2 receivedXPCRequest:(id)arg3 ;
-(void)resume;
-(void)XPCListener:(id)arg1 invalidatedXPCConnection:(id)arg2 ;
-(id)registeredEventIDs;
-(void)XPCRequestProxy:(id)arg1 XPCConnection:(id)arg2 receivedXPCRequest:(id)arg3 ;
-(void)XPCRequestProxy:(id)arg1 sendXPCEvent:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

