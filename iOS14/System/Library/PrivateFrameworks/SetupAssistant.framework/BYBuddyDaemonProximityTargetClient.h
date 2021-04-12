/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/

#import <libobjc.A.dylib/BYBuddyDaemonProximityTargetProtocol.h>

@protocol BYBuddyDaemonProximityTargetProtocol;
@class NSXPCConnection, NSString;

@interface BYBuddyDaemonProximityTargetClient : NSObject <BYBuddyDaemonProximityTargetProtocol> {

	id<BYBuddyDaemonProximityTargetProtocol> _delegate;
	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;                                   //@synthesize connection=_connection - In the implementation block
@property (__weak) id<BYBuddyDaemonProximityTargetProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proximityTargetClientInterface;
-(id)init;
-(id<BYBuddyDaemonProximityTargetProtocol>)delegate;
-(void)sendData:(id)arg1 ;
-(void)connectToDaemon;
-(void)proximititySetupCompleted:(id)arg1 ;
-(void)displayProximityPinCode:(id)arg1 visual:(BOOL)arg2 ;
-(void)dismissProximityPinCode;
-(void)proximityConnectionPreparing:(id)arg1 ;
-(void)proximityConnectionInitiated;
-(void)proximityConnectionTerminated;
-(void)endPairing;
-(void)proximityConnectionReconnected;
-(void)receivedLanguages:(id)arg1 locale:(id)arg2 model:(id)arg3 deviceClass:(id)arg4 accessibilitySettings:(id)arg5 ;
-(void)beginAdvertisingProximitySetup;
-(void)endAdvertisingProximitySetup;
-(void)hasConnection:(/*^block*/id)arg1 ;
-(void)resumeProximitySetup:(/*^block*/id)arg1 ;
-(void)storeInformation:(id)arg1 ;
-(void)storeHandshake:(id)arg1 ;
-(void)endDeviceToDeviceMigration;
-(void)showMigrationInterfaceOnSource;
-(void)suspendConnectionForSoftwareUpdate:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<BYBuddyDaemonProximityTargetProtocol>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)fileTransferSessionTemplate;
@end

