/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSGlobalLink.h>

@interface IDSNonFTGL : IDSGlobalLink
-(void)_startHB:(id)arg1 ;
-(void)startWithOptions:(id)arg1 ;
-(BOOL)_isBetterCandidatePair:(id)arg1 newCandidatePair:(id)arg2 ;
-(id)_nextConnectedCandidatePair;
-(BOOL)_processRemovedLocalAddressList:(id)arg1 ;
-(void)_setDefaultCandidatePairForNonFT;
-(void)_selectDefaultCandidatePair;
-(void)_notifyCandidatePairConnected:(id)arg1 ;
-(void)_notifyCandidatePairDisconnected:(id)arg1 withReason:(unsigned char)arg2 ;
-(void)_notifyDefaultUnderlyingLinkChanged:(id)arg1 error:(long long)arg2 ;
-(void)_setFirstDefaultCandidatePair:(id)arg1 ;
-(void)_selectBetterDefaultCandidatePair:(id)arg1 ;
-(void)setPacketNotificationFilter:(char)arg1 uniqueTag:(unsigned)arg2 isEnabled:(BOOL)arg3 ;
-(void)dropIPPackets:(char)arg1 payloadArray:(id)arg2 ;
-(void)stopKeepAlive:(id)arg1 ;
-(void)updateProtocolQualityOfService:(char)arg1 isGood:(BOOL)arg2 ;
-(void)currentCellularSignalStrength:(int*)arg1 signalStrength:(int*)arg2 signalGrade:(int*)arg3 ;
-(void)_handleNewRATChange;
-(void)_handleNoRemotePacket;
-(void)_handleRemapping:(id)arg1 ;
-(void)disconnectWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_setupNewQRLinkIfNecessary:(id)arg1 ;
@end

