/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/

#import <PDSAgent/PDSXPCListenerDelegate.h>

@protocol PDSXPCListener, PDSXPCInterfaceVendor, PDSDaemonListenerVendor, OS_dispatch_workloop;
@class NSObject, NSMutableArray, NSArray, NSString;

@interface PDSXPCServer : NSObject <PDSXPCListenerDelegate> {

	id<PDSXPCListener> _XPCListener;
	id<PDSXPCInterfaceVendor> _interfaceVendor;
	id<PDSDaemonListenerVendor> _daemonListenerVendor;
	NSObject*<OS_dispatch_workloop> _workloop;
	NSMutableArray* _XPCClients;

}

@property (nonatomic,retain) id<PDSXPCListener> XPCListener;                                //@synthesize XPCListener=_XPCListener - In the implementation block
@property (nonatomic,retain) id<PDSXPCInterfaceVendor> interfaceVendor;                     //@synthesize interfaceVendor=_interfaceVendor - In the implementation block
@property (nonatomic,retain) id<PDSDaemonListenerVendor> daemonListenerVendor;              //@synthesize daemonListenerVendor=_daemonListenerVendor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_workloop> workloop;                      //@synthesize workloop=_workloop - In the implementation block
@property (nonatomic,retain) NSMutableArray * XPCClients;                                   //@synthesize XPCClients=_XPCClients - In the implementation block
@property (nonatomic,readonly) NSArray * connectedClients; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithServiceName:(id)arg1 listenerVendor:(id)arg2 interfaceVendor:(id)arg3 daemonListenerVendor:(id)arg4 queue:(id)arg5 workloop:(id)arg6 ;
-(void)setXPCClients:(NSMutableArray *)arg1 ;
-(id<PDSXPCInterfaceVendor>)interfaceVendor;
-(id<PDSXPCListener>)XPCListener;
-(void)setXPCListener:(id<PDSXPCListener>)arg1 ;
-(void)setDaemonListenerVendor:(id<PDSDaemonListenerVendor>)arg1 ;
-(void)setInterfaceVendor:(id<PDSXPCInterfaceVendor>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setWorkloop:(NSObject*<OS_dispatch_workloop>)arg1 ;
-(NSObject*<OS_dispatch_workloop>)workloop;
-(NSArray *)connectedClients;
-(NSMutableArray *)XPCClients;
-(void)resume;
-(id<PDSDaemonListenerVendor>)daemonListenerVendor;
@end

