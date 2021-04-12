/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
*/

#import <libobjc.A.dylib/ACCExternalAccessoryXPCClientProtocol.h>

@protocol ACCExternalAccessoryProviderProtocol, ACCExternalAccessoryXPCServerProtocol;
@class NSXPCConnection, NSDictionary, NSMutableSet, NSString;

@interface ACCExternalAccessoryProvider : NSObject <ACCExternalAccessoryXPCClientProtocol> {

	int _clientCapabilities;
	id<ACCExternalAccessoryProviderProtocol> _delegate;
	NSXPCConnection* _serverConnection;
	id<ACCExternalAccessoryXPCServerProtocol> _remoteObject;
	NSDictionary* _eaClientRegistrationInfo;
	NSMutableSet* _currentlyConnectedAccessories;

}

@property (nonatomic,retain) NSXPCConnection * serverConnection;                                    //@synthesize serverConnection=_serverConnection - In the implementation block
@property (nonatomic,retain) id<ACCExternalAccessoryXPCServerProtocol> remoteObject;                //@synthesize remoteObject=_remoteObject - In the implementation block
@property (assign,nonatomic) int clientCapabilities;                                                //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (nonatomic,retain) NSDictionary * eaClientRegistrationInfo;                               //@synthesize eaClientRegistrationInfo=_eaClientRegistrationInfo - In the implementation block
@property (nonatomic,retain) NSMutableSet * currentlyConnectedAccessories;                          //@synthesize currentlyConnectedAccessories=_currentlyConnectedAccessories - In the implementation block
@property (assign,nonatomic,__weak) id<ACCExternalAccessoryProviderProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)accessoryDictionaryForLogging:(id)arg1 ;
-(void)setClientCapabilities:(int)arg1 ;
-(int)clientCapabilities;
-(NSXPCConnection *)serverConnection;
-(void)enqueueLocationNMEASentence:(id)arg1 forUUID:(id)arg2 ;
-(id<ACCExternalAccessoryProviderProtocol>)delegate;
-(void)_removeAccessoryForPrimaryUUID:(id)arg1 ;
-(void)connectToServer:(BOOL)arg1 ;
-(id)currentVehicleInfo:(id)arg1 ;
-(void)stopDestinationSharingForUUID:(id)arg1 ;
-(void)vehicleStatusUpdate:(id)arg1 forUUID:(id)arg2 ;
-(void)startDestinationSharingForUUID:(id)arg1 options:(unsigned long long)arg2 ;
-(void)ExternalAccessoryArrived:(id)arg1 ;
-(void)stopLocationInformationForAccessoryUUID:(id)arg1 ;
-(void)createExternalAccessorySessionForProtocol:(id)arg1 accessoryUUID:(id)arg2 withEASessionReply:(/*^block*/id)arg3 ;
-(void)handleIncomingExternalAccessoryData:(id)arg1 forEASessionIdentifier:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<ACCExternalAccessoryProviderProtocol>)arg1 ;
-(void)sendDeviceIdentifierNotification:(id)arg1 usbIdentifier:(id)arg2 forUUID:(id)arg3 ;
-(void)setEaClientRegistrationInfo:(NSDictionary *)arg1 ;
-(void)sendNMEAFilterList:(id)arg1 forAccessoryUUID:(id)arg2 ;
-(void)updateAccessoryInfo:(id)arg1 forUUID:(id)arg2 ;
-(void)setCurrentlyConnectedAccessories:(NSMutableSet *)arg1 ;
-(id)_findAccessoryForPrimaryUUID:(id)arg1 ;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(void)sendGPRMCDataStatus:(BOOL)arg1 ValueV:(BOOL)arg2 ValueX:(BOOL)arg3 forAccessoryUUID:(id)arg4 ;
-(id<ACCExternalAccessoryXPCServerProtocol>)remoteObject;
-(void)accessoryCloseExternalAccessorySession:(id)arg1 ;
-(void)startLocationInformationForAccessoryUUID:(id)arg1 ;
-(void)resumeEASessionData:(id)arg1 ;
-(void)destinationInformation:(id)arg1 forUUID:(id)arg2 ;
-(void)sendOutgoingExternalAccessoryData:(id)arg1 forEASessionIdentifier:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)destinationSharingStatus:(BOOL)arg1 forDestinationUUID:(id)arg2 supportedParams:(id)arg3 forUUID:(id)arg4 ;
-(void)setRemoteObject:(id<ACCExternalAccessoryXPCServerProtocol>)arg1 ;
-(void)_removeAllAccessories;
-(void)ExternalAccessoryLeft:(id)arg1 ;
-(NSDictionary *)eaClientRegistrationInfo;
-(void)closeExternalAccessorySession:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 capabilities:(int)arg2 ;
-(void)openSocketForAccessoryToApp:(id)arg1 ;
-(void)_constructClientRegistrationInfo;
-(void)requestAccessoryWifiCredentials:(id)arg1 ;
-(void)openSocketForAppToAccessory:(id)arg1 ;
-(NSMutableSet *)currentlyConnectedAccessories;
-(void)dealloc;
-(void)sendWiredCarPlayAvailable:(id)arg1 usbIdentifier:(id)arg2 wirelessAvailable:(id)arg3 bluetoothIdentifier:(id)arg4 forUUID:(id)arg5 ;
@end

