/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BridgeReporting.framework/BridgeReporting
*/

#import <libobjc.A.dylib/BRRTCMetric.h>

@class NSString, BRRTCMigrationMetricDeviceDetails, NSMutableDictionary, NSNumber;

@interface BRRTCMigrationMetric : NSObject <BRRTCMetric> {

	BOOL _migrationSucceeded;
	BOOL _isAutomation;
	BOOL _migrationFailedBTKeysNotSynced;
	BOOL _migrationDeviceUnpairedBecauseKeychainIsOff;
	BOOL _migrationDeviceUnpairedBecauseStale;
	unsigned short _rtcType;
	NSString* _migrationBeganTime;
	NSString* _sessionID;
	BRRTCMigrationMetricDeviceDetails* _deviceDetails;
	NSMutableDictionary* _transactionPhases;
	NSNumber* _migrationFailureCode;
	NSString* _migrationFailureDescription;
	NSString* _migrationFailureDomain;
	NSString* _suspectTransaction;

}

@property (nonatomic,retain) NSString * migrationBeganTime;                                  //@synthesize migrationBeganTime=_migrationBeganTime - In the implementation block
@property (assign,nonatomic) BOOL migrationSucceeded;                                        //@synthesize migrationSucceeded=_migrationSucceeded - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                                           //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) BRRTCMigrationMetricDeviceDetails * deviceDetails;              //@synthesize deviceDetails=_deviceDetails - In the implementation block
@property (assign,nonatomic) BOOL isAutomation;                                              //@synthesize isAutomation=_isAutomation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transactionPhases;                        //@synthesize transactionPhases=_transactionPhases - In the implementation block
@property (nonatomic,retain) NSNumber * migrationFailureCode;                                //@synthesize migrationFailureCode=_migrationFailureCode - In the implementation block
@property (nonatomic,retain) NSString * migrationFailureDescription;                         //@synthesize migrationFailureDescription=_migrationFailureDescription - In the implementation block
@property (nonatomic,retain) NSString * migrationFailureDomain;                              //@synthesize migrationFailureDomain=_migrationFailureDomain - In the implementation block
@property (assign,nonatomic) BOOL migrationFailedBTKeysNotSynced;                            //@synthesize migrationFailedBTKeysNotSynced=_migrationFailedBTKeysNotSynced - In the implementation block
@property (assign,nonatomic) BOOL migrationDeviceUnpairedBecauseKeychainIsOff;               //@synthesize migrationDeviceUnpairedBecauseKeychainIsOff=_migrationDeviceUnpairedBecauseKeychainIsOff - In the implementation block
@property (assign,nonatomic) BOOL migrationDeviceUnpairedBecauseStale;                       //@synthesize migrationDeviceUnpairedBecauseStale=_migrationDeviceUnpairedBecauseStale - In the implementation block
@property (nonatomic,retain) NSString * suspectTransaction;                                  //@synthesize suspectTransaction=_suspectTransaction - In the implementation block
@property (assign,nonatomic) unsigned short rtcType;                                         //@synthesize rtcType=_rtcType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(id)init;
-(unsigned short)rtcType;
-(void)setRtcType:(unsigned short)arg1 ;
-(NSMutableDictionary *)transactionPhases;
-(void)setDeviceDetails:(BRRTCMigrationMetricDeviceDetails *)arg1 ;
-(void)setIsAutomation:(BOOL)arg1 ;
-(void)setMigrationFailureCode:(NSNumber *)arg1 ;
-(void)setMigrationFailureDomain:(NSString *)arg1 ;
-(void)setMigrationFailureDescription:(NSString *)arg1 ;
-(void)setMigrationFailedBTKeysNotSynced:(BOOL)arg1 ;
-(void)setMigrationDeviceUnpairedBecauseKeychainIsOff:(BOOL)arg1 ;
-(void)setMigrationDeviceUnpairedBecauseStale:(BOOL)arg1 ;
-(void)setMigrationSucceeded:(BOOL)arg1 ;
-(void)setMigrationBeganTime:(NSString *)arg1 ;
-(void)setSuspectTransaction:(NSString *)arg1 ;
-(BRRTCMigrationMetricDeviceDetails *)deviceDetails;
-(NSString *)migrationBeganTime;
-(BOOL)migrationSucceeded;
-(BOOL)isAutomation;
-(void)setTransactionPhases:(NSMutableDictionary *)arg1 ;
-(NSNumber *)migrationFailureCode;
-(NSString *)migrationFailureDescription;
-(NSString *)migrationFailureDomain;
-(BOOL)migrationFailedBTKeysNotSynced;
-(BOOL)migrationDeviceUnpairedBecauseKeychainIsOff;
-(BOOL)migrationDeviceUnpairedBecauseStale;
-(NSString *)suspectTransaction;
@end

