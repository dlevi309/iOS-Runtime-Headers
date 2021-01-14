/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/SFSession.h>

@class CUPairingSession, SFService;

@interface SFServiceSession : SFSession {

	CUPairingSession* _pairSetupSession;
	unsigned _pairSetupXID;
	CUPairingSession* _pairVerifySession;
	unsigned long long _sendLastTicks;
	SFService* _service;

}

@property (assign,nonatomic) unsigned long long sendLastTicks;              //@synthesize sendLastTicks=_sendLastTicks - In the implementation block
@property (nonatomic,retain) SFService * service;                           //@synthesize service=_service - In the implementation block
-(id)init;
-(void)_hearbeatTimer;
-(void)_receivedObject:(id)arg1 flags:(unsigned)arg2 ;
-(int)setEncryptionReadKey:(const char*)arg1 readKeyLen:(unsigned long long)arg2 writeKey:(const char*)arg3 writeKeyLen:(unsigned long long)arg4 ;
-(void)clearEncryptionInfo;
-(void)sendEncryptedObject:(id)arg1 ;
-(void)receivedStartRequest:(id)arg1 ;
-(void)setSendLastTicks:(unsigned long long)arg1 ;
-(unsigned long long)sendLastTicks;
-(void)pairSetup:(id)arg1 start:(BOOL)arg2 ;
-(void)pairVerify:(id)arg1 start:(BOOL)arg2 ;
-(void)_receivedRequestID:(id)arg1 object:(id)arg2 flags:(unsigned)arg3 ;
-(void)_receivedResponseID:(id)arg1 object:(id)arg2 flags:(unsigned)arg3 ;
-(void)_sendFrameType:(unsigned char)arg1 data:(id)arg2 ;
-(void)_sendRequestWithFlags:(unsigned)arg1 object:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_sendWithFlags:(unsigned)arg1 object:(id)arg2 ;
-(void)_sendFrameType:(unsigned char)arg1 unencryptedObject:(id)arg2 ;
-(void)receivedEncryptedData:(id)arg1 type:(unsigned char)arg2 ;
-(void)receivedUnencryptedData:(id)arg1 type:(unsigned char)arg2 ;
-(int)_pairSetupCompleted:(int)arg1 ;
-(int)_pairVerifyCompleted:(int)arg1 ;
-(void)sendFrameType:(unsigned char)arg1 data:(id)arg2 ;
-(BOOL)pairingContainsACL:(id)arg1 ;
-(void)activate;
-(void)setService:(SFService *)arg1 ;
-(id)pairingDeriveKeyForIdentifier:(id)arg1 keyLength:(unsigned long long)arg2 ;
-(void)invalidate;
-(void)sendRequestWithFlags:(unsigned)arg1 object:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)sendWithFlags:(unsigned)arg1 object:(id)arg2 ;
-(void)sessionReceivedFrameType:(unsigned char)arg1 data:(id)arg2 ;
-(SFService *)service;
-(void)dealloc;
@end

