/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class ENUserAlert, ENXPCClient, ENDaemon, ENExposureDetectionDaemonSession, NSObject, ENManager;

@interface ENXPCConnection : NSObject {

	ENUserAlert* _userAlert;
	BOOL _skipFileSigningVerification;
	ENXPCClient* _client;
	ENDaemon* _daemon;
	ENExposureDetectionDaemonSession* _detectionSession;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	ENManager* _manager;
	NSObject*<OS_xpc_object> _xpcCnx;

}

@property (nonatomic,retain) ENXPCClient * client;                                             //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) ENDaemon * daemon;                                                //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,retain) ENExposureDetectionDaemonSession * detectionSession;              //@synthesize detectionSession=_detectionSession - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                       //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) ENManager * manager;                                              //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) BOOL skipFileSigningVerification;                                 //@synthesize skipFileSigningVerification=_skipFileSigningVerification - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcCnx;                                  //@synthesize xpcCnx=_xpcCnx - In the implementation block
-(void)setDaemon:(ENDaemon *)arg1 ;
-(ENDaemon *)daemon;
-(ENXPCClient *)client;
-(void)setClient:(ENXPCClient *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcCnx;
-(void)setManager:(ENManager *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(id)descriptionWithLevel:(int)arg1 ;
-(id)description;
-(ENManager *)manager;
-(void)invalidate;
-(void)setXpcCnx:(NSObject*<OS_xpc_object>)arg1 ;
-(void)xpcConnectionEvent:(id)arg1 ;
-(BOOL)skipFileSigningVerification;
-(void)setSkipFileSigningVerification:(BOOL)arg1 ;
-(void)xpcPreAuthorizedDiagnosisKeysAvailable;
-(void)xpcStatusChanged;
-(void)_xpcConnectionRequest:(id)arg1 ;
-(void)_xpcManagerActivate:(id)arg1 ;
-(void)_xpcSetEnabled:(id)arg1 ;
-(void)_xpcEntitlementCheck:(id)arg1 ;
-(void)_xpcSetPaused:(id)arg1 ;
-(void)_xpcGetPreAuthorizeDiagnosisKeysEnabled:(id)arg1 ;
-(void)_xpcSetPreAuthorizeDiagnosisKeysEnabled:(id)arg1 ;
-(void)_xpcGetUserTraveled:(id)arg1 ;
-(void)_xpcPreAuthorizeDiagnosisKeys:(id)arg1 ;
-(void)_xpcRequestPreAuthorizedDiagnosisKeys:(id)arg1 ;
-(void)_xpcGetTravelStatusEnabled:(id)arg1 ;
-(void)_xpcSetTravelStatusEnabled:(id)arg1 ;
-(void)_xpcGetDiagnosisKeys:(id)arg1 testMode:(BOOL)arg2 ;
-(void)_xpcResetData:(id)arg1 ;
-(void)_xpcDiagnosticControl:(id)arg1 ;
-(void)_xpcDiagnosticLog:(id)arg1 ;
-(void)_xpcDiagnosticShow:(id)arg1 ;
-(void)_xpcNotificationTrigger:(id)arg1 ;
-(void)_xpcGetActiveRegion:(id)arg1 ;
-(void)_xpcGetRegionHistory:(id)arg1 ;
-(void)_xpcGetCurrentAgencyConfig:(id)arg1 ;
-(void)_xpcGetRegionConfig:(id)arg1 ;
-(void)_xpcGetAllRegionConfig:(id)arg1 ;
-(void)_xpcGetSubdivisionList:(id)arg1 ;
-(void)_xpcSetDeveloperRegionServerConfig:(id)arg1 ;
-(void)_xpcSetRegionConsent:(id)arg1 ;
-(void)_xpcGetRegionHistoryEnabled:(id)arg1 ;
-(void)_xpcSetRegionHistoryEnabled:(id)arg1 ;
-(void)_xpcGetRegionMonitorEnabled:(id)arg1 ;
-(void)_xpcTCCCheck:(id)arg1 ;
-(void)_xpcExposureDetectionFileActivate:(id)arg1 ;
-(void)_xpcExposureDetectionFileAdd:(id)arg1 ;
-(void)_xpcExposureDetectionFileFinish:(id)arg1 ;
-(void)_xpcExposureDetectionFileGetExposures:(id)arg1 ;
-(void)_xpcExposureDetectionFileGetExposureWindows:(id)arg1 ;
-(void)_xpcExposureDetectionHistoryGetFiles:(id)arg1 ;
-(void)_xpcExposureDetectionHistoryGetSessions:(id)arg1 ;
-(void)_xpcGetEntities:(id)arg1 ;
-(void)_xpcSetActiveEntity:(id)arg1 ;
-(void)_xpcDownload:(id)arg1 ;
-(void)_xpcGetStatusForBundleIdentifier:(id)arg1 ;
-(void)_xpcGetInfo:(id)arg1 ;
-(void)_xpcGetLastExposureNotification:(id)arg1 ;
-(void)_xpcOnboardingDidStart:(id)arg1 ;
-(void)_xpcSetActiveApp:(id)arg1 ;
-(void)_xpcSetActiveRegion:(id)arg1 ;
-(void)_xpcSetAutomaticRegionSwitch:(id)arg1 ;
-(void)_xpcSignWithDeviceIdentity:(id)arg1 ;
-(void)_xpcGetRemotePresentationRequestIfNeeded:(id)arg1 ;
-(void)_xpcRemotePresentationReceivedDecision:(id)arg1 ;
-(void)_xpcGetDataVaultSize:(id)arg1 ;
-(void)_xpcSetAvailabilityAlertEnabled:(id)arg1 ;
-(void)_xpcStartTestVerificationSession:(id)arg1 ;
-(void)_xpcFetchTestVerificationMetadata:(id)arg1 ;
-(void)_xpcFinishTestVerificationSession:(id)arg1 ;
-(void)_xpcSetMonthlySummaryAlertEnabled:(id)arg1 ;
-(void)_xpcShowBuddy:(id)arg1 ;
-(void)_xpcSendReplyError:(id)arg1 request:(id)arg2 ;
-(void)_xpcSendReplyError:(id)arg1 reply:(id)arg2 ;
-(BOOL)_entitledForAccessLevel:(int)arg1 error:(id*)arg2 ;
-(void)_xpcSendMessage:(id)arg1 ;
-(BOOL)_authorizedAndReturnError:(id*)arg1 ;
-(id)_regionConfigForXPCRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_appActiveStatusWithError:(id*)arg1 ;
-(void)_xpcGetUserTraveledReplyAllowed:(BOOL)arg1 request:(id)arg2 ;
-(void)_xpcGetUserTraveledPromptWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_xpcManagerActivateIfNecessaryWithRequest:(id)arg1 error:(id*)arg2 ;
-(void)_xpcMessageAddCommonKeys:(id)arg1 allowed:(BOOL)arg2 ;
-(void)_xpcReportActivityFlags:(unsigned)arg1 ;
-(void)_xpcGetDiagnosisKeysCompletion:(id)arg1 didPrompt:(BOOL)arg2 testMode:(BOOL)arg3 error:(id)arg4 ;
-(void)_xpcGetRegionSystemConfig:(id)arg1 ;
-(void)_xpcGetRegionServerConfig:(id)arg1 ;
-(void)_xpcGetRegionAgencyConfig:(id)arg1 ;
-(void)_xpcGetAllRegionGeneralConfig:(id)arg1 ;
-(void)_xpcGetAllRegionServerConfig:(id)arg1 ;
-(void)_xpcGetAllRegionAgencyConfig:(id)arg1 ;
-(void)_processServerResponseConfigurationsForRegion:(id)arg1 serverResponses:(id)arg2 request:(id)arg3 ;
-(BOOL)_authorizationPreflightUnknownAndReturnError:(id*)arg1 ;
-(void)_updateActiveEntityFromTCCResult:(BOOL)arg1 ;
-(BOOL)_rateLimitAndReturnError:(id*)arg1 ;
-(void)_xpcExposureDetectionFileAddNext:(id)arg1 fileSession:(id)arg2 publicKey:(id)arg3 ;
-(void)_fetchClientPublicKeyWithVerificationID:(id)arg1 keyVersion:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_xpcPreAuthorizeDiagnosisKeysComplete:(id)arg1 error:(id)arg2 ;
-(ENExposureDetectionDaemonSession *)detectionSession;
-(void)setDetectionSession:(ENExposureDetectionDaemonSession *)arg1 ;
@end

