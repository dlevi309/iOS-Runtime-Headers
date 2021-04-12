/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/FPDLifetimeServicing.h>

@protocol FPDLifetimeServicing, NSXPCProxyCreating;
@class NSXPCConnection, NSXPCInterface;

@interface FPService : NSObject <FPDLifetimeServicing> {

	id<FPDLifetimeServicing> _extender;
	NSXPCConnection* _connection;
	id<NSXPCProxyCreating> _proxy;
	NSXPCInterface* _interface;

}

@property (readonly) id remoteObjectProxy; 
@property (readonly) id synchronousRemoteObjectProxy; 
-(void)dealloc;
-(void)invalidate;
-(id)remoteObjectProxy;
-(void)stopExtendingLifetime;
-(id)synchronousRemoteObjectProxy;
-(id)initWithProxy:(id)arg1 interface:(id)arg2 lifetimeExtender:(id)arg3 providerDomainID:(id)arg4 ;
-(id)initWithEndpoint:(id)arg1 interface:(id)arg2 lifetimeExtender:(id)arg3 providerDomainID:(id)arg4 ;
-(id)remoteObjectProxyCreating;
@end

