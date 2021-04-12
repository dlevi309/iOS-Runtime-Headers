/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	long long _XPCServiceType;

}

@property (retain) id<CWFXPCListenerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long XPCServiceType;              //@synthesize XPCServiceType=_XPCServiceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(id<CWFXPCListenerDelegate>)delegate;
-(void)setDelegate:(id<CWFXPCListenerDelegate>)arg1 ;
-(void)resume;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)suspend;
-(id)registeredEventIDs;
-(void)XPCConnection:(id)arg1 receivedXPCRequest:(id)arg2 ;
-(id)registeredActivities;
-(void)sendXPCEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(long long)XPCServiceType;
-(id)initWithXPCServiceType:(long long)arg1 ;
-(id)__adoptionWhitelist;
-(BOOL)__allowXPCConnection:(id)arg1 serviceType:(long long)arg2 ;
-(BOOL)__isProcessWhitelistedForAdoption:(id)arg1 XPCServiceType:(long long)arg2 ;
@end

