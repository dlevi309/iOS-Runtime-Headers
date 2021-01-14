/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)remoteObjectProxy;
-(void)stopExtendingLifetime;
-(id)synchronousRemoteObjectProxy;
-(id)initWithProxy:(id)arg1 interface:(id)arg2 lifetimeExtender:(id)arg3 providerDomainID:(id)arg4 ;
-(id)remoteObjectProxyCreating;
-(id)initWithEndpoint:(id)arg1 interface:(id)arg2 lifetimeExtender:(id)arg3 providerDomainID:(id)arg4 ;
-(void)invalidate;
-(void)dealloc;
@end

