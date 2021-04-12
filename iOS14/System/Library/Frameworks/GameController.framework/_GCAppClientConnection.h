/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/_GCIPCRemoteIncomingConnection.h>

@interface _GCAppClientConnection : _GCIPCRemoteIncomingConnection

@property (nonatomic,retain) id<_GCAppServerInterface> server; 
-(void)setServer:(id<_GCAppServerInterface>)arg1 ;
-(id<_GCAppServerInterface>)server;
-(id)initWithConnection:(id)arg1 fromProcess:(id)arg2 ;
@end

