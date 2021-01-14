/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isPaired;
-(id)initWithDevice:(id)arg1 ;
-(void)open;
-(BOOL)hasExchangedMessage;
-(void)close;
-(void)setDelegate:(id)arg1 ;
-(BOOL)isValid;
-(id)pairedDevices;
-(void)setPairingDelegate:(MRCryptoPairingSessionBlockDelegate *)arg1 ;
-(void)setPairingSession:(MRCoreUtilsPairingSession *)arg1 ;
-(MRCryptoPairingSessionBlockDelegate *)pairingDelegate;
-(unsigned long long)state;
-(id)removePeer;
-(BOOL)isUsingSystemPairing;
-(id)updatePeer;
-(void)handlePairingExchangeData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handlePairingFailureWithStatus:(int)arg1 ;
-(id)encryptData:(id)arg1 withError:(id*)arg2 ;
-(id)decryptData:(id)arg1 withError:(id*)arg2 ;
-(BOOL)deleteIdentityWithError:(id*)arg1 ;
-(MRCoreUtilsPairingSession *)pairingSession;
@end

