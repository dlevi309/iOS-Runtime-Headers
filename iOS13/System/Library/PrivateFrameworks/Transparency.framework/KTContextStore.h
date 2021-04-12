/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class NSMutableDictionary, TransparencyManagedDataStore, KTPublicKeyStore;

@interface KTContextStore : NSObject {

	NSMutableDictionary* _contexts;
	TransparencyManagedDataStore* _dataStore;
	KTPublicKeyStore* _keyStore;

}

@property (retain) KTPublicKeyStore * keyStore;                           //@synthesize keyStore=_keyStore - In the implementation block
@property (retain) TransparencyManagedDataStore * dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
@property (retain) NSMutableDictionary * contexts;                        //@synthesize contexts=_contexts - In the implementation block
-(NSMutableDictionary *)contexts;
-(void)setContexts:(NSMutableDictionary *)arg1 ;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(KTPublicKeyStore *)keyStore;
-(void)setKeyStore:(KTPublicKeyStore *)arg1 ;
-(void)forcedConfigure:(BOOL)arg1 logClient:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)storeContext:(id)arg1 application:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)createContextForApplication:(id)arg1 dataStore:(id)arg2 logClient:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)createContextForTLT:(id)arg1 logClient:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)configureWithClient:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)contextForApplication:(id)arg1 logClient:(id)arg2 fetchState:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)configureWithClient:(id)arg1 force:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)logSharedMetrics;
-(void)runDutyCycleProcessingStepForActivity:(id)arg1 context:(id)arg2 logClient:(id)arg3 ;
-(void)verifyTLTConsistencyAndGarbageCollectSTHs:(id)arg1 ;
-(void)runDutyCycleConfigurationStepForActivity:(id)arg1 logClient:(id)arg2 ;
-(id)initWithDataStore:(id)arg1 keyStore:(id)arg2 ;
-(void)validatePeer:(id)arg1 application:(id)arg2 logClient:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)validateSelf:(id)arg1 application:(id)arg2 logClient:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)validateEnrollment:(id)arg1 application:(id)arg2 logClient:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)updateRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 error:(id*)arg6 ;
-(void)clearApplicationState:(id)arg1 logClient:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)runDutyCycleForActivity:(id)arg1 logClient:(id)arg2 ;
-(id)serializeTranscripts;
@end

