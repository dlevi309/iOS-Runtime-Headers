/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/_GCIPCRemoteOutgoingConnection.h>

@interface _GCAppServerConnection : _GCIPCRemoteOutgoingConnection

@property (nonatomic,retain) id<_GCAppClientInterface> client; 
-(id<_GCAppClientInterface>)client;
-(void)setClient:(id<_GCAppClientInterface>)arg1 ;
-(id)init;
-(id)initWithMachServiceName:(id)arg1 ;
@end

