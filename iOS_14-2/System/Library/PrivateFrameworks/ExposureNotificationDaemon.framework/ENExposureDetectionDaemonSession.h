/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, ENExposureDetectionDaemonSessionStatistics, ENExposureCalculationSession, ENAdvertisementDatabaseQuerySession, ENXPCClient, ENExposureConfiguration, ENExposureDatabase, ENExposureClassification, ENRegionConfiguration, ENRegionServerConfiguration, ENRegionServerExposureConfiguration, NSDate, ENExposureDetectionHistorySession;

@interface ENExposureDetectionDaemonSession : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	unsigned long long _signpostID;
	ENExposureDetectionDaemonSessionStatistics* _statistics;
	BOOL _finished;
	BOOL _prepared;
	BOOL _shouldCopyStatistics;
	BOOL _useCache;
	BOOL _skipFileSigningVerification;
	ENExposureCalculationSession* _exposureCalculationSession;
	ENAdvertisementDatabaseQuerySession* _advertisementDatabaseQuerySession;
	ENXPCClient* _client;
	ENExposureConfiguration* _clientExposureConfiguration;
	ENExposureDatabase* _exposureDatabase;
	ENExposureClassification* _previousExposureClassification;
	ENRegionConfiguration* _regionConfiguration;
	ENRegionServerConfiguration* _regionServerConfiguration;
	ENRegionServerExposureConfiguration* _serverExposureConfiguration;
	NSDate* _sessionDate;
	ENExposureDetectionHistorySession* _historySession;
	ENExposureConfiguration* _sessionExposureConfiguration;
	unsigned long long _tekMatchBatchSize;

}

@property (nonatomic,retain) ENAdvertisementDatabaseQuerySession * advertisementDatabaseQuerySession;              //@synthesize advertisementDatabaseQuerySession=_advertisementDatabaseQuerySession - In the implementation block
@property (nonatomic,retain) ENXPCClient * client;                                                                 //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) ENExposureConfiguration * clientExposureConfiguration;                                //@synthesize clientExposureConfiguration=_clientExposureConfiguration - In the implementation block
@property (nonatomic,retain) ENExposureDatabase * exposureDatabase;                                                //@synthesize exposureDatabase=_exposureDatabase - In the implementation block
@property (nonatomic,retain) ENExposureClassification * previousExposureClassification;                            //@synthesize previousExposureClassification=_previousExposureClassification - In the implementation block
@property (nonatomic,copy) ENRegionConfiguration * regionConfiguration;                                            //@synthesize regionConfiguration=_regionConfiguration - In the implementation block
@property (nonatomic,copy) ENRegionServerConfiguration * regionServerConfiguration;                                //@synthesize regionServerConfiguration=_regionServerConfiguration - In the implementation block
@property (nonatomic,copy) ENRegionServerExposureConfiguration * serverExposureConfiguration;                      //@synthesize serverExposureConfiguration=_serverExposureConfiguration - In the implementation block
@property (nonatomic,copy) NSDate * sessionDate;                                                                   //@synthesize sessionDate=_sessionDate - In the implementation block
@property (nonatomic,readonly) ENExposureDetectionHistorySession * historySession;                                 //@synthesize historySession=_historySession - In the implementation block
@property (nonatomic,copy,readonly) ENExposureConfiguration * sessionExposureConfiguration;                        //@synthesize sessionExposureConfiguration=_sessionExposureConfiguration - In the implementation block
@property (assign,nonatomic) unsigned long long tekMatchBatchSize;                                                 //@synthesize tekMatchBatchSize=_tekMatchBatchSize - In the implementation block
@property (nonatomic,copy,readonly) ENExposureDetectionDaemonSessionStatistics * statistics; 
@property (assign,nonatomic) BOOL skipFileSigningVerification;                                                     //@synthesize skipFileSigningVerification=_skipFileSigningVerification - In the implementation block
@property (nonatomic,readonly) ENExposureCalculationSession * exposureCalculationSession;                          //@synthesize exposureCalculationSession=_exposureCalculationSession - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(ENXPCClient *)client;
-(void)setClient:(ENXPCClient *)arg1 ;
-(ENExposureDetectionDaemonSessionStatistics *)statistics;
-(id)description;
-(void)invalidate;
-(id)finishAndReturnError:(id*)arg1 ;
-(void)dealloc;
-(void)_signpostEnd;
-(void)_signpostBegin;
-(BOOL)prepareConfiguration:(id)arg1 bundleIdentifier:(id)arg2 nowDate:(id)arg3 expiryInterval:(double)arg4 error:(id*)arg5 ;
-(BOOL)_checkPreparedAndReturnError:(id*)arg1 ;
-(BOOL)_verifySignatureForFileSession:(id)arg1 publicKey:(id)arg2 error:(id*)arg3 ;
-(void)_updateStatisticsWithHandler:(/*^block*/id)arg1 ;
-(id)_prepareExposureCalculationSessionWithError:(id*)arg1 ;
-(void)_addFileToHistoryWithHash:(id)arg1 metadata:(id)arg2 endpoint:(id)arg3 keyCount:(unsigned long long)arg4 matchCount:(unsigned long long)arg5 ;
-(BOOL)_shouldMatchPersistenKey:(id)arg1 ;
-(id)getSummaryAndReturnError:(id*)arg1 ;
-(id)getBeaconCountMetricsAndReturnError:(id*)arg1 ;
-(BOOL)classifyExposureWithResult:(id)arg1 error:(id*)arg2 ;
-(BOOL)_checkFinishedAndReturnError:(id*)arg1 ;
-(id)getAnalysisSessionAndReturnError:(id*)arg1 ;
-(BOOL)prepareAndReturnError:(id*)arg1 ;
-(BOOL)addMatchesFromFileSession:(id)arg1 publicKey:(id)arg2 endpoint:(id)arg3 error:(id*)arg4 ;
-(BOOL)skipFileSigningVerification;
-(void)setSkipFileSigningVerification:(BOOL)arg1 ;
-(ENExposureCalculationSession *)exposureCalculationSession;
-(ENAdvertisementDatabaseQuerySession *)advertisementDatabaseQuerySession;
-(void)setAdvertisementDatabaseQuerySession:(ENAdvertisementDatabaseQuerySession *)arg1 ;
-(ENExposureConfiguration *)clientExposureConfiguration;
-(void)setClientExposureConfiguration:(ENExposureConfiguration *)arg1 ;
-(ENExposureDatabase *)exposureDatabase;
-(void)setExposureDatabase:(ENExposureDatabase *)arg1 ;
-(ENExposureClassification *)previousExposureClassification;
-(void)setPreviousExposureClassification:(ENExposureClassification *)arg1 ;
-(ENRegionConfiguration *)regionConfiguration;
-(void)setRegionConfiguration:(ENRegionConfiguration *)arg1 ;
-(ENRegionServerConfiguration *)regionServerConfiguration;
-(void)setRegionServerConfiguration:(ENRegionServerConfiguration *)arg1 ;
-(ENRegionServerExposureConfiguration *)serverExposureConfiguration;
-(void)setServerExposureConfiguration:(ENRegionServerExposureConfiguration *)arg1 ;
-(NSDate *)sessionDate;
-(void)setSessionDate:(NSDate *)arg1 ;
-(ENExposureDetectionHistorySession *)historySession;
-(ENExposureConfiguration *)sessionExposureConfiguration;
-(unsigned long long)tekMatchBatchSize;
-(void)setTekMatchBatchSize:(unsigned long long)arg1 ;
@end

