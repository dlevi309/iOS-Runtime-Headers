/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKSync3PolicyCommonMethods.h>

@class NSDictionary, NSNumber, NSArray;

@interface _DKSync3Policy : NSObject <_DKSync3PolicyCommonMethods> {

	BOOL _syncDisabled;
	BOOL _isSingleDevice;
	BOOL _isOnPower;
	NSDictionary* _properties;
	NSNumber* _version;
	unsigned long long _triggeredSyncDelayInSeconds;
	long long _mask;
	NSArray* _sourceDevices;
	NSArray* _destinationDevices;
	NSArray* _transportPolicies;
	NSArray* _featurePolicies;

}

@property (assign,nonatomic) BOOL syncDisabled;                                           //@synthesize syncDisabled=_syncDisabled - In the implementation block
@property (nonatomic,retain) NSNumber * version;                                          //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long triggeredSyncDelayInSeconds;              //@synthesize triggeredSyncDelayInSeconds=_triggeredSyncDelayInSeconds - In the implementation block
@property (assign,nonatomic) long long mask;                                              //@synthesize mask=_mask - In the implementation block
@property (nonatomic,retain) NSArray * sourceDevices;                                     //@synthesize sourceDevices=_sourceDevices - In the implementation block
@property (nonatomic,retain) NSArray * destinationDevices;                                //@synthesize destinationDevices=_destinationDevices - In the implementation block
@property (assign,nonatomic) BOOL isSingleDevice;                                         //@synthesize isSingleDevice=_isSingleDevice - In the implementation block
@property (assign,nonatomic) BOOL isOnPower;                                              //@synthesize isOnPower=_isOnPower - In the implementation block
@property (nonatomic,retain) NSArray * transportPolicies;                                 //@synthesize transportPolicies=_transportPolicies - In the implementation block
@property (nonatomic,retain) NSArray * featurePolicies;                                   //@synthesize featurePolicies=_featurePolicies - In the implementation block
@property (nonatomic,retain) NSDictionary * properties;                                   //@synthesize properties=_properties - In the implementation block
+(id)policyCache;
+(id)configurationPlistForFilename:(id)arg1 ;
+(id)userDefaults;
+(void)possiblyDownloadSyncPolicyWithPolicyDownloadIntervalInDays:(unsigned long long)arg1 ;
+(id)productVersion;
+(void)handleDownloadSyncPolicyResponse:(id)arg1 data:(id)arg2 error:(id)arg3 ;
+(id)syncPolicyConfigPathForFilename:(id)arg1 ;
+(BOOL)cloudSyncDisabled;
+(BOOL)rapportSyncDisabled;
+(void)setOkToDownloadPolicyUpdates:(BOOL)arg1 ;
+(id)disabledPolicy;
+(id)computePolicyDictionaryWithDefaultSyncPolicyDict:(id)arg1 syncPolicyOverridesDict:(id)arg2 topLevelDefaultsPolicy:(id)arg3 ;
+(void)overrideDictionary:(id)arg1 withOverrides:(id)arg2 ;
+(void)addToDictionary:(id)arg1 streamNamesToAlwaysSync:(id)arg2 ;
+(id)computedPolicyDictionary;
+(void)fillPolicyCache:(id)arg1 bySplittingPolicyDictionary:(id)arg2 ;
+(void)_possiblyAddToArray:(id)arg1 ifTransport:(long long)arg2 existsInTransports:(long long)arg3 ;
+(id)policyForTransports:(long long)arg1 features:(id)arg2 sourceDevices:(id)arg3 destinationDevices:(id)arg4 isSingleDevice:(BOOL)arg5 isOnPower:(BOOL)arg6 ;
+(id)localDeviceType;
+(id)deviceTypeWithHardwareModel:(id)arg1 ;
+(void)clearPolicyCache;
-(id)init;
-(id)description;
-(NSNumber *)version;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSDictionary *)properties;
-(long long)mask;
-(void)setMask:(long long)arg1 ;
-(BOOL)syncDisabled;
-(void)setSyncDisabled:(BOOL)arg1 ;
-(void)setTriggeredSyncDelayInSeconds:(unsigned long long)arg1 ;
-(BOOL)isSingleDevice;
-(id)streamNamesToSync;
-(unsigned long long)triggeredSyncDelayInSeconds;
-(BOOL)canDeferSyncOperationWithSyncType:(id)arg1 ;
-(BOOL)highPriorityForSyncDownWithSyncType:(id)arg1 ;
-(BOOL)highPriorityForSyncUpWithSyncType:(id)arg1 lastSyncDate:(id)arg2 ;
-(BOOL)isOnPower;
-(void)setProperties:(NSDictionary *)arg1 ;
-(id)initWithTransports:(long long)arg1 features:(id)arg2 sourceDevices:(id)arg3 destinationDevices:(id)arg4 isSingleDevice:(BOOL)arg5 isOnPower:(BOOL)arg6 ;
-(id)initWithProperties:(id)arg1 transports:(long long)arg2 sourceDevices:(id)arg3 destinationDevices:(id)arg4 isSingleDevice:(BOOL)arg5 isOnPower:(BOOL)arg6 transportPolicies:(id)arg7 featurePolicies:(id)arg8 ;
-(BOOL)_anyFeaturePropertyValueWithKey:(id)arg1 getterBlock:(/*^block*/id)arg2 ;
-(unsigned long long)_minimumPropertyValueWithKey:(id)arg1 policies:(id)arg2 skipZeroValues:(BOOL)arg3 ;
-(unsigned long long)_maximumPropertyValueWithKey:(id)arg1 policies:(id)arg2 skipZeroValues:(BOOL)arg3 ;
-(BOOL)canPushTriggerSync;
-(unsigned long long)periodicSyncCadenceInMinutesMaximumValue;
-(unsigned long long)singleDevicePeriodicSyncCadenceInDaysMaximumValue;
-(unsigned long long)maximumSyncsPerDayMaximumValue;
-(double)timeIntervalBetweenSyncs;
-(id)queryStartDateWithSyncType:(id)arg1 streamName:(id)arg2 lastSyncDate:(id)arg3 lastDaySyncCount:(unsigned long long)arg4 ;
-(double)timeIntervalBetweenSyncsWithUrgency:(unsigned long long)arg1 ;
-(unsigned long long)singleDevicePeriodicSyncCadenceInDaysMinimumValue;
-(unsigned long long)periodicSyncCadenceInMinutesMinimumValue;
-(NSArray *)sourceDevices;
-(NSArray *)destinationDevices;
-(NSArray *)transportPolicies;
-(NSArray *)featurePolicies;
-(unsigned long long)maximumSyncsPerDayMinimumValue;
-(unsigned long long)minimumTimeBetweenSyncsInSecondsMinimumValue;
-(unsigned long long)minimumTimeBetweenSyncsInSecondsMaximumValue;
-(id)enabledFeaturesForSyncType:(id)arg1 ;
-(BOOL)canPerformSyncOperationWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3 ;
-(id)queryStartDateWithSyncType:(id)arg1 streamName:(id)arg2 lastSyncDate:(id)arg3 lastDaySyncCount:(unsigned long long)arg4 previousHighWaterMark:(id)arg5 ;
-(void)setSourceDevices:(NSArray *)arg1 ;
-(void)setDestinationDevices:(NSArray *)arg1 ;
-(void)setIsSingleDevice:(BOOL)arg1 ;
-(void)setIsOnPower:(BOOL)arg1 ;
-(void)setTransportPolicies:(NSArray *)arg1 ;
-(void)setFeaturePolicies:(NSArray *)arg1 ;
@end

