/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRCoreUtilsPairingSession.h>

@interface MRCoreUtilsSystemPairingSession : MRCoreUtilsPairingSession
+(id)pairingManager;
+(BOOL)systemPairingAvailable;
+(id)globalPairingQueue;
-(BOOL)shouldRetry;
-(id)removePeer;
-(id)updatePeer;
-(id)updateMediaRemotePairedDevice:(id)arg1 ;
-(id)pairedPeerDevices;
-(id)mediaRemotePairedDevices;
-(void*)_createPeerDeviceFromPairedPeer:(id)arg1 ;
-(id)initializePairingSession:(PairingSessionPrivateRef)arg1 ;
-(BOOL)shouldAutoRetryPairingExchange:(id)arg1 ;
-(id)addPeer;
-(id)pairedPeerDevice;
-(id)pairedPeerFromPeerDevice:(void*)arg1 ;
@end

