/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)invalidate;
-(id<CWFXPCManagerDelegate>)delegate;
-(void)setDelegate:(id<CWFXPCManagerDelegate>)arg1 ;
-(void)resume;
-(void)suspend;
-(id)registeredEventIDs;
-(id)registeredActivities;
-(void)sendXPCEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSSet *)supportedRequestTypes;
-(void)XPCListener:(id)arg1 XPCConnection:(id)arg2 receivedXPCRequest:(id)arg3 ;
-(void)XPCListener:(id)arg1 invalidatedXPCConnection:(id)arg2 ;
-(void)XPCRequestProxy:(id)arg1 XPCConnection:(id)arg2 receivedXPCRequest:(id)arg3 ;
-(void)XPCRequestProxy:(id)arg1 sendXPCEvent:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)initWithXPCServiceTypes:(id)arg1 ;
-(void)setSupportedRequestTypes:(NSSet *)arg1 ;
@end

