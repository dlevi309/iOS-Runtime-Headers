/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/

#import <libobjc.A.dylib/SORemoteExtensionServiceProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSXPCListenerEndpoint, NSString;

@interface SOExtensionServiceConnection : NSObject <SORemoteExtensionServiceProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;
	NSXPCListenerEndpoint* _serviceXpcEndpoint;

}

@property (retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (retain) NSXPCListenerEndpoint * serviceXpcEndpoint;              //@synthesize serviceXpcEndpoint=_serviceXpcEndpoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithListenerEndpoint:(id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(BOOL)_connectToService;
-(void)setServiceXpcEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSXPCListenerEndpoint *)serviceXpcEndpoint;
-(void)beginAuthorizationWithCompletion:(/*^block*/id)arg1 ;
@end

