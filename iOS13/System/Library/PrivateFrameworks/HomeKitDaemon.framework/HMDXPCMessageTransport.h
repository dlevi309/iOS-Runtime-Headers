/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/HMDApplicationMonitorDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageTransportDelegate.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, NSMutableSet, HMDApplicationRegistry, NSXPCListener, NSArray, NSString;

@interface HMDXPCMessageTransport : HMFMessageTransport <NSXPCListenerDelegate, HMDApplicationMonitorDelegate, HMFLogging, HMFMessageTransportDelegate> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _connections;
	HMDApplicationRegistry* _applicationRegistry;
	NSXPCListener* _listener;

}

@property (readonly) NSXPCListener * listener;                                  //@synthesize listener=_listener - In the implementation block
@property (readonly) HMDApplicationRegistry * applicationRegistry;              //@synthesize applicationRegistry=_applicationRegistry - In the implementation block
@property (copy,readonly) NSArray * connections; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)defaultTransport;
-(id)init;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)stop;
-(BOOL)start;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)connections;
-(void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2 ;
-(HMDApplicationRegistry *)applicationRegistry;
-(void)applicationMonitorDidChangeActiveHomeKitAppStatus:(BOOL)arg1 ;
-(void)applicationMonitorDidChangeAppState:(id)arg1 ;
@end

