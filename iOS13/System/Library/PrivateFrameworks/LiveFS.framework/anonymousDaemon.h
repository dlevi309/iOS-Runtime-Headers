/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSXPCInterface, NSObject, NSXPCListenerEndpoint, NSString;

@interface anonymousDaemon : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSXPCInterface* _interface;
	NSObject*<OS_dispatch_queue> _queue;
	Class _clientClass;
	NSObject* _proxy;
	NSXPCListenerEndpoint* _endpoint;

}

@property (readonly) NSXPCListener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (readonly) NSXPCInterface * interface;                      //@synthesize interface=_interface - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) Class clientClass;                               //@synthesize clientClass=_clientClass - In the implementation block
@property (readonly) NSObject * proxy;                                //@synthesize proxy=_proxy - In the implementation block
@property (readonly) NSXPCListenerEndpoint * endpoint;                //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListenerEndpoint *)endpoint;
-(NSXPCInterface *)interface;
-(Class)clientClass;
-(NSObject *)proxy;
-(id)initWithListener:(id)arg1 ;
-(id)initUsingInterface:(id)arg1 clientClass:(Class)arg2 queue:(id)arg3 andProxy:(id)arg4 ;
@end

