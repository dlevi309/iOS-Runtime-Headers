/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/_GCIPCRemoteConnection.h>
#import <libobjc.A.dylib/_GCIPCOutgoingConnection.h>

@interface _GCIPCRemoteOutgoingConnection : _GCIPCRemoteConnection <_GCIPCOutgoingConnection>

@property (getter=isInvalid,nonatomic,readonly) BOOL invalid; 
+(id)sharedConnectionWorkloop;
-(id)initWithConnection:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)redactedDescription;
-(id)remoteProxy;
-(id)remoteProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end

