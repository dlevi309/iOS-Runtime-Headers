/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSArray;

@interface _DKSyncPolicy : NSObject {

	BOOL _syncDisabled;
	BOOL _alwaysSyncUpAndDown;
	BOOL _pushTriggersSync;
	BOOL _forceSync;
	unsigned long long _assetThresholdInBytes;
	unsigned long long _firstSyncPeriodInDays;
	unsigned long long _maxSyncDownIntervalInDays;
	unsigned long long _minSyncIntervalInSeconds;
	unsigned long long _minSyncsPerDay;
	unsigned long long _maxSyncsPerDay;
	unsigned long long _numChangesTriggeringSync;
	unsigned long long _singleDeviceSyncIntervalInDays;
	NSArray* _streamNamesWithAdditionsTriggeringSync;
	NSArray* _streamNamesWithDeletionsTriggeringSync;
	unsigned long long _syncTimeoutInSeconds;
	unsigned long long _triggeredSyncDelayInSeconds;
	unsigned long long _policyDownloadIntervalInDays;

}

@property (nonatomic,readonly) BOOL syncDisabled; 
@property (nonatomic,readonly) BOOL alwaysSyncUpAndDown; 
@property (nonatomic,readonly) unsigned long long assetThresholdInBytes; 
@property (nonatomic,readonly) unsigned long long firstSyncPeriodInDays; 
@property (nonatomic,readonly) unsigned long long maxSyncDownIntervalInDays; 
@property (nonatomic,readonly) unsigned long long minSyncIntervalInSeconds; 
@property (nonatomic,readonly) unsigned long long minSyncsPerDay; 
@property (nonatomic,readonly) unsigned long long maxSyncsPerDay; 
@property (nonatomic,readonly) unsigned long long numChangesTriggeringSync; 
@property (nonatomic,readonly) BOOL pushTriggersSync; 
@property (nonatomic,readonly) unsigned long long singleDeviceSyncIntervalInDays; 
@property (nonatomic,readonly) NSArray * streamNamesWithAdditionsTriggeringSync; 
@property (nonatomic,readonly) NSArray * streamNamesWithDeletionsTriggeringSync; 
@property (nonatomic,readonly) unsigned long long syncTimeoutInSeconds; 
@property (nonatomic,readonly) unsigned long long triggeredSyncDelayInSeconds; 
@property (nonatomic,readonly) BOOL forceSync; 
+(id)policy;
+(id)forceSyncPolicy;
-(unsigned long long)syncTimeoutInSeconds;
-(unsigned long long)minSyncsPerDay;
-(BOOL)forceSync;
-(BOOL)syncDisabled;
-(unsigned long long)singleDeviceSyncIntervalInDays;
-(id)description;
-(unsigned long long)firstSyncPeriodInDays;
-(BOOL)alwaysSyncUpAndDown;
-(unsigned long long)assetThresholdInBytes;
-(id)queryStartDateFromLastDaySyncDates:(id)arg1 lastSyncDate:(id)arg2 isSingleDevice:(BOOL)arg3 isTriggeredSync:(BOOL)arg4 ;
-(unsigned long long)numChangesTriggeringSync;
-(NSArray *)streamNamesWithDeletionsTriggeringSync;
-(unsigned long long)maxSyncsPerDay;
-(double)hoursBetweenSyncsWhenIsSingleDevice:(BOOL)arg1 ;
-(BOOL)pushTriggersSync;
-(unsigned long long)minSyncIntervalInSeconds;
-(unsigned long long)triggeredSyncDelayInSeconds;
-(NSArray *)streamNamesWithAdditionsTriggeringSync;
-(unsigned long long)maxSyncDownIntervalInDays;
@end

