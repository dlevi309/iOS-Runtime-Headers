/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/

#import <libobjc.A.dylib/CDPDCircleProxy.h>

@class CDPContext, OTClique, NSString;

@interface CDPCircleProxyImpl : NSObject <CDPDCircleProxy> {

	OTClique* _clique;
	CDPContext* _cdpContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CDPContext * cdpContext;              //@synthesize cdpContext=_cdpContext - In the implementation block
-(BOOL)waitForInitialSync:(id*)arg1 ;
-(BOOL)requestToJoinCircle:(id*)arg1 ;
-(id)pairingChannelAcceptor:(id*)arg1 ;
-(id)pairingChannelInitiator:(id*)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id)contextType;
-(unsigned long long)cdpStatusFromOT:(long long)arg1 ;
-(long long)_authenticatedCircleStatus:(id*)arg1 ;
-(int)_sos_circleStatus:(id*)arg1 ;
-(unsigned long long)cdpStatusFromSOS:(int)arg1 ;
-(long long)_circleStatus:(id*)arg1 ;
-(BOOL)registerCredentials;
-(int)_sos_authenticatedCircleStatus:(id*)arg1 ;
-(BOOL)tryRegisteringCredentials;
-(unsigned long long)circleStatus:(id*)arg1 ;
-(BOOL)removeThisDeviceFromCircle:(id*)arg1 ;
-(BOOL)_registerCredentialsOnlyIfNeeded:(BOOL)arg1 ;
-(BOOL)canAuthenticate;
-(id)_pairingChannelContext;
-(unsigned long long)cachedCliqueStatus:(id*)arg1 ;
-(int)cachedCircleStatus:(id*)arg1 ;
-(id)peerId;
-(unsigned long long)peerCount;
-(id)peerDeviceNamesByPeerID;
-(void)didJoinCircleAfterRecovery:(id)arg1 ;
-(id)generateRecoveryKeyWithInfo:(id)arg1 error:(id*)arg2 ;
-(id)generateVerifierWithRecoveryKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)synchronizeCircleViews;
-(BOOL)requestToJoinCircleAfterRestore:(id*)arg1 ;
-(BOOL)requestToResetCircle:(id*)arg1 ;
-(BOOL)requestToResetCloudKitDataForReason:(id)arg1 error:(id*)arg2 ;
-(BOOL)viewMemberForAutofillPasswords:(id*)arg1 ;
-(BOOL)anyPeerHasEnabledViewsInSet:(id)arg1 error:(id*)arg2 ;
-(BOOL)setViewsWithEnableSet:(id)arg1 disableSet:(id)arg2 ;
-(BOOL)hasNonViewAwarePeers;
-(BOOL)removeNonViewAwarePeers:(id*)arg1 ;
-(BOOL)isLastBackupMakingPeer:(id*)arg1 ;
-(BOOL)registerCredentialsIfMissing;
-(void)waitForUpdate;
-(void)reportSuccess;
-(void)reportFailure:(id)arg1 ;
-(CDPContext *)cdpContext;
-(int)sos_circleStatus:(id*)arg1 ;
@end

