/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableDictionary;

@interface DSIDRecord : NSObject <NSCopying> {

	BOOL _dirty;
	int _nextReconcileTimestamp;
	BOOL _accountIsT13;
	BOOL _accountIsU13;
	BOOL _accountIsU18;
	BOOL _accountAgeUnknown;
	BOOL _isActiveRecord;
	BOOL _isRestrictedByEU_GDPR;
	BOOL _isDPIDManatee;
	BOOL _isPlaceholderAccount;
	BOOL _accountLimitAdTrackingEnabled;
	BOOL _lastSentLimitAdTrackingStatus;
	BOOL _notificationRequired;
	int _limitAdTrackingTimestamp;
	int _segmentDataTimestamp;
	int _lastSentSegmentDataTimestamp;
	int _lastSegmentServedTimestamp;
	int _lastSentLimitAdTrackingTimestamp;
	int _lastPOSTLimitAdTrackingTimestamp;
	NSString* _DSID;
	NSString* _iCloudDSID;
	NSString* _segmentData;
	NSString* _IDFA;
	NSString* _iAdIDBeforeReset;
	NSMutableDictionary* _ADIDRecords;
	long long _lastJingleLimitAdTrackingResponse;
	long long _lastJingleAccountStatus;

}

@property (nonatomic,retain) NSString * iCloudDSID; 
@property (assign,nonatomic) BOOL accountIsT13; 
@property (assign,nonatomic) BOOL accountIsU13; 
@property (assign,nonatomic) BOOL accountIsU18; 
@property (assign,nonatomic) BOOL accountAgeUnknown; 
@property (assign,nonatomic) BOOL isDPIDManatee; 
@property (assign,nonatomic) int limitAdTrackingTimestamp; 
@property (nonatomic,retain) NSString * segmentData; 
@property (assign,nonatomic) int segmentDataTimestamp; 
@property (assign,nonatomic) int lastSentSegmentDataTimestamp; 
@property (assign,nonatomic) int lastSegmentServedTimestamp; 
@property (nonatomic,retain) NSString * IDFA; 
@property (nonatomic,retain) NSString * iAdIDBeforeReset; 
@property (nonatomic,retain) NSString * DSID;                                          //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,retain) NSString * iCloudDSID;                                    //@synthesize iCloudDSID=_iCloudDSID - In the implementation block
@property (assign,nonatomic) BOOL accountIsT13;                                        //@synthesize accountIsT13=_accountIsT13 - In the implementation block
@property (assign,nonatomic) BOOL accountIsU13;                                        //@synthesize accountIsU13=_accountIsU13 - In the implementation block
@property (assign,nonatomic) BOOL accountIsU18;                                        //@synthesize accountIsU18=_accountIsU18 - In the implementation block
@property (assign,nonatomic) BOOL accountAgeUnknown;                                   //@synthesize accountAgeUnknown=_accountAgeUnknown - In the implementation block
@property (assign,nonatomic) BOOL isDPIDManatee;                                       //@synthesize isDPIDManatee=_isDPIDManatee - In the implementation block
@property (assign,nonatomic) int limitAdTrackingTimestamp;                             //@synthesize limitAdTrackingTimestamp=_limitAdTrackingTimestamp - In the implementation block
@property (nonatomic,retain) NSString * segmentData;                                   //@synthesize segmentData=_segmentData - In the implementation block
@property (assign,nonatomic) int segmentDataTimestamp;                                 //@synthesize segmentDataTimestamp=_segmentDataTimestamp - In the implementation block
@property (assign,nonatomic) int lastSentSegmentDataTimestamp;                         //@synthesize lastSentSegmentDataTimestamp=_lastSentSegmentDataTimestamp - In the implementation block
@property (assign,nonatomic) int lastSegmentServedTimestamp;                           //@synthesize lastSegmentServedTimestamp=_lastSegmentServedTimestamp - In the implementation block
@property (nonatomic,retain) NSString * IDFA;                                          //@synthesize IDFA=_IDFA - In the implementation block
@property (nonatomic,retain) NSString * iAdIDBeforeReset;                              //@synthesize iAdIDBeforeReset=_iAdIDBeforeReset - In the implementation block
@property (assign,nonatomic) BOOL isPlaceholderAccount;                                //@synthesize isPlaceholderAccount=_isPlaceholderAccount - In the implementation block
@property (retain) NSMutableDictionary * ADIDRecords;                                  //@synthesize ADIDRecords=_ADIDRecords - In the implementation block
@property (assign,nonatomic) BOOL accountLimitAdTrackingEnabled;                       //@synthesize accountLimitAdTrackingEnabled=_accountLimitAdTrackingEnabled - In the implementation block
@property (assign,nonatomic) long long lastJingleLimitAdTrackingResponse;              //@synthesize lastJingleLimitAdTrackingResponse=_lastJingleLimitAdTrackingResponse - In the implementation block
@property (assign,nonatomic) long long lastJingleAccountStatus;                        //@synthesize lastJingleAccountStatus=_lastJingleAccountStatus - In the implementation block
@property (assign,nonatomic) BOOL lastSentLimitAdTrackingStatus;                       //@synthesize lastSentLimitAdTrackingStatus=_lastSentLimitAdTrackingStatus - In the implementation block
@property (assign,nonatomic) int lastSentLimitAdTrackingTimestamp;                     //@synthesize lastSentLimitAdTrackingTimestamp=_lastSentLimitAdTrackingTimestamp - In the implementation block
@property (assign,nonatomic) int lastPOSTLimitAdTrackingTimestamp;                     //@synthesize lastPOSTLimitAdTrackingTimestamp=_lastPOSTLimitAdTrackingTimestamp - In the implementation block
@property (assign,nonatomic) int nextReconcileTimestamp; 
@property (assign,nonatomic) BOOL dirty; 
@property (assign,nonatomic) BOOL notificationRequired;                                //@synthesize notificationRequired=_notificationRequired - In the implementation block
@property (nonatomic,readonly) BOOL isActiveRecord;                                    //@synthesize isActiveRecord=_isActiveRecord - In the implementation block
@property (nonatomic,readonly) BOOL limitAdTrackingEnabled; 
@property (nonatomic,readonly) BOOL isRestrictedByApple; 
@property (nonatomic,readonly) BOOL isRestrictedByEU_GDPR;                             //@synthesize isRestrictedByEU_GDPR=_isRestrictedByEU_GDPR - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(void)removeIDForClientType:(long long)arg1 ;
-(BOOL)hasIDForClientType:(long long)arg1 ;
-(void)resetiAdIDs;
-(void)reconcileIDFAandLATSkippingEnabledCheck:(BOOL)arg1 ;
-(void)updateDeviceLATStatusWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendLATStatusToAdPlatforms:(/*^block*/id)arg1 ;
-(void)sendSegmentDataToAdPlatforms:(/*^block*/id)arg1 ;
-(void)reconcileIDFAandLAT;
-(void)sendSegmentsAndLATToAdPlatformsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resetiAdIDsAndDPID:(/*^block*/id)arg1 ;
-(void)ensureiAdIDs;
-(BOOL)isActiveRecord;
-(void)retrieveSegmentDataFromiTunes:(/*^block*/id)arg1 ;
-(void)setLimitAdTrackingStatus:(BOOL)arg1 timestamp:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleIDFAReset:(/*^block*/id)arg1 ;
-(BOOL)LATStatusChangeInProgress;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDirty:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDSID:(NSString *)arg1 ;
-(NSString *)DSID;
-(BOOL)dirty;
-(NSString *)iCloudDSID;
-(NSString *)segmentData;
-(void)setICloudDSID:(NSString *)arg1 ;
-(id)idForClientType:(long long)arg1 ;
-(BOOL)isRestrictedByApple;
-(BOOL)isDPIDManatee;
-(BOOL)limitAdTrackingEnabled;
-(void)setID:(id)arg1 forClientType:(long long)arg2 ;
-(void)setIsDPIDManatee:(BOOL)arg1 ;
-(NSMutableDictionary *)ADIDRecords;
-(void)setLastSentSegmentDataTimestamp:(int)arg1 ;
-(void)setLastJingleLimitAdTrackingResponse:(long long)arg1 ;
-(void)setLimitAdTrackingTimestamp:(int)arg1 ;
-(void)setLastSentLimitAdTrackingTimestamp:(int)arg1 ;
-(BOOL)accountLimitAdTrackingEnabled;
-(NSString *)IDFA;
-(BOOL)accountIsT13;
-(BOOL)accountIsU13;
-(BOOL)accountIsU18;
-(void)setAccountLimitAdTrackingEnabled:(BOOL)arg1 ;
-(void)setIDFA:(NSString *)arg1 ;
-(BOOL)isPlaceholderAccount;
-(int)limitAdTrackingTimestamp;
-(void)setIAdIDBeforeReset:(NSString *)arg1 ;
-(void)setLastPOSTLimitAdTrackingTimestamp:(int)arg1 ;
-(void)setSegmentDataTimestamp:(int)arg1 ;
-(long long)lastJingleLimitAdTrackingResponse;
-(BOOL)lastSentLimitAdTrackingStatus;
-(int)lastSentSegmentDataTimestamp;
-(int)segmentDataTimestamp;
-(int)lastSentLimitAdTrackingTimestamp;
-(int)lastPOSTLimitAdTrackingTimestamp;
-(int)lastSegmentServedTimestamp;
-(BOOL)isActiveRecord;
-(id)initWithDSID:(id)arg1 serializedRecord:(id)arg2 version:(int)arg3 ;
-(void)setNotificationRequired:(BOOL)arg1 ;
-(BOOL)shouldSendNotification;
-(long long)lastJingleAccountStatus;
-(void)setNextReconcileTimestamp:(int)arg1 ;
-(int)nextReconcileTimestamp;
-(NSString *)iAdIDBeforeReset;
-(id)encryptedIDForClientType:(long long)arg1 ;
-(void)setLastSentLimitAdTrackingStatus:(BOOL)arg1 ;
-(void)setLastJingleAccountStatus:(long long)arg1 ;
-(void)setAccountAgeUnknown:(BOOL)arg1 ;
-(void)setLastSegmentServedTimestamp:(int)arg1 ;
-(void)setSegmentData:(NSString *)arg1 ;
-(void)setAccountIsU13:(BOOL)arg1 ;
-(void)setAccountIsT13:(BOOL)arg1 ;
-(void)setAccountIsU18:(BOOL)arg1 ;
-(BOOL)accountAgeUnknown;
-(BOOL)isRestrictedByEU_GDPR;
-(void)setADIDRecords:(NSMutableDictionary *)arg1 ;
-(BOOL)iAdIDRecordsDirty;
-(BOOL)notificationRequired;
-(void)setlimitAdTrackingTimestamp:(int)arg1 ;
-(void)setIsPlaceholderAccount:(BOOL)arg1 ;
@end

