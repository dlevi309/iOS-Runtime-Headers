/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString, NSMutableArray;

@interface HMDSecureRemoteStreamInternal : HMFObject <HMFLogging> {

	unsigned char _cipherReadKey[32];
	unsigned char _cipherReadNonce[8];
	unsigned char _cipherWriteKey[32];
	unsigned char _cipherWriteNonce[8];
	BOOL _commitResponded;
	NSObject*<OS_dispatch_source> _idleTimer;
	NSObject*<OS_dispatch_queue> _internalQueue;
	/*^block*/id _internalRequestHandler;
	unsigned char _pairVerifyDone;
	PairingSessionPrivateRef _pairVerifySession;
	NSMutableDictionary* _prepareRequests;
	BOOL _prepareResponded;
	NSString* _sessionID;
	BOOL _started;
	int _state;
	NSMutableDictionary* _transactions;
	NSMutableArray* _userTransactions;
	/*^block*/id _getLocalIdentityHandler;
	/*^block*/id _findPeerHandler;
	/*^block*/id _requestHandler;
	/*^block*/id _startedHandler;
	/*^block*/id _stoppedHandler;
	/*^block*/id _transportSendMessage;
	long long _type;
	NSObject*<OS_dispatch_queue> _userQueue;
	unsigned long long _commitTimeoutNanos;
	unsigned long long _clientIdleTimeoutNanos;
	unsigned long long _serverIdleTimeoutNanos;
	unsigned long long _sendInternalTimeoutNanos;
	unsigned long long _sendUserTimeoutNanos;

}

@property (readonly) double requestTimeout; 
@property (copy) id internalRequestHandler;                                 //@synthesize internalRequestHandler=_internalRequestHandler - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize userQueue=_userQueue - In the implementation block
@property (copy) id getLocalIdentityHandler;                                //@synthesize getLocalIdentityHandler=_getLocalIdentityHandler - In the implementation block
@property (copy) id findPeerHandler;                                        //@synthesize findPeerHandler=_findPeerHandler - In the implementation block
@property (copy) id startedHandler;                                         //@synthesize startedHandler=_startedHandler - In the implementation block
@property (copy) id stoppedHandler;                                         //@synthesize stoppedHandler=_stoppedHandler - In the implementation block
@property (copy) id requestHandler;                                         //@synthesize requestHandler=_requestHandler - In the implementation block
@property (copy) id transportSendMessage;                                   //@synthesize transportSendMessage=_transportSendMessage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_start;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)requestHandler;
-(void)setRequestHandler:(id)arg1 ;
-(void)setStoppedHandler:(id)arg1 ;
-(double)requestTimeout;
-(id)logIdentifier;
-(id)stoppedHandler;
-(void)_stop:(int)arg1 ;
-(int)_updateIdleTimer;
-(void)_runStateMachine;
-(void)_serverCompletePrepareRequest:(id)arg1 ;
-(void)_completeTransaction:(id)arg1 response:(id)arg2 status:(int)arg3 ;
-(void)_completeUserTransaction:(id)arg1 response:(id)arg2 status:(int)arg3 ;
-(void)_clientRunStateMachine;
-(void)_serverRunStateMachine;
-(void)_sendUserRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_transportReceivedMessage:(id)arg1 options:(id)arg2 ;
-(int)_clientPairVerifyExchange:(id)arg1 ;
-(int)_setupEncryption;
-(int)_clientSendPrepareRequest:(id)arg1 ;
-(int)_clientSendCommitRequest:(id)arg1 ;
-(void)_sendRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(int)_clientHandlePrepareResponse:(id)arg1 ;
-(int)_clientHandleCommitResponse:(id)arg1 ;
-(void)_serverPairVerifyExchange:(id)arg1 options:(id)arg2 ;
-(void)setInternalRequestHandler:(id)arg1 ;
-(void)_serverHandleEncryptedRequest:(id)arg1 options:(id)arg2 ;
-(int)_serverHandleDecryptedRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(int)_serverHandlePrepareRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(int)_serverHandleCommitRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(id)initWithType:(long long)arg1 commitTimeout:(unsigned long long)arg2 clientIdleTimeout:(unsigned long long)arg3 serverIdleTimeout:(unsigned long long)arg4 sendInternalTimeout:(unsigned long long)arg5 sendUserTimeout:(unsigned long long)arg6 ;
-(void)sendRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)transportReceivedMessage:(id)arg1 options:(id)arg2 ;
-(id)internalRequestHandler;
-(id)getLocalIdentityHandler;
-(void)setGetLocalIdentityHandler:(id)arg1 ;
-(id)findPeerHandler;
-(void)setFindPeerHandler:(id)arg1 ;
-(id)startedHandler;
-(void)setStartedHandler:(id)arg1 ;
-(id)transportSendMessage;
-(void)setTransportSendMessage:(id)arg1 ;
@end
