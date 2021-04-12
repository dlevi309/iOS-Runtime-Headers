/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessoryOOBBTPairing.framework/AccessoryOOBBTPairing
*/


@protocol ACCOOBBTPairingProviderProtocol, ACCOOBBTPairingXPCServerProtocol;
@class NSString, NSXPCConnection, NSMutableDictionary;

@interface ACCOOBBTPairingProvider : NSObject {

	id<ACCOOBBTPairingProviderProtocol> _delegate;
	NSString* _providerUID;
	NSXPCConnection* _serverConnection;
	id<ACCOOBBTPairingXPCServerProtocol> _remoteObject;
	NSMutableDictionary* _accessories;

}

@property (nonatomic,retain) NSString * providerUID;                                           //@synthesize providerUID=_providerUID - In the implementation block
@property (nonatomic,retain) NSXPCConnection * serverConnection;                               //@synthesize serverConnection=_serverConnection - In the implementation block
@property (nonatomic,retain) id<ACCOOBBTPairingXPCServerProtocol> remoteObject;                //@synthesize remoteObject=_remoteObject - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessories;                                //@synthesize accessories=_accessories - In the implementation block
@property (assign,nonatomic,__weak) id<ACCOOBBTPairingProviderProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<ACCOOBBTPairingProviderProtocol>)delegate;
-(void)setDelegate:(id<ACCOOBBTPairingProviderProtocol>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id<ACCOOBBTPairingXPCServerProtocol>)remoteObject;
-(NSMutableDictionary *)accessories;
-(void)setRemoteObject:(id<ACCOOBBTPairingXPCServerProtocol>)arg1 ;
-(NSXPCConnection *)serverConnection;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(void)connectToServer;
-(void)setAccessories:(NSMutableDictionary *)arg1 ;
-(NSString *)providerUID;
-(void)setProviderUID:(NSString *)arg1 ;
-(void)startOOBBTPairing:(id)arg1 ;
-(void)stopOOBBTPairing:(id)arg1 ;
-(void)linkKeyInfo:(id)arg1 oobBtPairingUID:(id)arg2 linkKey:(id)arg3 deviceMacAddr:(id)arg4 ;
-(void)requestLegacyConnectionIDForAccessoryUID:(id)arg1 ;
-(void)accessoryOOBBTPairingAttached:(id)arg1 accInfoDict:(id)arg2 ;
-(void)accessoryOOBBTPairingDetached:(id)arg1 ;
-(void)accessoryOOBBTPairingBTAccessoryInfo:(id)arg1 oobBtPairingUID:(id)arg2 accessoryMacAddr:(id)arg3 deviceClass:(unsigned)arg4 ;
-(void)accessoryOOBBTPairingCompletionStatus:(id)arg1 oobBtPairingUID:(id)arg2 result:(unsigned char)arg3 ;
-(void)legacyConnectionIDForAccessoryUID:(id)arg1 connectionID:(unsigned)arg2 ;
-(id)accessoryInfoDictionaryForLogging:(id)arg1 ;
@end

