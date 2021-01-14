/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCConnectionManager.h>

@class VCSessionBitrateArbiter, VCConnectionSelector;

@interface VCConnectionManagerIDS : VCConnectionManager {

	double _lastTimestampForRemoteSendingFromNonPrimary;
	double _lastTimestampPreferredRemoteInterfaceUpdated;
	unsigned _sentPacketCount[256];
	unsigned _sentByteCount[256];
	unsigned _receivedPacketCount[256];
	unsigned _receivedByteCount[256];
	VCSessionBitrateArbiter* _bitrateArbiter;
	BOOL _isMultiwaySession;
	VCConnectionSelector* _connectionSelector;

}
-(void)startActiveProbingWithOptions:(id)arg1 ;
-(void)stopActiveProbingWithOptions:(id)arg1 ;
-(void)flushLinkProbingStatusWithOptions:(id)arg1 ;
-(id)secondaryConnection;
-(int)removeConnection:(id)arg1 ;
-(int)addConnection:(id)arg1 ;
-(void)dealloc;
-(void)queryProbingResultsWithOptions:(id)arg1 ;
-(id)getPrimaryConnectionToBeCompared;
-(id)primaryConnection;
-(id)lastPrimaryConnectionInUse;
-(void)useConnectionAsPrimary:(id)arg1 ;
-(void)setSecondaryConnection:(id)arg1 ;
-(void)reportConnection:(id)arg1 isInitialConnection:(BOOL)arg2 ;
-(void)setPrimaryConnection:(id)arg1 ;
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
-(void)setConnectionForDuplication:(id)arg1 ;
-(void)setLastPrimaryConnectionInUse:(id)arg1 ;
-(id)initWithMultiwayEnabled:(BOOL)arg1 ;
-(SCD_Struct_VC94*)getConnectionSelectionPolicy;
-(id)connectionForDuplication;
-(void)updateConnectionSelectionPolicy;
-(void)addLinkProbingTelemetry:(id)arg1 ;
-(void)setPreferredLocalInterfaceForDuplication:(int)arg1 ;
-(BOOL)shouldDropCurrentPrimaryConnectionWithConnectionStats:(SCD_Struct_VC110*)arg1 ;
-(void)didUpdateLinkPreferenceOrder:(id)arg1 ;
-(void)setPreferredRemoteInterfaceForDuplication:(int)arg1 ;
-(void)resetParticipantGenerationCounter;
-(BOOL)addConnectionToConnectionArray:(id)arg1 ;
-(unsigned)uplinkBitrateCapForConnection:(id)arg1 ;
-(unsigned)downlinkBitrateCapForConnection:(id)arg1 ;
-(void)handleSecondaryConnectionRemoved;
-(void)optOutAllStreamsForNonPrimaryConnections;
-(void)removeFromConnectionArray:(id)arg1 ;
-(void)handlePrimaryConnectionRemoved;
-(void)resetPacketCountAndByteCountWithConnection:(id)arg1 ;
-(void)addDuplicationConnectionUpdateTelemetryWithActiveConnectionRegistry:(id)arg1 suggestedLinkTypeCombo:(id)arg2 payload:(id)arg3 ;
-(BOOL)shouldKeepAllConnections;
-(BOOL)shouldReplaceConnection:(id)arg1 withConnection:(id)arg2 ;
-(void)updateDuplicationStateWithConnectionOperation:(int)arg1 isLocalOnWiFi:(BOOL)arg2 isRemoteOnWiFi:(BOOL)arg3 ;
@end

