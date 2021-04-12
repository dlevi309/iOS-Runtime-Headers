/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRCryptoPairingSession.h>

@protocol OS_dispatch_queue;
@class MRPasscodeCredentials, NSObject, NSData, NSMutableData, MRDeviceInfo, NSArray, NSMutableDictionary, NSString;

@interface MRCoreUtilsPairingSession : MRCryptoPairingSession {

	MRPasscodeCredentials* _credentials;
	PairingSessionPrivateRef _pairingSession;
	SCD_Struct_MR19* _pairingDelegate;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _hasExchangedMessage;
	unsigned _pairingFlags;
	unsigned long long _state;
	NSData* _inputKey;
	NSMutableData* _inputNonce;
	NSData* _outputKey;
	NSMutableData* _outputNonce;

}

@property (nonatomic,retain) NSData * inputKey;                                             //@synthesize inputKey=_inputKey - In the implementation block
@property (nonatomic,retain) NSMutableData * inputNonce;                                    //@synthesize inputNonce=_inputNonce - In the implementation block
@property (nonatomic,retain) NSData * outputKey;                                            //@synthesize outputKey=_outputKey - In the implementation block
@property (nonatomic,retain) NSMutableData * outputNonce;                                   //@synthesize outputNonce=_outputNonce - In the implementation block
@property (nonatomic,readonly) MRDeviceInfo * pairedPeerDevice; 
@property (nonatomic,readonly) NSArray * pairedPeerDevices; 
@property (nonatomic,readonly) NSMutableDictionary * mediaRemotePairedDevices; 
@property (nonatomic,readonly) NSString * peerIdentifier; 
@property (nonatomic,readonly) unsigned long long state;                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL hasExchangedMessage;                                    //@synthesize hasExchangedMessage=_hasExchangedMessage - In the implementation block
@property (assign,nonatomic) unsigned pairingFlags;                                         //@synthesize pairingFlags=_pairingFlags - In the implementation block
-(BOOL)isPaired;
-(void)open;
-(NSString *)peerIdentifier;
-(BOOL)hasExchangedMessage;
-(NSData *)inputKey;
-(void)close;
-(NSMutableData *)inputNonce;
-(id)addPeer;
-(void)openInState:(unsigned long long)arg1 ;
-(BOOL)isValid;
-(void)setInputNonce:(NSMutableData *)arg1 ;
-(void)setOutputNonce:(NSMutableData *)arg1 ;
-(id)pairedDevices;
-(NSMutableData *)outputNonce;
-(void)setOutputKey:(NSData *)arg1 ;
-(unsigned long long)state;
-(void)setPairingFlags:(unsigned)arg1 ;
-(id)removePeer;
-(void)setInputKey:(NSData *)arg1 ;
-(id)initWithRole:(unsigned long long)arg1 device:(id)arg2 ;
-(id)updatePeer;
-(NSArray *)pairedPeerDevices;
-(NSMutableDictionary *)mediaRemotePairedDevices;
-(id)initializePairingSession:(PairingSessionPrivateRef)arg1 ;
-(MRDeviceInfo *)pairedPeerDevice;
-(void)handlePairingExchangeData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handlePairingFailureWithStatus:(int)arg1 ;
-(id)encryptData:(id)arg1 withError:(id*)arg2 ;
-(id)decryptData:(id)arg1 withError:(id*)arg2 ;
-(BOOL)deleteIdentityWithError:(id*)arg1 ;
-(unsigned)pairingFlags;
-(NSData *)outputKey;
-(BOOL)shouldAutoRetryPairingExchange:(id)arg1 ;
-(void)dealloc;
@end

