/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class NSString, TransparencyTranscript, KTApplicationPublicKeyStore, TransparencyManagedDataStore, KTLogClient, KTContextVerifier;

@interface KTContext : NSObject {

	NSString* _applicationID;
	TransparencyTranscript* _transcript;
	KTApplicationPublicKeyStore* _applicationKeyStore;
	TransparencyManagedDataStore* _dataStore;
	KTLogClient* _logClient;
	KTContextVerifier* _verifier;

}

@property (retain) NSString * applicationID;                                       //@synthesize applicationID=_applicationID - In the implementation block
@property (retain) KTApplicationPublicKeyStore * applicationKeyStore;              //@synthesize applicationKeyStore=_applicationKeyStore - In the implementation block
@property (retain) TransparencyManagedDataStore * dataStore;                       //@synthesize dataStore=_dataStore - In the implementation block
@property (retain) KTLogClient * logClient;                                        //@synthesize logClient=_logClient - In the implementation block
@property (retain) KTContextVerifier * verifier;                                   //@synthesize verifier=_verifier - In the implementation block
@property (retain) TransparencyTranscript * transcript;                            //@synthesize transcript=_transcript - In the implementation block
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(NSString *)applicationID;
-(void)setApplicationID:(NSString *)arg1 ;
-(KTContextVerifier *)verifier;
-(void)setVerifier:(KTContextVerifier *)arg1 ;
-(void)setTranscript:(TransparencyTranscript *)arg1 ;
-(TransparencyTranscript *)transcript;
-(id)initWithApplicationKeyStore:(id)arg1 dataStore:(id)arg2 logClient:(id)arg3 applicationID:(id)arg4 ;
-(unsigned long long)validatePeerWithAnalytics:(id)arg1 transparentData:(id*)arg2 error:(id*)arg3 ;
-(unsigned long long)validateSelfWithAnalytics:(id)arg1 transparentData:(id*)arg2 error:(id*)arg3 ;
-(unsigned long long)validateEnrollmentWithAnalytics:(id)arg1 transparentData:(id*)arg2 error:(id*)arg3 ;
-(void)handlePendingSTHs:(id*)arg1 ;
-(void)garbageCollectSTHs:(id*)arg1 ;
-(BOOL)runDutyCycleForActivity:(id)arg1 ;
-(void)clearState:(/*^block*/id)arg1 ;
-(void)setApplicationKeyStore:(KTApplicationPublicKeyStore *)arg1 ;
-(void)setLogClient:(KTLogClient *)arg1 ;
-(unsigned long long)writeFailureForRequest:(id)arg1 proof:(id)arg2 error:(id*)arg3 ;
-(BOOL)ready:(id*)arg1 ;
-(unsigned long long)verifyDeviceWitnesses:(id)arg1 request:(id)arg2 loggableDatas:(id)arg3 uriVRFOutput:(id)arg4 error:(id*)arg5 ;
-(unsigned long long)handleVerifyPeerResponse:(id)arg1 request:(id)arg2 transparentData:(id*)arg3 error:(id*)arg4 ;
-(id)analyticsForRequestValidation:(id)arg1 initialResult:(unsigned long long)arg2 result:(unsigned long long)arg3 ;
-(unsigned long long)validatePeer:(id)arg1 queryResponse:(id)arg2 transparentData:(id*)arg3 error:(id*)arg4 ;
-(void)fetchQueryForKTRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)validatePeer:(id)arg1 transparentData:(id*)arg2 error:(id*)arg3 ;
-(unsigned long long)handleVerifySelfResponse:(id)arg1 request:(id)arg2 transparentData:(id*)arg3 error:(id*)arg4 ;
-(unsigned long long)validateSelf:(id)arg1 queryResponse:(id)arg2 transparentData:(id*)arg3 error:(id*)arg4 ;
-(unsigned long long)validateSelf:(id)arg1 transparentData:(id*)arg2 error:(id*)arg3 ;
-(KTApplicationPublicKeyStore *)applicationKeyStore;
-(unsigned long long)validateEnrollment:(id)arg1 queryResponse:(id)arg2 transparentData:(id*)arg3 error:(id*)arg4 ;
-(unsigned long long)handleVerifyInsertResponse:(id)arg1 request:(id)arg2 transparentData:(id*)arg3 error:(id*)arg4 ;
-(unsigned long long)validateEnrollment:(id)arg1 transparentData:(id*)arg2 error:(id*)arg3 ;
-(void)logStartEvent:(id)arg1 ;
-(void)logFinishSuccessEvent:(id)arg1 ;
-(KTLogClient *)logClient;
-(BOOL)checkDeferActivity:(id)arg1 ;
-(unsigned long long)handleKTRequest:(id)arg1 queryResponse:(id)arg2 error:(id*)arg3 ;
-(void)downloadQueryResponse:(id)arg1 uuid:(id)arg2 accountId:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)validateKTSMTsMerged:(id)arg1 request:(id)arg2 ;
-(void)handleSTHsWithUnverifiedSignature:(id*)arg1 ;
-(BOOL)handleConsistencyProofDownloadRecord:(id)arg1 error:(id*)arg2 ;
-(void)downloadConsistencyProof:(id*)arg1 ;
-(void)failExpiredSTHs:(id*)arg1 ;
-(void)handleGarbageCollection:(id)arg1 error:(id*)arg2 ;
-(void)logFinishFailureEvent:(id)arg1 error:(id)arg2 ;
-(void)handleSMTsWithUnverifiedSignature:(id*)arg1 ;
-(void)handleURIsWithPendingSMTs:(id)arg1 error:(id*)arg2 ;
-(void)handlePendingQueryRequests:(id)arg1 error:(id*)arg2 ;
-(id)copyState;
@end

