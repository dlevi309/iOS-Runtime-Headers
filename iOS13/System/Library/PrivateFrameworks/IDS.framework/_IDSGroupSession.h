/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDS-Structs.h>
#import <IDS/IDSDaemonListenerProtocol.h>
#import <IDS/IDSBaseSocketPairConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSSet, IDSBaseSocketPairConnection, CUTWeakReference, NSObject, NSMutableDictionary, NSDictionary, NSArray, NSError, NSNumber;

@interface _IDSGroupSession : NSObject <IDSDaemonListenerProtocol, IDSBaseSocketPairConnectionDelegate> {

	id _delegateContext;
	id _boostContext;
	NSString* _uniqueID;
	NSString* _instanceID;
	NSString* _accountID;
	NSSet* _destinations;
	NSString* _fromID;
	IDSBaseSocketPairConnection* _unreliableSocketPairConnection;
	CUTWeakReference* _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isInvalidated;
	unsigned _state;
	long long _transportType;
	unsigned long long _connectionCountHint;
	BOOL _needsToWaitForPreConnectionData;
	BOOL _disallowCellularInterface;
	BOOL _disallowWifiInterface;
	unsigned long long _preferredAddressFamily;
	BOOL _preferCellularForCallSetup;
	NSString* _clientUUID;
	BOOL _alwaysSkipSelf;
	unsigned _sessionEndedReason;
	NSMutableDictionary* _preferences;
	NSMutableDictionary* _sessionConfig;
	BOOL _useConfServer;
	NSString* _stableGroupID;
	NSString* _groupID;
	NSDictionary* _participantInfo;
	cfs_client_sRef _cfs_client;
	int _cfs_requestID;
	BOOL _cfsJoinReply;
	BOOL _didJoinCallback;
	BOOL _cfsLeaveReply;
	BOOL _didLeaveCallback;
	NSArray* _existingParticipants;
	NSError* _joinLeaveError;
	NSNumber* _qrReason;
	NSNumber* _previousError;

}

@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) unsigned state;                           //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned sessionEndedReason; 
@property (nonatomic,retain) id boostContext;                            //@synthesize boostContext=_boostContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(unsigned)state;
-(NSString *)uniqueID;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setPreferences:(id)arg1 ;
-(void)xpcObject:(id)arg1 objectContext:(id)arg2 ;
-(void)session:(id)arg1 didReceiveReport:(id)arg2 ;
-(void)daemonDisconnected;
-(void)groupSessionDidTerminate:(id)arg1 ;
-(void)groupSessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3 ;
-(void)sessionDidJoinGroup:(id)arg1 participantsInfo:(id)arg2 error:(id)arg3 ;
-(void)sessionDidJoinGroup:(id)arg1 participantInfo:(id)arg2 error:(id)arg3 ;
-(void)sessionDidJoinGroup:(id)arg1 participantUpdateDictionary:(id)arg2 error:(id)arg3 ;
-(void)sessionDidLeaveGroup:(id)arg1 error:(id)arg2 ;
-(void)session:(id)arg1 participantDidJoinGroupWithInfo:(id)arg2 ;
-(void)session:(id)arg1 participantDidLeaveGroupWithInfo:(id)arg2 ;
-(void)session:(id)arg1 didReceiveActiveParticipants:(id)arg2 success:(BOOL)arg3 ;
-(id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4 ;
-(unsigned)sessionEndedReason;
-(void)updateMembers:(id)arg1 withContext:(id)arg2 triggeredLocally:(BOOL)arg3 ;
-(void)updateParticipantData:(id)arg1 withContext:(id)arg2 ;
-(void)setParticipantInfo:(id)arg1 ;
-(void)joinWithOptions:(id)arg1 ;
-(void)leaveGroupSession;
-(void)requestActiveParticipants;
-(void)_broadcastNewSessionToDaemon;
-(void)_cleanupSocketPairConnections;
-(void)_callDelegateWithBlock:(/*^block*/id)arg1 ;
-(id)boostContext;
-(void)setBoostContext:(id)arg1 ;
@end

