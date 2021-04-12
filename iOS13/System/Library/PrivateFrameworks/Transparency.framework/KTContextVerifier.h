/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class KTApplicationPublicKeyStore, TransparencyManagedDataStore, NSString, KTLogClient;

@interface KTContextVerifier : NSObject {

	KTApplicationPublicKeyStore* _applicationKeyStore;
	TransparencyManagedDataStore* _dataStore;
	NSString* _applicationID;
	KTLogClient* _logClient;

}

@property (retain) KTApplicationPublicKeyStore * applicationKeyStore;              //@synthesize applicationKeyStore=_applicationKeyStore - In the implementation block
@property (retain) TransparencyManagedDataStore * dataStore;                       //@synthesize dataStore=_dataStore - In the implementation block
@property (retain) NSString * applicationID;                                       //@synthesize applicationID=_applicationID - In the implementation block
@property (retain) KTLogClient * logClient;                                        //@synthesize logClient=_logClient - In the implementation block
+(BOOL)verifyServerLoggableDatas:(id)arg1 againstSyncedLoggableDatas:(id)arg2 error:(id*)arg3 ;
+(void)addDeviceIdVRFOutput:(id)arg1 toLoggableDatas:(id)arg2 forDeviceId:(id)arg3 ;
+(void)addClientDataVRFOutput:(id)arg1 toLoggableDatas:(id)arg2 forClientData:(id)arg3 ;
+(long long)verifyMutation:(id)arg1 record:(id)arg2 ;
+(BOOL)verifyReceivedWitnessesForLoggableDatas:(id)arg1 error:(id*)arg2 ;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(NSString *)applicationID;
-(void)setApplicationID:(NSString *)arg1 ;
-(void)setApplicationKeyStore:(KTApplicationPublicKeyStore *)arg1 ;
-(void)setLogClient:(KTLogClient *)arg1 ;
-(id)initWithApplicationKeyStore:(id)arg1 dataStore:(id)arg2 applicationID:(id)arg3 ;
-(BOOL)verifyDeviceWitnesses:(id)arg1 requestDevices:(id)arg2 loggableDatas:(id)arg3 uriVRFOutput:(id)arg4 error:(id*)arg5 ;
-(BOOL)verifyUriWitness:(id)arg1 uri:(id)arg2 error:(id*)arg3 ;
-(BOOL)verifyResponseAccountId:(id)arg1 requestAccountId:(id)arg2 error:(id*)arg3 ;
-(BOOL)verifyInclusionProof:(id)arg1 mapLeaf:(id*)arg2 error:(id*)arg3 ;
-(void)verifyKTSMTsMerged:(id)arg1 queryResponse:(id)arg2 uri:(id)arg3 accountId:(id)arg4 ;
-(BOOL)verifySMTs:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(BOOL)verifyDeviceWitness:(id)arg1 deviceId:(id)arg2 uriVRFOutput:(id)arg3 error:(id*)arg4 ;
-(BOOL)verifyClientDataWitness:(id)arg1 clientData:(id)arg2 uriVRFOutput:(id)arg3 error:(id*)arg4 ;
-(KTApplicationPublicKeyStore *)applicationKeyStore;
-(KTLogClient *)logClient;
-(BOOL)areSMTsOverMMD:(id)arg1 ;
-(void)failSMTsIfOverMMD:(id)arg1 proof:(id)arg2 underlyingError:(id)arg3 errorCode:(long long)arg4 ;
-(void)verifyKTSMTs:(id)arg1 ;
-(BOOL)verifyConsistencyProofResponse:(id)arg1 startRevision:(long long)arg2 error:(id*)arg3 ;
-(void)verifySTHs:(id)arg1 ;
-(void)reportVerifySMTFailure:(id)arg1 error:(id)arg2 ;
-(void)deleteSMT:(id)arg1 error:(id)arg2 ;
-(BOOL)verifyClientDataWitnesses:(id)arg1 clientDatas:(id)arg2 loggableDatas:(id)arg3 uriVRFOutput:(id)arg4 error:(id*)arg5 ;
@end

