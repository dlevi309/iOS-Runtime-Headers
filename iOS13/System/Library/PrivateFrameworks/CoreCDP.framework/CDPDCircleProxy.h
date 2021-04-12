/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/

@class CDPContext;


@protocol CDPDCircleProxy <NSObject>
@property (nonatomic,readonly) CDPContext * cdpContext; 
@required
-(BOOL)requestToJoinCircle:(id*)arg1;
-(id)pairingChannelAcceptor:(id*)arg1;
-(id)pairingChannelInitiator:(id*)arg1;
-(BOOL)registerCredentials;
-(BOOL)tryRegisteringCredentials;
-(unsigned long long)circleStatus:(id*)arg1;
-(BOOL)removeThisDeviceFromCircle:(id*)arg1;
-(BOOL)canAuthenticate;
-(unsigned long long)cachedCliqueStatus:(id*)arg1;
-(int)cachedCircleStatus:(id*)arg1;
-(id)peerId;
-(unsigned long long)peerCount;
-(id)peerDeviceNamesByPeerID;
-(void)didJoinCircleAfterRecovery:(id)arg1;
-(id)generateRecoveryKeyWithInfo:(id)arg1 error:(id*)arg2;
-(id)generateVerifierWithRecoveryKey:(id)arg1 error:(id*)arg2;
-(BOOL)synchronizeCircleViews;
-(BOOL)requestToJoinCircleAfterRestore:(id*)arg1;
-(BOOL)requestToResetCircle:(id*)arg1;
-(BOOL)requestToResetCloudKitDataForReason:(id)arg1 error:(id*)arg2;
-(BOOL)viewMemberForAutofillPasswords:(id*)arg1;
-(BOOL)anyPeerHasEnabledViewsInSet:(id)arg1 error:(id*)arg2;
-(BOOL)setViewsWithEnableSet:(id)arg1 disableSet:(id)arg2;
-(BOOL)hasNonViewAwarePeers;
-(BOOL)removeNonViewAwarePeers:(id*)arg1;
-(BOOL)isLastBackupMakingPeer:(id*)arg1;
-(BOOL)registerCredentialsIfMissing;
-(void)waitForUpdate;
-(void)reportSuccess;
-(void)reportFailure:(id)arg1;
-(CDPContext *)cdpContext;

@end

