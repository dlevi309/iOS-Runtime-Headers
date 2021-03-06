/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BridgeReporting.framework/BridgeReporting
*/


@class NSUUID, BRRTCMigrationMetric;

@interface BRRTCMigrationReportManager : NSObject {

	BOOL _migrationBegan;
	BOOL _metricSubmitted;
	NSUUID* _pairingID;
	BRRTCMigrationMetric* _migrationMetric;

}

@property (nonatomic,retain) BRRTCMigrationMetric * migrationMetric;              //@synthesize migrationMetric=_migrationMetric - In the implementation block
@property (nonatomic,readonly) NSUUID * pairingID;                                //@synthesize pairingID=_pairingID - In the implementation block
@property (assign,nonatomic) BOOL migrationBegan;                                 //@synthesize migrationBegan=_migrationBegan - In the implementation block
@property (assign,nonatomic) BOOL metricSubmitted;                                //@synthesize metricSubmitted=_metricSubmitted - In the implementation block
-(NSUUID *)pairingID;
-(void)setSessionID:(id)arg1 ;
-(BRRTCMigrationMetric *)migrationMetric;
-(void)setIsAutomation:(BOOL)arg1 ;
-(void)setMigrationFailedBTKeysNotSynced:(BOOL)arg1 ;
-(void)setMigrationDeviceUnpairedBecauseKeychainIsOff:(BOOL)arg1 ;
-(void)setMigrationDeviceUnpairedBecauseStale:(BOOL)arg1 ;
-(void)setMigrationSucceeded:(BOOL)arg1 ;
-(id)_likelyOffendingTransaction;
-(void)setMetricSubmitted:(BOOL)arg1 ;
-(void)setMigrationMetric:(BRRTCMigrationMetric *)arg1 ;
-(id)_transactionNameFromKey:(id)arg1 ;
-(id)initWithPairingID:(id)arg1 ;
-(void)addTransactionPhase:(id)arg1 withSuccess:(BOOL)arg2 withPairingID:(id)arg3 ;
-(void)addDeviceDetails:(id)arg1 ;
-(void)setErrorCode:(id)arg1 domain:(id)arg2 description:(id)arg3 ;
-(void)setMigrationBegan:(BOOL)arg1 ;
-(id)retrieveMigrationMetric;
-(void)submitMetic;
-(BOOL)migrationBegan;
-(BOOL)metricSubmitted;
@end

