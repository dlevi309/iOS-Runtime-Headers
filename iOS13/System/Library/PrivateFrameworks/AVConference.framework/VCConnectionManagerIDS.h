/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCConnectionManager.h>

@class VCSessionBitrateArbiter;

@interface VCConnectionManagerIDS : VCConnectionManager {

	double _lastTimestampForRemoteSendingFromNonPrimary;
	double _lastTimestampPreferredRemoteInterfaceUpdated;
	unsigned _sentPacketCount[256];
	unsigned _sentByteCount[256];
	unsigned _receivedPacketCount[256];
	unsigned _receivedByteCount[256];
	VCSessionBitrateArbiter* _bitrateArbiter;
	BOOL _isMultiwaySession;

}
-(void)dealloc;
-(int)addConnection:(id)arg1 ;
-(int)removeConnection:(id)arg1 ;
-(id)getPrimaryConnectionToBeCompared;
-(void)reportConnection:(id)arg1 isInitialConnection:(BOOL)arg2 ;
-(id)getSecondaryConnectionToBeCompared;
-(void)updateCellularMTU:(int)arg1 ;
-(void)updateCellularTech:(int)arg1 forLocalInterface:(BOOL)arg2 ;
-(void)sourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 isSourceOnCellular:(BOOL*)arg2 isSourceIPv6:(BOOL*)arg3 ;
-(BOOL)shouldAcceptDataFromSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 ;
-(id)copyConnectionWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 isPrimary:(BOOL*)arg2 ;
-(void)updateSessionStats:(unsigned short)arg1 ;
-(void)updatePacketCountAndByteCountWithIndex:(unsigned char)arg1 packetSize:(int)arg2 numOfStreamId:(int)arg3 isPriorityIncluded:(BOOL)arg4 isOutgoing:(BOOL)arg5 ;
-(void)synchronizeParticipantGenerationCounter:(unsigned char)arg1 ;
-(unsigned)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(BOOL)arg2 ;
-(unsigned)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(BOOL)arg2 ;
-(void)updateConnectionForDuplication;
-(id)initWithMultiwayEnabled:(BOOL)arg1 ;
-(void)resetParticipantGenerationCounter;
-(void)setPreferredLocalInterfaceForDuplication:(int)arg1 ;
-(void)setPreferredRemoteInterfaceForDuplication:(int)arg1 ;
-(BOOL)isPrimaryConnectionSameAsConnection:(id)arg1 ;
-(void)updatePrimaryWithConnection:(id)arg1 ;
-(void)updateSecondaryWithConnection:(id)arg1 ;
-(BOOL)addConnectionToConnectionArray:(id)arg1 ;
-(unsigned)uplinkBitrateCapForConnectionType:(int)arg1 ;
-(unsigned)downlinkBitrateCapForConnectionType:(int)arg1 ;
-(BOOL)selectPrimaryAndSecondaryWithConnection:(id)arg1 ;
-(void)handleSecondaryConnectionRemoved;
-(void)optOutAllStreamsForNonPrimaryConnections;
-(void)handlePrimaryConnectionRemoved;
-(void)resetPacketCountAndByteCountWithConnection:(id)arg1 ;
-(BOOL)shouldReplaceConnection:(id)arg1 withConnection:(id)arg2 ;
@end

