/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@protocol OS_os_transaction, MSPSharedTripGroupSessionDelegate;
@class NSString, NSMutableSet, IDSService, NSObject, NSArray;

@interface MSPSharedTripGroupSession : NSObject {

	BOOL _joined;
	NSString* _joinedFromHandle;
	NSString* _joinedFromAccountIdentifier;
	BOOL _initiator;
	NSString* _groupID;
	unsigned long long _nbClients;
	NSMutableSet* _liveModeParticipantIdentifiers;
	IDSService* _sharingService;
	NSMutableSet* _identifiers;
	NSObject*<OS_os_transaction> _transaction;
	NSString* _initiatorIdentifier;
	NSString* _initiatorDisplayName;
	id<MSPSharedTripGroupSessionDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL inLiveMode; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * initiatorIdentifier;                                   //@synthesize initiatorIdentifier=_initiatorIdentifier - In the implementation block
@property (nonatomic,copy) NSString * initiatorDisplayName;                                      //@synthesize initiatorDisplayName=_initiatorDisplayName - In the implementation block
@property (nonatomic,readonly) NSArray * accountIdentifiers; 
@property (assign,nonatomic,__weak) id<MSPSharedTripGroupSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<MSPSharedTripGroupSessionDelegate>)delegate;
-(void)setDelegate:(id<MSPSharedTripGroupSessionDelegate>)arg1 ;
-(NSString *)identifier;
-(NSArray *)accountIdentifiers;
-(void)joinLiveModeFromHandle:(id)arg1 fromAccountID:(id)arg2 ;
-(BOOL)leaveLiveModeIfNeeded;
-(BOOL)inLiveMode;
-(NSString *)initiatorIdentifier;
-(NSString *)initiatorDisplayName;
-(void)sendChunkedMessage:(id)arg1 to:(id)arg2 ;
-(void)_joinLiveModeFromHandle:(id)arg1 fromAccountID:(id)arg2 ;
-(void)leaveLiveModeForced;
-(void)_leaveLivemode;
-(void)_sharingEnded;
-(void)sendCommand:(id)arg1 fromHandle:(id)arg2 fromAccountID:(id)arg3 ;
-(void)_sharingEndedWithError:(id)arg1 ;
-(void)_sendChunkMessage:(id)arg1 to:(id)arg2 packet:(id)arg3 ;
-(BOOL)_validParticipant:(id)arg1 ;
-(id)initWithService:(id)arg1 groupID:(id)arg2 initiator:(BOOL)arg3 initiatorIdentifier:(id)arg4 ;
-(void)addSharingWith:(id)arg1 ;
-(BOOL)sessionIsAliveAfterRemovingSharingIdentifiers:(id)arg1 ;
-(id)_currentRoutePath;
-(void)participantDidJoin:(id)arg1 ;
-(void)participantDidLeave:(id)arg1 ;
-(void)setInitiatorDisplayName:(NSString *)arg1 ;
@end

