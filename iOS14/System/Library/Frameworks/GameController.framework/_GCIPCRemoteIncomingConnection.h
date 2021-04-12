/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/_GCIPCRemoteConnection.h>
#import <libobjc.A.dylib/_GCIPCIncomingConnection.h>

@class _GCIPCRemoteProcess;

@interface _GCIPCRemoteIncomingConnection : _GCIPCRemoteConnection <_GCIPCIncomingConnection> {

	_GCIPCRemoteProcess* _process;

}

@property (nonatomic,__weak,readonly) id<_GCIPCProcess> process;              //@synthesize process=_process - In the implementation block
@property (getter=isInvalid,nonatomic,readonly) BOOL invalid; 
+(id)sharedConnectionWorkloop;
-(id<_GCIPCProcess>)process;
-(id)initWithConnection:(id)arg1 ;
-(id)initWithConnection:(id)arg1 fromProcess:(id)arg2 ;
-(id)valueForEntitlement:(id)arg1 ;
-(id)remoteProxy;
-(id)remoteProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end

