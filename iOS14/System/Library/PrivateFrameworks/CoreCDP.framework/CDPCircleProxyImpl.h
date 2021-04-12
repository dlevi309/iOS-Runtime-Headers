/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/

#import <libobjc.A.dylib/CDPDCircleProxy.h>

@class CDPContext, OTClique, NSString;

@interface CDPCircleProxyImpl : NSObject <CDPDCircleProxy> {

	OTClique* _clique;
	CDPContext* _cdpContext;

}

@property (nonatomic,readonly) CDPContext * cdpContext;              //@synthesize cdpContext=_cdpContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contextType;
-(id)peerDeviceNamesByPeerID;
-(id)pairingChannelInitiator:(id*)arg1 ;
-(void)reportFailure:(id)arg1 ;
-(void)waitForUpdate;
-(CDPContext *)cdpContext;
-(id)initWithContext:(id)arg1 ;
-(BOOL)tryRegisteringCredentials;
-(BOOL)setViewsWithEnableSet:(id)arg1 disableSet:(id)arg2 ;
-(BOOL)canAuthenticate;
-(unsigned long long)cdpStatusFromSOS:(int)arg1 ;
-(id)generateVerifierWithRecoveryKey:(id)arg1 error:(id*)arg2 ;
-(id)peerId;
-(int)sos_circleStatus:(id*)arg1 ;
-(void)didJoinCircleAfterRecovery:(id)arg1 ;
-(int)_sos_authenticatedCircleStatus:(id*)arg1 ;
-(BOOL)removeNonViewAwarePeers:(id*)arg1 ;
-(BOOL)anyPeerHasEnabledViewsInSet:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)circleStatus:(id*)arg1 ;
-(BOOL)viewMemberForAutofillPasswords:(id*)arg1 ;
-(BOOL)_registerCredentialsOnlyIfNeeded:(BOOL)arg1 ;
-(BOOL)requestToJoinCircleAfterRestore:(id*)arg1 ;
-(id)_pairingChannelContext;
-(id)pairingChannelAcceptor:(id*)arg1 ;
-(unsigned long long)cdpStatusFromOT:(long long)arg1 ;
-(BOOL)requestToResetCloudKitDataForReason:(id)arg1 error:(id*)arg2 ;
-(BOOL)requestToJoinCircle:(id*)arg1 ;
-(long long)_authenticatedCircleStatus:(id*)arg1 ;
-(id)generateRecoveryKeyWithInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)synchronizeCircleViews;
-(BOOL)registerCredentialsIfMissing;
-(int)_sos_circleStatus:(id*)arg1 ;
-(BOOL)waitForInitialSync:(id*)arg1 ;
-(int)cachedCircleStatus:(id*)arg1 ;
-(void)reportSuccess;
-(id)requestToResetProtectedData:(id*)arg1 ;
-(long long)_circleStatus:(id*)arg1 ;
-(BOOL)isLastBackupMakingPeer:(id*)arg1 ;
-(BOOL)registerCredentials;
-(unsigned long long)cachedCliqueStatus:(id*)arg1 ;
-(BOOL)removeThisDeviceFromCircle:(id*)arg1 ;
-(BOOL)hasNonViewAwarePeers;
-(BOOL)requestToResetCircle:(id*)arg1 ;
@end

