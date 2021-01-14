/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@interface CDPDCircleJoinResult : NSObject {

	BOOL _didJoin;
	BOOL _needsBackupRecovery;
	BOOL _hasPeersForRemoteApproval;
	BOOL _hasPeersWithCDPBackupRecords;
	BOOL _requiresEscrowRecordsFetch;
	BOOL _requiresInitialSync;
	unsigned long long _remotePeeriCKState;
	unsigned long long _circleStatus;

}

@property (assign) BOOL didJoin;                                       //@synthesize didJoin=_didJoin - In the implementation block
@property (assign) BOOL needsBackupRecovery;                           //@synthesize needsBackupRecovery=_needsBackupRecovery - In the implementation block
@property (assign) BOOL hasPeersForRemoteApproval;                     //@synthesize hasPeersForRemoteApproval=_hasPeersForRemoteApproval - In the implementation block
@property (assign) BOOL hasPeersWithCDPBackupRecords;                  //@synthesize hasPeersWithCDPBackupRecords=_hasPeersWithCDPBackupRecords - In the implementation block
@property (assign) BOOL requiresEscrowRecordsFetch;                    //@synthesize requiresEscrowRecordsFetch=_requiresEscrowRecordsFetch - In the implementation block
@property (assign) BOOL requiresInitialSync;                           //@synthesize requiresInitialSync=_requiresInitialSync - In the implementation block
@property (assign) unsigned long long remotePeeriCKState;              //@synthesize remotePeeriCKState=_remotePeeriCKState - In the implementation block
@property (assign) unsigned long long circleStatus;                    //@synthesize circleStatus=_circleStatus - In the implementation block
-(BOOL)didJoin;
-(unsigned long long)circleStatus;
-(void)setCircleStatus:(unsigned long long)arg1 ;
-(BOOL)hasPeersForRemoteApproval;
-(void)setHasPeersForRemoteApproval:(BOOL)arg1 ;
-(BOOL)requiresInitialSync;
-(void)setDidJoin:(BOOL)arg1 ;
-(BOOL)needsBackupRecovery;
-(void)setNeedsBackupRecovery:(BOOL)arg1 ;
-(BOOL)hasPeersWithCDPBackupRecords;
-(void)setHasPeersWithCDPBackupRecords:(BOOL)arg1 ;
-(BOOL)requiresEscrowRecordsFetch;
-(void)setRequiresEscrowRecordsFetch:(BOOL)arg1 ;
-(void)setRequiresInitialSync:(BOOL)arg1 ;
-(unsigned long long)remotePeeriCKState;
-(void)setRemotePeeriCKState:(unsigned long long)arg1 ;
@end

