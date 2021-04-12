/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMSharedUtilities/IMSingletonOverride.h>

@class IMCloudKitMockSyncState, NSDictionary, NSDate, NSArray;

@interface IMCloudKitHookTestSingleton : IMSingletonOverride {

	IMCloudKitMockSyncState* _testState;
	BOOL _rampedIntoTruthZone;
	BOOL _isStartingSync;
	BOOL _isDisablingDevices;
	long long _isChangingEnabledState;
	unsigned long long _syncControllerSyncState;
	long long _syncType;
	NSDictionary* _syncStats;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isSyncing,nonatomic) BOOL syncing; 
@property (nonatomic,retain) NSDate * lastSyncDate; 
@property (assign,nonatomic) BOOL eligibleForTruthZone; 
@property (assign,nonatomic) BOOL rampedIntoTruthZone;                                //@synthesize rampedIntoTruthZone=_rampedIntoTruthZone - In the implementation block
@property (assign,nonatomic) long long isChangingEnabledState;                        //@synthesize isChangingEnabledState=_isChangingEnabledState - In the implementation block
@property (assign,nonatomic) BOOL isStartingSync;                                     //@synthesize isStartingSync=_isStartingSync - In the implementation block
@property (assign,nonatomic) BOOL isDisablingDevices;                                 //@synthesize isDisablingDevices=_isDisablingDevices - In the implementation block
@property (nonatomic,retain) NSArray * IMCloudKitSyncErrors; 
@property (assign,nonatomic) unsigned long long syncControllerSyncState;              //@synthesize syncControllerSyncState=_syncControllerSyncState - In the implementation block
@property (assign,nonatomic) long long syncType;                                      //@synthesize syncType=_syncType - In the implementation block
@property (nonatomic,retain) NSDictionary * syncStats;                                //@synthesize syncStats=_syncStats - In the implementation block
@property (nonatomic,retain) IMCloudKitMockSyncState * testState;                     //@synthesize testState=_testState - In the implementation block
+(id)logHandle;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(NSDate *)lastSyncDate;
-(long long)syncType;
-(void)setSyncType:(long long)arg1 ;
-(id)logHandle;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(BOOL)isSyncing;
-(BOOL)eligibleForTruthZone;
-(BOOL)isInExitState;
-(id)syncStateDictionary;
-(void)initiatePeriodicSync;
-(void)fetchSyncStateStatistics;
-(unsigned long long)syncControllerSyncState;
-(BOOL)isDisablingDevices;
-(NSArray *)IMCloudKitSyncErrors;
-(void)setIMCloudKitSyncErrors:(NSArray *)arg1 ;
-(void)sendSyncChangedEvent;
-(NSDictionary *)syncStats;
-(void)setSyncing:(BOOL)arg1 ;
-(void)setTestState:(IMCloudKitMockSyncState *)arg1 ;
-(void)setEligibleForTruthZone:(BOOL)arg1 ;
-(BOOL)isStartingSync;
-(long long)isChangingEnabledState;
-(void)setIsInExitState:(BOOL)arg1 ;
-(void)setControllerSyncState:(unsigned long long)arg1 ;
-(void)setControllerSyncType:(long long)arg1 ;
-(IMCloudKitMockSyncState *)testState;
-(BOOL)rampedIntoTruthZone;
-(void)setRampedIntoTruthZone:(BOOL)arg1 ;
-(void)setIsChangingEnabledState:(long long)arg1 ;
-(void)setIsStartingSync:(BOOL)arg1 ;
-(void)setIsDisablingDevices:(BOOL)arg1 ;
-(void)setSyncControllerSyncState:(unsigned long long)arg1 ;
-(void)setSyncStats:(NSDictionary *)arg1 ;
@end

