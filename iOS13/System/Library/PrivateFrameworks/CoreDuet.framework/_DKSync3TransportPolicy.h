/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKSync3PolicyCommonMethods.h>

@class NSDictionary, NSString;

@interface _DKSync3TransportPolicy : NSObject <_DKSync3PolicyCommonMethods> {

	BOOL _isSyncDisabled;
	NSDictionary* _properties;
	NSString* _name;
	NSString* _transport;
	unsigned long long _maximumSyncsPerDay;
	unsigned long long _syncBatchSizeInEvents;
	unsigned long long _maximumBatchesPerSync;
	unsigned long long _minimumSyncWindowInSeconds;
	unsigned long long _minimumTimeBetweenSyncsInSeconds;
	unsigned long long _singleDevicePeriodicSyncCadenceInDays;
	unsigned long long _additionsBucketCountTriggeringSync;
	unsigned long long _deletionsBucketCountTriggeringSync;

}

@property (nonatomic,retain) NSString * name;                                                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL isSyncDisabled;                                                   //@synthesize isSyncDisabled=_isSyncDisabled - In the implementation block
@property (nonatomic,retain) NSString * transport;                                                  //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) unsigned long long maximumSyncsPerDay;                                 //@synthesize maximumSyncsPerDay=_maximumSyncsPerDay - In the implementation block
@property (assign,nonatomic) unsigned long long syncBatchSizeInEvents;                              //@synthesize syncBatchSizeInEvents=_syncBatchSizeInEvents - In the implementation block
@property (assign,nonatomic) unsigned long long maximumBatchesPerSync;                              //@synthesize maximumBatchesPerSync=_maximumBatchesPerSync - In the implementation block
@property (assign,nonatomic) unsigned long long minimumSyncWindowInSeconds;                         //@synthesize minimumSyncWindowInSeconds=_minimumSyncWindowInSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long minimumTimeBetweenSyncsInSeconds;                   //@synthesize minimumTimeBetweenSyncsInSeconds=_minimumTimeBetweenSyncsInSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long singleDevicePeriodicSyncCadenceInDays;              //@synthesize singleDevicePeriodicSyncCadenceInDays=_singleDevicePeriodicSyncCadenceInDays - In the implementation block
@property (assign,nonatomic) unsigned long long additionsBucketCountTriggeringSync;                 //@synthesize additionsBucketCountTriggeringSync=_additionsBucketCountTriggeringSync - In the implementation block
@property (assign,nonatomic) unsigned long long deletionsBucketCountTriggeringSync;                 //@synthesize deletionsBucketCountTriggeringSync=_deletionsBucketCountTriggeringSync - In the implementation block
@property (nonatomic,retain) NSDictionary * properties;                                             //@synthesize properties=_properties - In the implementation block
+(id)policyForSyncTransportType:(long long)arg1 ;
-(id)init;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSDictionary *)properties;
-(void)setSyncBatchSizeInEvents:(unsigned long long)arg1 ;
-(unsigned long long)syncBatchSizeInEvents;
-(BOOL)isSyncDisabled;
-(NSString *)transport;
-(unsigned long long)maximumSyncsPerDay;
-(unsigned long long)maximumBatchesPerSync;
-(unsigned long long)minimumSyncWindowInSeconds;
-(unsigned long long)minimumTimeBetweenSyncsInSeconds;
-(unsigned long long)additionsBucketCountTriggeringSync;
-(unsigned long long)deletionsBucketCountTriggeringSync;
-(void)setProperties:(NSDictionary *)arg1 ;
-(id)initWithName:(id)arg1 properties:(id)arg2 ;
-(void)setIsSyncDisabled:(BOOL)arg1 ;
-(void)setTransport:(NSString *)arg1 ;
-(void)setMaximumSyncsPerDay:(unsigned long long)arg1 ;
-(void)setMaximumBatchesPerSync:(unsigned long long)arg1 ;
-(void)setMinimumSyncWindowInSeconds:(unsigned long long)arg1 ;
-(void)setMinimumTimeBetweenSyncsInSeconds:(unsigned long long)arg1 ;
-(unsigned long long)singleDevicePeriodicSyncCadenceInDays;
-(void)setSingleDevicePeriodicSyncCadenceInDays:(unsigned long long)arg1 ;
-(void)setAdditionsBucketCountTriggeringSync:(unsigned long long)arg1 ;
-(void)setDeletionsBucketCountTriggeringSync:(unsigned long long)arg1 ;
@end

