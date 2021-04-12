/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
*/

#import <MailServices/MailServices-Structs.h>
#import <libobjc.A.dylib/NSXPCProxyCreating.h>

@class MSXPCConnection, NSXPCInterface;

@interface _MSXPCRemoteProxy : NSObject <NSXPCProxyCreating> {

	os_unfair_lock_s _selectorLock;
	CFDictionaryRef _knownSelectors;
	MSXPCConnection* _connection;
	NSXPCInterface* _remoteInterface;
	/*^block*/id _errorHandler;
	id ____nsxpc_remoteObjectProxy;

}

@property (setter=___setNSXPCRemoteObjectProxy:,nonatomic,retain) id ___nsxpc_remoteObjectProxy;              //@synthesize ___nsxpc_remoteObjectProxy=____nsxpc_remoteObjectProxy - In the implementation block
-(id)initWithConnection:(id)arg1 interface:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)remoteObjectProxy;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)___nsxpc_remoteObjectProxy;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)___setNSXPCRemoteObjectProxy:(id)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

