/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/


@protocol CoreDAVAccountInfoProvider <NSObject>
@optional
-(id)clientToken;
-(BOOL)shouldSendClientInfoHeaderForURL:(id)arg1;
-(void)noteFailedNetworkRequest;
-(void)noteFailedProtocolRequest;
-(void)noteTimeSpentInNetworking:(double)arg1;
-(id)clientCertificateInfoProvider;
-(BOOL)handleTrustChallenge:(id)arg1 withConnection:(id)arg2;
-(BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1;
-(BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2;
-(BOOL)shouldRetryUnauthorizedConnection:(id)arg1;
-(BOOL)handleShouldUseCredentialStorage;
-(BOOL)renewCredential;
-(CFURLStorageSessionRef)copyStorageSession;
-(void)clientTokenRequestedByServer;
-(id)additionalHeaderValues;
-(id)customConnectionProperties;
-(id)oauthInfoProvider;
-(BOOL)shouldUseOpportunisticSockets;
-(BOOL)handleTrustChallenge:(id)arg1;
-(void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 inQueue:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(BOOL)shouldHandleHTTPCookiesForURL:(id)arg1;
-(BOOL)shouldTurnModalOnBadPassword;
-(BOOL)shouldTryRenewingCredential;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1 forTask:(id)arg2;
-(void)noteFailedNetworkRequestForTask:(id)arg1;
-(void)noteFailedProtocolRequestForTask:(id)arg1;
-(void)noteTimeSpentInNetworking:(double)arg1 forTask:(id)arg2;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
-(BOOL)shouldCompressRequests;
-(void)noteHomeSetOnDifferentHost:(id)arg1;
-(id)getAppleIDSession;

@required
-(id)accountID;
-(long long)port;
-(id)scheme;
-(id)host;
-(id)userAgentHeader;
-(id)identityPersist;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1;
-(id)serverRoot;
-(id)serverComplianceClasses;
-(BOOL)handleCertificateError:(id)arg1;
-(id)principalURL;
-(id)password;
-(BOOL)shouldFailAllTasks;
-(id)user;

@end

