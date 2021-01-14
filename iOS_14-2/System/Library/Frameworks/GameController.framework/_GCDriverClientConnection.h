/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/_GCIPCRemoteIncomingConnection.h>
#import <libobjc.A.dylib/_GCDeviceDriverConnection.h>

@interface _GCDriverClientConnection : _GCIPCRemoteIncomingConnection <_GCDeviceDriverConnection>

@property (nonatomic,retain) id<_GCDriverServerInterface> exportedObject; 
@property (getter=isInvalid,nonatomic,readonly) BOOL invalid; 
-(void)setExportedObject:(id<_GCDriverServerInterface>)arg1 ;
-(id<_GCDriverServerInterface>)exportedObject;
-(id)initWithConnection:(id)arg1 fromProcess:(id)arg2 ;
-(void)connectToDeviceService:(id)arg1 withClient:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

