/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSDate, NSArray;

@interface IMCloudKitMockSyncState : NSObject {

	BOOL _IMCloudKitSyncingEnabled;
	BOOL _IMCloudKitIsSyncing;
	BOOL _IMCloudKitSyncPaused;
	BOOL _IMCloudKitIsEligibleForTruthZone;
	BOOL _IMCloudKitIsInExitState;
	BOOL _IMCloudKitIsRemovedFromBackup;
	BOOL _IMCloudKitStartingPeriodicSync;
	BOOL _IMCloudKitStartingInitialSync;
	BOOL _IMCloudKitStartingDisableDevices;
	NSDate* _IMCloudKitSyncDate;
	long long _IMCloudKitStartingEnabledSettingChange;
	unsigned long long _IMCloudKitSyncControllerSyncState;
	long long _IMCloudKitSyncControllerSyncType;
	long long _IMCloudKitSyncControllerSyncRecordType;
	NSArray* _IMCloudKitSyncErrors;

}

@property (assign) BOOL IMCloudKitSyncingEnabled;                                     //@synthesize IMCloudKitSyncingEnabled=_IMCloudKitSyncingEnabled - In the implementation block
@property (assign) BOOL IMCloudKitIsSyncing;                                          //@synthesize IMCloudKitIsSyncing=_IMCloudKitIsSyncing - In the implementation block
@property (assign) BOOL IMCloudKitSyncPaused;                                         //@synthesize IMCloudKitSyncPaused=_IMCloudKitSyncPaused - In the implementation block
@property (assign) BOOL IMCloudKitIsEligibleForTruthZone;                             //@synthesize IMCloudKitIsEligibleForTruthZone=_IMCloudKitIsEligibleForTruthZone - In the implementation block
@property (assign) BOOL IMCloudKitIsInExitState;                                      //@synthesize IMCloudKitIsInExitState=_IMCloudKitIsInExitState - In the implementation block
@property (assign) BOOL IMCloudKitIsRemovedFromBackup;                                //@synthesize IMCloudKitIsRemovedFromBackup=_IMCloudKitIsRemovedFromBackup - In the implementation block
@property (retain) NSDate * IMCloudKitSyncDate;                                       //@synthesize IMCloudKitSyncDate=_IMCloudKitSyncDate - In the implementation block
@property (assign) BOOL IMCloudKitStartingPeriodicSync;                               //@synthesize IMCloudKitStartingPeriodicSync=_IMCloudKitStartingPeriodicSync - In the implementation block
@property (assign) BOOL IMCloudKitStartingInitialSync;                                //@synthesize IMCloudKitStartingInitialSync=_IMCloudKitStartingInitialSync - In the implementation block
@property (assign) long long IMCloudKitStartingEnabledSettingChange;                  //@synthesize IMCloudKitStartingEnabledSettingChange=_IMCloudKitStartingEnabledSettingChange - In the implementation block
@property (assign) BOOL IMCloudKitStartingDisableDevices;                             //@synthesize IMCloudKitStartingDisableDevices=_IMCloudKitStartingDisableDevices - In the implementation block
@property (assign) unsigned long long IMCloudKitSyncControllerSyncState;              //@synthesize IMCloudKitSyncControllerSyncState=_IMCloudKitSyncControllerSyncState - In the implementation block
@property (assign) long long IMCloudKitSyncControllerSyncType;                        //@synthesize IMCloudKitSyncControllerSyncType=_IMCloudKitSyncControllerSyncType - In the implementation block
@property (assign) long long IMCloudKitSyncControllerSyncRecordType;                  //@synthesize IMCloudKitSyncControllerSyncRecordType=_IMCloudKitSyncControllerSyncRecordType - In the implementation block
@property (retain) NSArray * IMCloudKitSyncErrors;                                    //@synthesize IMCloudKitSyncErrors=_IMCloudKitSyncErrors - In the implementation block
-(BOOL)IMCloudKitSyncingEnabled;
-(BOOL)IMCloudKitIsSyncing;
-(BOOL)IMCloudKitIsEligibleForTruthZone;
-(BOOL)IMCloudKitIsInExitState;
-(BOOL)IMCloudKitIsRemovedFromBackup;
-(BOOL)IMCloudKitStartingPeriodicSync;
-(BOOL)IMCloudKitStartingInitialSync;
-(long long)IMCloudKitStartingEnabledSettingChange;
-(BOOL)IMCloudKitStartingDisableDevices;
-(unsigned long long)IMCloudKitSyncControllerSyncState;
-(long long)IMCloudKitSyncControllerSyncType;
-(long long)IMCloudKitSyncControllerSyncRecordType;
-(BOOL)IMCloudKitSyncPaused;
-(NSDate *)IMCloudKitSyncDate;
-(NSArray *)IMCloudKitSyncErrors;
-(id)convertToDictionary;
-(void)setIMCloudKitSyncingEnabled:(BOOL)arg1 ;
-(void)setIMCloudKitIsSyncing:(BOOL)arg1 ;
-(void)setIMCloudKitSyncPaused:(BOOL)arg1 ;
-(void)setIMCloudKitIsEligibleForTruthZone:(BOOL)arg1 ;
-(void)setIMCloudKitIsInExitState:(BOOL)arg1 ;
-(void)setIMCloudKitIsRemovedFromBackup:(BOOL)arg1 ;
-(void)setIMCloudKitSyncDate:(NSDate *)arg1 ;
-(void)setIMCloudKitStartingPeriodicSync:(BOOL)arg1 ;
-(void)setIMCloudKitStartingInitialSync:(BOOL)arg1 ;
-(void)setIMCloudKitStartingEnabledSettingChange:(long long)arg1 ;
-(void)setIMCloudKitStartingDisableDevices:(BOOL)arg1 ;
-(void)setIMCloudKitSyncControllerSyncState:(unsigned long long)arg1 ;
-(void)setIMCloudKitSyncControllerSyncType:(long long)arg1 ;
-(void)setIMCloudKitSyncControllerSyncRecordType:(long long)arg1 ;
-(void)setIMCloudKitSyncErrors:(NSArray *)arg1 ;
@end

