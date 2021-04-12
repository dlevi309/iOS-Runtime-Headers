/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
*/

#import <libobjc.A.dylib/LAContextXPC.h>
#import <libobjc.A.dylib/LAContextCallbackXPC.h>

@protocol LAUIDelegate, LAContextXPC;
@class NSUUID, LAContext, NSXPCConnection, NSObject, NSMutableArray, LACachedExternalizedContext, NSError, NSNumber, NSData, NSString;

@interface LAClient : NSObject <LAContextXPC, LAContextCallbackXPC> {

	BOOL _shouldRecoverConnection;
	BOOL _synchronous;
	id<LAUIDelegate> _uiDelegate;
	NSUUID* _uuid;
	LAContext* _context;
	NSXPCConnection* _serverConnection;
	NSObject*<LAContextXPC> _remoteContext;
	NSObject*<LAContextXPC> _synchronousRemoteContext;
	NSMutableArray* _invalidations;
	LACachedExternalizedContext* _cachedExternalizedContext;
	NSError* _permanentError;
	NSNumber* _userSession;
	NSData* _existingContext;

}

@property (nonatomic,readonly) NSXPCConnection * serverConnection;                            //@synthesize serverConnection=_serverConnection - In the implementation block
@property (nonatomic,retain) NSObject*<LAContextXPC> remoteContext;                           //@synthesize remoteContext=_remoteContext - In the implementation block
@property (nonatomic,readonly) NSObject*<LAContextXPC> synchronousRemoteContext;              //@synthesize synchronousRemoteContext=_synchronousRemoteContext - In the implementation block
@property (nonatomic,readonly) NSMutableArray * invalidations;                                //@synthesize invalidations=_invalidations - In the implementation block
@property (retain) LACachedExternalizedContext * cachedExternalizedContext;                   //@synthesize cachedExternalizedContext=_cachedExternalizedContext - In the implementation block
@property (retain) NSError * permanentError;                                                  //@synthesize permanentError=_permanentError - In the implementation block
@property (nonatomic,readonly) NSNumber * userSession;                                        //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) NSData * existingContext;                                        //@synthesize existingContext=_existingContext - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSData * externalizedContext; 
@property (assign,nonatomic,__weak) id<LAUIDelegate> uiDelegate;                              //@synthesize uiDelegate=_uiDelegate - In the implementation block
@property (assign,nonatomic) BOOL synchronous;                                                //@synthesize synchronous=_synchronous - In the implementation block
@property (assign,nonatomic,__weak) LAContext * context;                                      //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_queue;
+(void)_performInvalidationBlocks:(id)arg1 ;
+(id)createConnection:(const unsigned*)arg1 legacyService:(BOOL)arg2 ;
+(id)_recoveryQueue;
-(void)dealloc;
-(NSUUID *)uuid;
-(LAContext *)context;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSData *)externalizedContext;
-(BOOL)synchronous;
-(void)setSynchronous:(BOOL)arg1 ;
-(void)setContext:(LAContext *)arg1 ;
-(void)invalidateWithReply:(/*^block*/id)arg1 ;
-(NSNumber *)userSession;
-(NSObject*<LAContextXPC>)remoteContext;
-(void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(NSXPCConnection *)serverConnection;
-(void)setUiDelegate:(id<LAUIDelegate>)arg1 ;
-(void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)initWithExistingContext:(id)arg1 userSession:(unsigned*)arg2 ;
-(void)_handleConnectionResult:(id)arg1 uuid:(id)arg2 error:(id)arg3 ;
-(void)_synchronousRemoteObjectProxy:(const unsigned*)arg1 performCall:(/*^block*/id)arg2 ;
-(NSMutableArray *)invalidations;
-(void)prearmTouchIdWithReply:(/*^block*/id)arg1 ;
-(void)notifyEvent:(long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_scheduleRecovery;
-(void)_connectToServerWithRecovery:(BOOL)arg1 userSession:(const unsigned*)arg2 legacyService:(BOOL)arg3 ;
-(void)setRemoteContext:(NSObject*<LAContextXPC>)arg1 ;
-(void)setPermanentError:(NSError *)arg1 ;
-(BOOL)_setPermanentError:(id)arg1 ;
-(NSData *)existingContext;
-(void)allowTransferToProcess:(int)arg1 receiverAuditTokenData:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_performCallBool:(/*^block*/id)arg1 finally:(/*^block*/id)arg2 ;
-(NSObject*<LAContextXPC>)synchronousRemoteContext;
-(void)tokenForTransferToUnknownProcess:(/*^block*/id)arg1 ;
-(void)_performSyncCallId:(/*^block*/id)arg1 finally:(/*^block*/id)arg2 ;
-(void)_serializedInvalidateWithMessage:(id)arg1 ;
-(void)_performSyncCallBool:(/*^block*/id)arg1 finally:(/*^block*/id)arg2 ;
-(void)_recoverConnection;
-(NSError *)permanentError;
-(void)_performCallId:(/*^block*/id)arg1 finally:(/*^block*/id)arg2 ;
-(LACachedExternalizedContext *)cachedExternalizedContext;
-(void)setExistingContext:(NSData *)arg1 ;
-(void)setCachedExternalizedContext:(LACachedExternalizedContext *)arg1 ;
-(id)_updateOptions:(id)arg1 ;
-(void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_checkIdResultForTCC:(id)arg1 error:(id)arg2 retryBlock:(/*^block*/id)arg3 finally:(/*^block*/id)arg4 ;
-(void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)retryProcessedEvent:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)resetProcessedEvent:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)isCredentialSet:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)setCredential:(id)arg1 type:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)serverPropertyForOption:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)setServerPropertyForOption:(long long)arg1 value:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)externalizedContextWithReply:(/*^block*/id)arg1 ;
-(void)authMethodWithReply:(/*^block*/id)arg1 ;
-(void)setShowingCoachingHint:(BOOL)arg1 event:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(id)synchronousExternalizedContextWithError:(id*)arg1 ;
-(void)invalidatedWithError:(id)arg1 ;
-(void)tccPreflightWithService:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithExistingContext:(id)arg1 ;
-(id)initWithUUID:(id)arg1 token:(id)arg2 senderAuditTokenData:(id)arg3 ;
-(void)invalidateWithMessage:(id)arg1 ;
-(void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)serverPropertyForOption:(long long)arg1 error:(id*)arg2 ;
-(BOOL)setServerPropertyForOption:(long long)arg1 value:(id)arg2 error:(id*)arg3 ;
-(void)resetWithReply:(/*^block*/id)arg1 ;
-(id<LAUIDelegate>)uiDelegate;
@end

