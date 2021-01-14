/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <libobjc.A.dylib/SCLSchoolModeXPCServer.h>

@protocol SCLSchoolModeClientProxyDelegate;
@class NSXPCConnection, NSUUID, NSString, SCLSchoolModeCoordinator;

@interface SCLSchoolModeClientProxy : NSObject <SCLSchoolModeXPCServer> {

	NSXPCConnection* _connection;
	NSUUID* _pairingID;
	NSString* _identifier;
	SCLSchoolModeCoordinator* _coordinator;
	id<SCLSchoolModeClientProxyDelegate> _delegate;

}

@property (retain) NSUUID * pairingID;                                                          //@synthesize pairingID=_pairingID - In the implementation block
@property (copy) NSString * identifier;                                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection;                                    //@synthesize connection=_connection - In the implementation block
@property (__weak) SCLSchoolModeCoordinator * coordinator;                                      //@synthesize coordinator=_coordinator - In the implementation block
@property (assign,nonatomic,__weak) id<SCLSchoolModeClientProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUUID *)pairingID;
-(id)initWithConnection:(id)arg1 ;
-(void)setCoordinator:(SCLSchoolModeCoordinator *)arg1 ;
-(id<SCLSchoolModeClientProxyDelegate>)delegate;
-(oneway void)dumpState;
-(void)setDelegate:(id<SCLSchoolModeClientProxyDelegate>)arg1 ;
-(NSString *)description;
-(NSXPCConnection *)connection;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setPairingID:(NSUUID *)arg1 ;
-(SCLSchoolModeCoordinator *)coordinator;
-(id)remoteClient;
-(oneway void)connectWithPairingID:(id)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)applySchedule:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)setActive:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)fetchRecentUnlockHistoryItemsWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)addUnlockHistoryItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)deleteHistoryWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)noteSignificantUserInteraction;
-(oneway void)triggerRemoteSync;
-(oneway void)reconnectWithPairingID:(id)arg1 identifier:(id)arg2 ;
-(void)didUpdateScheduleSettings:(id)arg1 notify:(BOOL)arg2 ;
-(void)unlockHistoryDidChange;
-(void)didUpdateState:(id)arg1 fromState:(id)arg2 ;
-(id)serverSettings;
-(void)sendServerSettings:(id)arg1 ;
-(BOOL)validateBooleanEntitlement:(id)arg1 error:(id*)arg2 ;
-(BOOL)validatePairing:(id*)arg1 ;
@end

