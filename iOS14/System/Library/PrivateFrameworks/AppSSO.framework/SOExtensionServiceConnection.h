/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/

#import <libobjc.A.dylib/SORemoteExtensionServiceProtocol.h>

@class NSXPCConnection, NSXPCListenerEndpoint, NSString;

@interface SOExtensionServiceConnection : NSObject <SORemoteExtensionServiceProtocol> {

	NSXPCConnection* _xpcConnection;
	NSXPCListenerEndpoint* _serviceXpcEndpoint;

}

@property (retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (retain) NSXPCListenerEndpoint * serviceXpcEndpoint;              //@synthesize serviceXpcEndpoint=_serviceXpcEndpoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)initWithListenerEndpoint:(id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(NSXPCListenerEndpoint *)serviceXpcEndpoint;
-(void)setServiceXpcEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)beginAuthorizationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_connectToService;
@end

