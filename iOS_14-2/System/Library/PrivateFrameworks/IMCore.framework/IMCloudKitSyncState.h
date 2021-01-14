/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSDate, NSArray;

@interface IMCloudKitSyncState : NSObject {

	BOOL _hasExited;
	BOOL _isDisablingDevices;
	BOOL _accountIsEnabled;
	unsigned long long _syncControllerSyncState;
	long long _syncControllerSyncType;
	long long _syncControllerRecordType;
	NSDate* _exitDate;
	long long _changingEnabledState;
	NSDate* _lastSyncDate;
	NSArray* _errors;
	long long _accountStatus;
	long long _syncState;

}

@property (nonatomic,readonly) BOOL accountIsEnabled;                                   //@synthesize accountIsEnabled=_accountIsEnabled - In the implementation block
@property (nonatomic,readonly) long long syncState;                                     //@synthesize syncState=_syncState - In the implementation block
@property (nonatomic,readonly) BOOL isSyncing; 
@property (nonatomic,readonly) BOOL isSyncingPaused; 
@property (nonatomic,readonly) unsigned long long syncControllerSyncState;              //@synthesize syncControllerSyncState=_syncControllerSyncState - In the implementation block
@property (nonatomic,readonly) long long syncControllerSyncType;                        //@synthesize syncControllerSyncType=_syncControllerSyncType - In the implementation block
@property (nonatomic,readonly) long long syncControllerRecordType;                      //@synthesize syncControllerRecordType=_syncControllerRecordType - In the implementation block
@property (nonatomic,readonly) BOOL isSyncingAvailable; 
@property (nonatomic,readonly) BOOL hasExited;                                          //@synthesize hasExited=_hasExited - In the implementation block
@property (nonatomic,copy,readonly) NSDate * exitDate;                                  //@synthesize exitDate=_exitDate - In the implementation block
@property (nonatomic,readonly) BOOL isSyncingEnabled; 
@property (nonatomic,readonly) long long changingEnabledState;                          //@synthesize changingEnabledState=_changingEnabledState - In the implementation block
@property (nonatomic,readonly) BOOL isDisablingDevices;                                 //@synthesize isDisablingDevices=_isDisablingDevices - In the implementation block
@property (nonatomic,readonly) BOOL canChangeEnabledSetting; 
@property (nonatomic,readonly) BOOL canStartSyncing; 
@property (nonatomic,readonly) BOOL canEnableSyncing; 
@property (nonatomic,readonly) BOOL isSyncEnabledForDisplayOnly; 
@property (nonatomic,readonly) NSDate * lastSyncDate;                                   //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (nonatomic,readonly) NSArray * errors;                                        //@synthesize errors=_errors - In the implementation block
@property (nonatomic,readonly) BOOL syncingFailed; 
@property (nonatomic,readonly) long long accountStatus;                                 //@synthesize accountStatus=_accountStatus - In the implementation block
+(id)logHandle;
-(long long)syncState;
-(BOOL)isSyncingEnabled;
-(long long)accountStatus;
-(long long)syncControllerSyncType;
-(NSDate *)exitDate;
-(BOOL)isDisablingDevices;
-(BOOL)isSyncingPaused;
-(long long)syncControllerRecordType;
-(id)description;
-(BOOL)isSyncing;
-(id)logHandle;
-(NSDate *)lastSyncDate;
-(NSArray *)errors;
-(unsigned long long)syncControllerSyncState;
-(BOOL)isSyncingAvailable;
-(id)initWithAccountEnabled:(BOOL)arg1 stateDictionary:(id)arg2 ;
-(BOOL)shouldFetchSyncStatistics;
-(id)createSyncProgressWithSyncStatistics:(id)arg1 ;
-(BOOL)shouldRescheduleSyncSyncProgress;
-(BOOL)syncingFailed;
-(BOOL)_isChangingEnabledState;
-(long long)changingEnabledState;
-(id)syncErrorWithDomain:(id)arg1 code:(long long)arg2 ;
-(BOOL)canEnableSyncing;
-(BOOL)canStartSyncing;
-(BOOL)canChangeEnabledSetting;
-(BOOL)isSyncEnabledForDisplayOnly;
-(BOOL)hasExited;
-(BOOL)accountIsEnabled;
-(BOOL)_shouldHideProgressInFirstSevenDays;
@end

