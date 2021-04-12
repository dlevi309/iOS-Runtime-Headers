/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRCryptoPairingSession.h>

@protocol OS_dispatch_queue;
@class MRPasscodeCredentials, NSObject, NSData, NSMutableData, _MRDeviceInfoMessageProtobuf, NSArray, NSMutableDictionary, NSString;

@interface MRCoreUtilsPairingSession : MRCryptoPairingSession {

	MRPasscodeCredentials* _credentials;
	PairingSessionPrivateRef _pairingSession;
	SCD_Struct_MR18* _pairingDelegate;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _hasExchangedMessage;
	unsigned _pairingFlags;
	unsigned long long _state;
	NSData* _inputKey;
	NSMutableData* _inputNonce;
	NSData* _outputKey;
	NSMutableData* _outputNonce;

}

@property (nonatomic,retain) NSData * inputKey;                                              //@synthesize inputKey=_inputKey - In the implementation block
@property (nonatomic,retain) NSMutableData * inputNonce;                                     //@synthesize inputNonce=_inputNonce - In the implementation block
@property (nonatomic,retain) NSData * outputKey;                                             //@synthesize outputKey=_outputKey - In the implementation block
@property (nonatomic,retain) NSMutableData * outputNonce;                                    //@synthesize outputNonce=_outputNonce - In the implementation block
@property (nonatomic,readonly) _MRDeviceInfoMessageProtobuf * pairedPeerDevice; 
@property (nonatomic,readonly) NSArray * pairedPeerDevices; 
@property (nonatomic,readonly) NSMutableDictionary * mediaRemotePairedDevices; 
@property (nonatomic,readonly) NSString * peerIdentifier; 
@property (nonatomic,readonly) unsigned long long state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL hasExchangedMessage;                                     //@synthesize hasExchangedMessage=_hasExchangedMessage - In the implementation block
@property (assign,nonatomic) unsigned pairingFlags;                                          //@synthesize pairingFlags=_pairingFlags - In the implementation block
-(void)dealloc;
-(BOOL)isValid;
-(void)open;
-(void)close;
-(unsigned long long)state;
-(void)retry;
-(NSString *)peerIdentifier;
-(BOOL)isPaired;
-(id)pairedDevices;
-(NSData *)outputKey;
-(void)setOutputKey:(NSData *)arg1 ;
-(BOOL)shouldAutoRetry;
-(void)setPairingFlags:(unsigned)arg1 ;
-(id)initWithRole:(unsigned long long)arg1 device:(id)arg2 ;
-(id)removePeer;
-(id)updatePeer;
-(NSArray *)pairedPeerDevices;
-(NSMutableDictionary *)mediaRemotePairedDevices;
-(id)initializePairingSession:(PairingSessionPrivateRef)arg1 ;
-(BOOL)shouldAutoRetryPairingExchange:(id)arg1 ;
-(id)addPeer;
-(_MRDeviceInfoMessageProtobuf *)pairedPeerDevice;
-(void)handlePairingExchangeData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handlePairingFailureWithStatus:(int)arg1 ;
-(id)encryptData:(id)arg1 withError:(id*)arg2 ;
-(id)decryptData:(id)arg1 withError:(id*)arg2 ;
-(BOOL)deleteIdentityWithError:(id*)arg1 ;
-(BOOL)hasExchangedMessage;
-(void)openInState:(unsigned long long)arg1 ;
-(void)_handlePairingFailureWithError:(id)arg1 ;
-(void)setInputKey:(NSData *)arg1 ;
-(void)setInputNonce:(NSMutableData *)arg1 ;
-(void)setOutputNonce:(NSMutableData *)arg1 ;
-(id)_onQueuePerformPairingExchangeWithInputData:(id)arg1 error:(id*)arg2 ;
-(id)_onQueueInitializePairingSessionWithState:(unsigned long long)arg1 ;
-(id)extendedPeerInfo;
-(id)_createPeerDeviceFromPeer:(id)arg1 ;
-(void*)_createDeviceFromPeer:(id)arg1 ;
-(void)_delegateDidEnterPasscode:(id)arg1 ;
-(void)_handlePairingCompleteWithError:(id)arg1 ;
-(void)_handleSetupExchangeComplete;
-(void)_onQueueDeriveEncryptionKeys;
-(id)_generateSetupCodeWithMaximumLength:(unsigned long long)arg1 ;
-(int)_displaySetupCode:(id)arg1 ;
-(void)_hideSetupCode;
-(int)_promptForSetupCodeWithDelay:(double)arg1 ;
-(unsigned)pairingFlags;
-(NSData *)inputKey;
-(NSMutableData *)inputNonce;
-(NSMutableData *)outputNonce;
@end

