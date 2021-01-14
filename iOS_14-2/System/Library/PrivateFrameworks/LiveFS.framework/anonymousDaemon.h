/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject *)proxy;
-(NSXPCListenerEndpoint *)endpoint;
-(NSXPCInterface *)interface;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithListener:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(Class)clientClass;
-(void)dealloc;
-(id)initUsingInterface:(id)arg1 clientClass:(Class)arg2 queue:(id)arg3 andProxy:(id)arg4 ;
@end

