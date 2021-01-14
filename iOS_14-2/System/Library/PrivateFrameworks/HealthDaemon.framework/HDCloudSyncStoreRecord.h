/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncRecord.h>

@class HDCloudSyncCodableStore, HDCloudSyncSequenceRecord, NSString, NSUUID, NSArray;

@interface HDCloudSyncStoreRecord : HDCloudSyncRecord {

	HDCloudSyncCodableStore* _underlyingStore;
	HDCloudSyncSequenceRecord* _slotASequenceHeaderRecord;
	HDCloudSyncSequenceRecord* _slotBSequenceHeaderRecord;
	HDCloudSyncSequenceRecord* _tombstoneSequenceRecord;

}

@property (nonatomic,copy,readonly) NSString * ownerIdentifier; 
@property (nonatomic,copy,readonly) NSUUID * storeIdentifier; 
@property (nonatomic,readonly) HDCloudSyncSequenceRecord * sequenceRecord; 
@property (nonatomic,copy,readonly) NSArray * orderedSequenceRecords; 
@property (nonatomic,readonly) HDCloudSyncSequenceRecord * tombstoneSequenceRecord;              //@synthesize tombstoneSequenceRecord=_tombstoneSequenceRecord - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (nonatomic,copy) NSString * pendingOwner; 
@property (assign,nonatomic) int supportedProtocolVersion; 
@property (assign,nonatomic) int requiredProtocolVersion; 
@property (nonatomic,copy) NSString * systemBuildVersion; 
@property (nonatomic,copy) NSString * productType; 
@property (nonatomic,copy) NSString * deviceName; 
@property (assign,nonatomic) int deviceMode; 
@property (assign,nonatomic) long long order; 
+(id)recordType;
+(id)recordWithCKRecord:(id)arg1 error:(id*)arg2 ;
+(BOOL)requiresUnderlyingMessage;
+(BOOL)hasFutureSchema:(id)arg1 ;
+(id)recordIDForOwnerIdentifier:(id)arg1 storeIdentifier:(id)arg2 zoneID:(id)arg3 ;
+(id)recordIDWithIndividualZoneID:(id)arg1 ;
+(id)recordIDInSyncCircle:(id)arg1 ownerIdentifier:(id)arg2 storeIdentifier:(id)arg3 zoneID:(id)arg4 ;
+(BOOL)isStoreRecord:(id)arg1 ;
+(BOOL)isStoreRecordID:(id)arg1 ;
-(NSString *)deviceName;
-(int)deviceMode;
-(int)supportedProtocolVersion;
-(long long)compare:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(NSString *)productType;
-(BOOL)isActive;
-(void)setProductType:(NSString *)arg1 ;
-(id)description;
-(NSString *)ownerIdentifier;
-(NSString *)systemBuildVersion;
-(unsigned long long)hash;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSUUID *)storeIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(long long)order;
-(void)setOrder:(long long)arg1 ;
-(id)serializeUnderlyingMessage;
-(id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2 ;
-(id)initInSyncCircle:(id)arg1 ownerIdentifier:(id)arg2 storeIdentifier:(id)arg3 zoneID:(id)arg4 ;
-(HDCloudSyncSequenceRecord *)tombstoneSequenceRecord;
-(void)setSystemBuildVersion:(NSString *)arg1 ;
-(void)setSupportedProtocolVersion:(int)arg1 ;
-(void)setRequiredProtocolVersion:(int)arg1 ;
-(void)setDeviceMode:(int)arg1 ;
-(NSString *)pendingOwner;
-(HDCloudSyncSequenceRecord *)sequenceRecord;
-(void)setPendingOwner:(NSString *)arg1 ;
-(NSArray *)orderedSequenceRecords;
-(void)addSequenceHeaderRecord:(id)arg1 ;
-(id)initWithOwnerIdentifier:(id)arg1 storeIdentifier:(id)arg2 pendingOwner:(id)arg3 active:(BOOL)arg4 record:(id)arg5 schemaVersion:(long long)arg6 ;
-(id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2 underlyingStore:(id)arg3 ;
-(id)activeSequenceHeaderRecord;
-(id)currentSequenceHeaderRecord;
-(id)_clearSequenceHeaderRecord:(id)arg1 ;
-(id)oldSequenceHeaderRecord;
-(id)pendingSequenceHeaderRecord;
-(int)requiredProtocolVersion;
-(id)initInSyncCircle:(id)arg1 ownerIdentifier:(id)arg2 storeIdentifier:(id)arg3 unified:(BOOL)arg4 ;
-(id)clearCurrentSequenceHeaderRecord;
-(id)clearOldSequenceHeaderRecord;
-(id)clearPendingSequenceHeaderRecord;
-(id)clearTombstoneSequenceHeaderRecord;
-(id)addNewSequenceHeaderRecordWithSyncAnchorMap:(id)arg1 includedIdentifiers:(id)arg2 ;
-(id)addNewTombstoneSequenceHeaderRecordWithIncludedIdentifiers:(id)arg1 ;
-(void)removeSequenceHeaderRecord:(id)arg1 ;
-(BOOL)hasActiveSequence;
-(BOOL)hasSequenceWithFutureProtocolVersion;
-(id)sequenceRecordWithRecordID:(id)arg1 ;
-(void)repairOwnerIdentifier:(id)arg1 ;
@end

