/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRCryptoPairingSession.h>

@class MRCoreUtilsPairingSession, MRCryptoPairingSessionBlockDelegate;

@interface MRExternalDevicePairingSession : MRCryptoPairingSession {

	MRCoreUtilsPairingSession* _pairingSession;
	MRCryptoPairingSessionBlockDelegate* _pairingDelegate;

}

@property (nonatomic,retain) MRCoreUtilsPairingSession * pairingSession;                         //@synthesize pairingSession=_pairingSession - In the implementation block
@property (nonatomic,retain) MRCryptoPairingSessionBlockDelegate * pairingDelegate;              //@synthesize pairingDelegate=_pairingDelegate - In the implementation block
@property (nonatomic,readonly) BOOL hasExchangedMessage; 
@property (getter=isUsingSystemPairing,nonatomic,readonly) BOOL usingSystemPairing; 
@property (nonatomic,readonly) unsigned long long state; 
-(BOOL)isValid;
-(void)open;
-(void)close;
-(void)setDelegate:(id)arg1 ;
-(unsigned long long)state;
-(id)initWithDevice:(id)arg1 ;
-(BOOL)isPaired;
-(id)pairedDevices;
-(MRCoreUtilsPairingSession *)pairingSession;
-(id)removePeer;
-(id)updatePeer;
-(BOOL)isUsingSystemPairing;
-(void)handlePairingExchangeData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handlePairingFailureWithStatus:(int)arg1 ;
-(id)encryptData:(id)arg1 withError:(id*)arg2 ;
-(id)decryptData:(id)arg1 withError:(id*)arg2 ;
-(BOOL)deleteIdentityWithError:(id*)arg1 ;
-(BOOL)hasExchangedMessage;
-(void)setPairingDelegate:(MRCryptoPairingSessionBlockDelegate *)arg1 ;
-(BOOL)_useSystemPairing;
-(void)_openSecuritySessionInState:(unsigned long long)arg1 useSystemPairing:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPairingSession:(MRCoreUtilsPairingSession *)arg1 ;
-(MRCryptoPairingSessionBlockDelegate *)pairingDelegate;
@end

