/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <libobjc.A.dylib/SYChangeSerializer.h>
#import <libobjc.A.dylib/SYStateLoggable.h>

@protocol OS_dispatch_queue, OS_os_transaction, SYSessionDelegate, SYChangeSerializer;
@class NSObject, NSMutableSet, NSMutableDictionary, NSString, SYService, NSDictionary, NSError, PBCodable;

@interface SYSession : NSObject <SYChangeSerializer, SYStateLoggable> {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	AB _inTransaction;
	NSObject*<OS_os_transaction> _transaction;
	AB _paused;
	NSMutableSet* _pendingMessageIDs;
	BOOL _rejectedNewSessionFromSamePeer;
	BOOL _sessionStarted;
	NSMutableDictionary* _stateResponders;
	os_unfair_lock_s _setDelegateLock;
	BOOL _isSending;
	long long _priority;
	id<SYSessionDelegate> _delegate;
	id<SYChangeSerializer> _serializer;
	NSString* _identifier;
	SYService* _service;
	NSString* _reason;
	double _perMessageTimeout;
	double _fullSessionTimeout;
	NSDictionary* _options;
	long long _maxConcurrentMessages;
	NSError* _error;
	NSDictionary* _userContext;
	NSDictionary* _sessionMetadata;
	NSObject*<OS_dispatch_queue> _queue;
	double _birthDate;
	unsigned long long _sessionSignpost;
	unsigned long long _bytesTransferred;
	unsigned long long _changeCount;
	NSMutableDictionary* _peerGenerationIDs;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (assign) unsigned state; 
@property (nonatomic,copy) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double birthDate;                                      //@synthesize birthDate=_birthDate - In the implementation block
@property (nonatomic,readonly) NSDictionary * wrappedUserContext; 
@property (nonatomic,readonly) double remainingSessionTime; 
@property (assign,nonatomic) unsigned long long sessionSignpost;                    //@synthesize sessionSignpost=_sessionSignpost - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesTransferred;                 //@synthesize bytesTransferred=_bytesTransferred - In the implementation block
@property (nonatomic,readonly) unsigned long long changeCount;                      //@synthesize changeCount=_changeCount - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * peerGenerationIDs;                 //@synthesize peerGenerationIDs=_peerGenerationIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long protocolVersion; 
@property (assign,nonatomic) long long priority;                                    //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic,__weak) id<SYSessionDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> targetQueue; 
@property (nonatomic,retain) id<SYChangeSerializer> serializer;                     //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,__weak,readonly) SYService * service;                          //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSString * reason;                                     //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) double perMessageTimeout;                              //@synthesize perMessageTimeout=_perMessageTimeout - In the implementation block
@property (assign,nonatomic) double fullSessionTimeout;                             //@synthesize fullSessionTimeout=_fullSessionTimeout - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                                  //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) long long maxConcurrentMessages;                       //@synthesize maxConcurrentMessages=_maxConcurrentMessages - In the implementation block
@property (nonatomic,retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (assign) BOOL canRestart; 
@property (assign) BOOL canRollback; 
@property (nonatomic,readonly) BOOL isSending;                                      //@synthesize isSending=_isSending - In the implementation block
@property (readonly) BOOL isResetSync; 
@property (readonly) BOOL wasCancelled; 
@property (nonatomic,retain) NSDictionary * userContext;                            //@synthesize userContext=_userContext - In the implementation block
@property (nonatomic,copy) NSDictionary * sessionMetadata;                          //@synthesize sessionMetadata=_sessionMetadata - In the implementation block
@property (nonatomic,readonly) unsigned long long sentChangeByteCount; 
@property (nonatomic,readonly) unsigned long long sentChangeCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PBCodable * stateForLogging; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)unarchiveMetadata:(id)arg1 ;
-(unsigned long long)changeCount;
-(void)setSerializer:(id<SYChangeSerializer>)arg1 ;
-(NSDictionary *)userContext;
-(void)start:(/*^block*/id)arg1 ;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(unsigned long long)bytesTransferred;
-(void)_handleError:(id)arg1 ;
-(id<SYSessionDelegate>)delegate;
-(BOOL)_endTransaction;
-(id<SYChangeSerializer>)serializer;
-(void)_pause;
-(void)cancelWithError:(id)arg1 ;
-(id)dataFromChange:(id)arg1 ;
-(id)changeFromData:(id)arg1 ofType:(long long)arg2 ;
-(BOOL)_handleEndSessionResponse:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)options;
-(id)encodeSYChangeForBackwardCompatibility:(id)arg1 protocolVersion:(long long)arg2 ;
-(id)decodeChangeData:(id)arg1 fromProtocolVersion:(long long)arg2 ofType:(long long)arg3 ;
-(BOOL)_beginTransaction;
-(unsigned long long)protocolVersion;
-(void)setError:(NSError *)arg1 ;
-(void)_continue;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)initWithService:(id)arg1 ;
-(NSError *)error;
-(void)setDelegate:(id<SYSessionDelegate>)arg1 ;
-(BOOL)_handleSyncBatchResponse:(id)arg1 error:(id*)arg2 ;
-(NSString *)reason;
-(unsigned long long)sessionSignpost;
-(void)setState:(unsigned)arg1 ;
-(void)setUserContext:(NSDictionary *)arg1 ;
-(BOOL)wasCancelled;
-(unsigned)state;
-(NSObject*<OS_dispatch_queue>)queue;
-(double)birthDate;
-(PBCodable *)stateForLogging;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)maxConcurrentMessages;
-(void)setMaxConcurrentMessages:(long long)arg1 ;
-(NSString *)identifier;
-(void)setSessionSignpost:(unsigned long long)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)cancel;
-(NSDictionary *)sessionMetadata;
-(long long)priority;
-(BOOL)_handleRestartSessionResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleStartSessionResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)isSending;
-(void)setPriority:(long long)arg1 ;
-(SYService *)service;
-(void)dealloc;
-(id)CPSafeDescription;
-(BOOL)isResetSync;
-(void)setBirthDate:(double)arg1 ;
-(NSDictionary *)wrappedUserContext;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(double)fullSessionTimeout;
-(double)perMessageTimeout;
-(id)combinedEngineOptions:(id)arg1 ;
-(void)didCompleteSession;
-(void)_setStateQuietly:(unsigned)arg1 ;
-(void)didStartSession;
-(double)remainingSessionTime;
-(void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)hasRejectedPeerSession;
-(void)setHasRejectedPeerSession:(BOOL)arg1 ;
-(BOOL)_willAcquiesceToNewSessionFromPeer:(id)arg1 ;
-(void)_clearOutgoingMessageUUID:(id)arg1 ;
-(void)_recordOutgoingMessageUUID:(id)arg1 ;
-(BOOL)_readyToProcessIncomingMessages;
-(NSMutableDictionary *)peerGenerationIDs;
-(void)setFullSessionTimeout:(double)arg1 ;
-(void)_onSessionStateChangedTo:(unsigned)arg1 do:(/*^block*/id)arg2 ;
-(void)_handleSyncBatch:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleRestartSession:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleEndSession:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_supercededWithSession:(id)arg1 ;
-(void)setPerMessageTimeout:(double)arg1 ;
-(id)stateResponders;
-(id)_cancelPendingMessagesReturningFailures;
-(void)setSessionMetadata:(NSDictionary *)arg1 ;
-(void)_resolvedIdentifierForRequest:(id)arg1 ;
-(void)_resolvedIdentifier:(id)arg1 forResponse:(id)arg2 ;
-(void)setPeerGenerationIDs:(NSMutableDictionary *)arg1 ;
-(unsigned long long)sentChangeByteCount;
-(unsigned long long)sentChangeCount;
@end

