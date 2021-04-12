/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/

@class CDPContext;


@protocol CDPDCircleProxy <NSObject>
@property (nonatomic,readonly) CDPContext * cdpContext; 
@required
-(id)peerDeviceNamesByPeerID;
-(id)pairingChannelInitiator:(id*)arg1;
-(void)reportFailure:(id)arg1;
-(void)waitForUpdate;
-(CDPContext *)cdpContext;
-(BOOL)tryRegisteringCredentials;
-(BOOL)setViewsWithEnableSet:(id)arg1 disableSet:(id)arg2;
-(BOOL)canAuthenticate;
-(id)generateVerifierWithRecoveryKey:(id)arg1 error:(id*)arg2;
-(id)peerId;
-(void)didJoinCircleAfterRecovery:(id)arg1;
-(BOOL)removeNonViewAwarePeers:(id*)arg1;
-(BOOL)anyPeerHasEnabledViewsInSet:(id)arg1 error:(id*)arg2;
-(unsigned long long)circleStatus:(id*)arg1;
-(BOOL)viewMemberForAutofillPasswords:(id*)arg1;
-(BOOL)requestToJoinCircleAfterRestore:(id*)arg1;
-(id)pairingChannelAcceptor:(id*)arg1;
-(BOOL)requestToResetCloudKitDataForReason:(id)arg1 error:(id*)arg2;
-(BOOL)requestToJoinCircle:(id*)arg1;
-(id)generateRecoveryKeyWithInfo:(id)arg1 error:(id*)arg2;
-(BOOL)synchronizeCircleViews;
-(BOOL)registerCredentialsIfMissing;
-(int)cachedCircleStatus:(id*)arg1;
-(void)reportSuccess;
-(id)requestToResetProtectedData:(id*)arg1;
-(BOOL)isLastBackupMakingPeer:(id*)arg1;
-(BOOL)registerCredentials;
-(unsigned long long)cachedCliqueStatus:(id*)arg1;
-(BOOL)removeThisDeviceFromCircle:(id*)arg1;
-(BOOL)hasNonViewAwarePeers;
-(BOOL)requestToResetCircle:(id*)arg1;

@end

