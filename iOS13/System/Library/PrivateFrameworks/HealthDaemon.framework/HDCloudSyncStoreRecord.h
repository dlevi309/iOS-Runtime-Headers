/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncRecord.h>

@class HDCloudSyncSequenceRecord, NSString, NSUUID, NSArray;

@interface HDCloudSyncStoreRecord : HDCloudSyncRecord {

	HDCloudSyncSequenceRecord* _slotASequenceHeaderRecord;
	HDCloudSyncSequenceRecord* _slotBSequenceHeaderRecord;
	BOOL _active;
	NSString* _ownerIdentifier;
	NSString* _pendingOwner;
	NSUUID* _storeIdentifier;
	HDCloudSyncSequenceRecord* _tombstoneSequenceRecord;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                                        //@synthesize active=_active - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownerIdentifier;                                  //@synthesize ownerIdentifier=_ownerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * pendingOwner;                                              //@synthesize pendingOwner=_pendingOwner - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * storeIdentifier;                                    //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,readonly) HDCloudSyncSequenceRecord * sequenceRecord; 
@property (nonatomic,copy,readonly) NSArray * orderedSequenceRecords; 
@property (nonatomic,readonly) HDCloudSyncSequenceRecord * tombstoneSequenceRecord;              //@synthesize tombstoneSequenceRecord=_tombstoneSequenceRecord - In the implementation block
@property (assign,nonatomic) long long supportedProtocolVersion; 
@property (assign,nonatomic) long long requiredProtocolVersion; 
@property (nonatomic,copy) NSString * systemBuildVersion; 
@property (nonatomic,copy) NSString * productType; 
@property (nonatomic,copy) NSString * deviceName; 
@property (assign,nonatomic) long long deviceMode; 
+(id)recordIDWithZoneID:(id)arg1 ;
+(id)recordWithCKRecord:(id)arg1 error:(id*)arg2 ;
+(BOOL)hasFutureSchema:(id)arg1 ;
+(BOOL)isStoreRecord:(id)arg1 ;
+(BOOL)isStoreRecordID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(NSString *)productType;
-(NSUUID *)storeIdentifier;
-(NSString *)ownerIdentifier;
-(void)setProductType:(NSString *)arg1 ;
-(long long)supportedProtocolVersion;
-(NSString *)systemBuildVersion;
-(void)setSystemBuildVersion:(NSString *)arg1 ;
-(id)initWithOwnerIdentifier:(id)arg1 storeIdentifier:(id)arg2 pendingOwner:(id)arg3 active:(BOOL)arg4 record:(id)arg5 schemaVersion:(long long)arg6 ;
-(NSString *)pendingOwner;
-(id)activeSequenceHeaderRecord;
-(id)currentSequenceHeaderRecord;
-(HDCloudSyncSequenceRecord *)sequenceRecord;
-(id)oldSequenceHeaderRecord;
-(long long)deviceMode;
-(long long)requiredProtocolVersion;
-(id)_indentedSequenceRecordDescription:(id)arg1 ;
-(id)initInSyncCircle:(id)arg1 ownerIdentifier:(id)arg2 storeIdentifier:(id)arg3 ;
-(void)setDeviceMode:(long long)arg1 ;
-(NSArray *)orderedSequenceRecords;
-(void)setSupportedProtocolVersion:(long long)arg1 ;
-(void)setRequiredProtocolVersion:(long long)arg1 ;
-(id)clearCurrentSequenceHeaderRecord;
-(id)clearOldSequenceHeaderRecord;
-(id)clearTombstoneSequenceHeaderRecord;
-(id)addNewSequenceHeaderRecordWithSyncAnchorMap:(id)arg1 includedIdentifiers:(id)arg2 ;
-(id)addNewTombstoneSequenceHeaderRecordWithIncludedIdentifiers:(id)arg1 ;
-(void)addSequenceHeaderRecord:(id)arg1 ;
-(void)setPendingOwner:(NSString *)arg1 ;
-(BOOL)hasActiveSequence;
-(BOOL)hasSequenceWithFutureProtocolVersion;
-(id)sequenceRecordWithRecordID:(id)arg1 ;
-(HDCloudSyncSequenceRecord *)tombstoneSequenceRecord;
@end

