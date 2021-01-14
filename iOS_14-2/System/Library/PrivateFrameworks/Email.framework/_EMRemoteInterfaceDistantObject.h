/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EMXPCProxyCreating.h>

@class EMRemoteConnection;

@interface _EMRemoteInterfaceDistantObject : NSObject <EMXPCProxyCreating> {

	BOOL _synchronous;
	EMRemoteConnection* _remoteInterface;
	/*^block*/id _reattemptHandler;

}

@property (nonatomic,readonly) EMRemoteConnection * remoteInterface;               //@synthesize remoteInterface=_remoteInterface - In the implementation block
@property (nonatomic,copy,readonly) id reattemptHandler;                           //@synthesize reattemptHandler=_reattemptHandler - In the implementation block
@property (getter=isSynchronous,nonatomic,readonly) BOOL synchronous;              //@synthesize synchronous=_synchronous - In the implementation block
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)reattemptingRemoteObjectProxyWithReattemptHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(id)reattemptingRemoteObjectProxy;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(EMRemoteConnection *)remoteInterface;
-(BOOL)isSynchronous;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithRemoteInterface:(id)arg1 synchronous:(BOOL)arg2 reattemptHandler:(/*^block*/id)arg3 ;
-(void)_forwardStackInvocation:(id)arg1 ;
-(id)reattemptHandler;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

