/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessoryAssistiveTouch.framework/AccessoryAssistiveTouch
*/


@protocol ACCAssistiveTouchProviderProtocol, ACCAssistiveTouchXPCServerProtocol;
@class NSString, NSXPCConnection, NSMutableDictionary;

@interface ACCAssistiveTouchProvider : NSObject {

	BOOL _cachedState;
	NSString* _providerUID;
	id<ACCAssistiveTouchProviderProtocol> _delegate;
	NSXPCConnection* _serverConnection;
	id<ACCAssistiveTouchXPCServerProtocol> _remoteObject;
	NSMutableDictionary* _accessories;

}

@property (nonatomic,retain) NSString * providerUID;                                           //@synthesize providerUID=_providerUID - In the implementation block
@property (nonatomic,retain) id<ACCAssistiveTouchProviderProtocol> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSXPCConnection * serverConnection;                               //@synthesize serverConnection=_serverConnection - In the implementation block
@property (nonatomic,retain) id<ACCAssistiveTouchXPCServerProtocol> remoteObject;              //@synthesize remoteObject=_remoteObject - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessories;                                //@synthesize accessories=_accessories - In the implementation block
@property (assign,nonatomic) BOOL cachedState;                                                 //@synthesize cachedState=_cachedState - In the implementation block
-(NSXPCConnection *)serverConnection;
-(BOOL)cachedState;
-(id<ACCAssistiveTouchProviderProtocol>)delegate;
-(void)setDelegate:(id<ACCAssistiveTouchProviderProtocol>)arg1 ;
-(void)setAccessories:(NSMutableDictionary *)arg1 ;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(NSMutableDictionary *)accessories;
-(id<ACCAssistiveTouchXPCServerProtocol>)remoteObject;
-(void)setRemoteObject:(id<ACCAssistiveTouchXPCServerProtocol>)arg1 ;
-(void)dealloc;
-(void)setCachedState:(BOOL)arg1 ;
-(NSString *)providerUID;
-(void)setProviderUID:(NSString *)arg1 ;
-(void)connectToServer;
-(void)accessoryAssistiveTouchAttached:(id)arg1 ;
-(void)accessoryAssistiveTouchDetached:(id)arg1 ;
-(void)setEnabled:(id)arg1 flag:(BOOL)arg2 ;
-(void)requestState:(id)arg1 ;
-(BOOL)calculateDesiredState:(id)arg1 ;
-(void)notifyAssistiveTouchEnabledState:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 initialState:(BOOL)arg2 ;
@end

