/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSMutableArray, HDCloudSyncRepository, HDCloudSyncZoneIdentifier, HDCloudSyncRegistryRecord, CKShare, HDCloudSyncMasterRecord, HDCloudSyncStore, HDCloudSyncDataUploadRequestRecord, NSArray, CKRecordID, NSUUID, HDCloudSyncStoreRecord;

@interface HDCloudSyncZone : NSObject {

	NSMutableArray* _records;
	NSMutableArray* _storeRecords;
	NSMutableArray* _orphanedSequenceRecords;
	BOOL _hasLostIdentity;
	BOOL _hasFutureSchemaRecord;
	BOOL _validatedForSharing;
	HDCloudSyncRepository* _repository;
	HDCloudSyncZoneIdentifier* _zoneIdentifier;
	long long _zoneType;
	HDCloudSyncRegistryRecord* _registryRecord;
	long long _purpose;
	CKShare* _zoneShare;
	HDCloudSyncMasterRecord* _masterRecord;
	HDCloudSyncStore* _store;
	HDCloudSyncDataUploadRequestRecord* _dataUploadRequestRecord;

}

@property (nonatomic,__weak,readonly) HDCloudSyncRepository * repository;                                 //@synthesize repository=_repository - In the implementation block
@property (nonatomic,copy,readonly) HDCloudSyncZoneIdentifier * zoneIdentifier;                           //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (nonatomic,readonly) long long zoneType;                                                        //@synthesize zoneType=_zoneType - In the implementation block
@property (assign,nonatomic) BOOL hasLostIdentity;                                                        //@synthesize hasLostIdentity=_hasLostIdentity - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) BOOL hasOrphanedSequenceRecords; 
@property (nonatomic,copy,readonly) NSArray * recordNames; 
@property (nonatomic,readonly) long long recordCount; 
@property (nonatomic,readonly) HDCloudSyncRegistryRecord * registryRecord;                                //@synthesize registryRecord=_registryRecord - In the implementation block
@property (nonatomic,copy,readonly) NSArray * storeRecords; 
@property (nonatomic,copy,readonly) NSArray * records; 
@property (assign,nonatomic) BOOL hasFutureSchemaRecord;                                                  //@synthesize hasFutureSchemaRecord=_hasFutureSchemaRecord - In the implementation block
@property (assign,nonatomic) long long purpose;                                                           //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,copy,readonly) CKRecordID * zoneShareRecordID; 
@property (nonatomic,retain) CKShare * zoneShare;                                                         //@synthesize zoneShare=_zoneShare - In the implementation block
@property (assign,nonatomic) BOOL validatedForSharing;                                                    //@synthesize validatedForSharing=_validatedForSharing - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * storeIdentifier; 
@property (nonatomic,readonly) HDCloudSyncStoreRecord * storeRecord; 
@property (nonatomic,readonly) HDCloudSyncMasterRecord * masterRecord;                                    //@synthesize masterRecord=_masterRecord - In the implementation block
@property (nonatomic,retain) HDCloudSyncStore * store;                                                    //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) HDCloudSyncDataUploadRequestRecord * dataUploadRequestRecord;              //@synthesize dataUploadRequestRecord=_dataUploadRequestRecord - In the implementation block
-(HDCloudSyncZoneIdentifier *)zoneIdentifier;
-(long long)purpose;
-(void)setPurpose:(long long)arg1 ;
-(void)setStore:(HDCloudSyncStore *)arg1 ;
-(NSArray *)records;
-(HDCloudSyncStore *)store;
-(long long)recordCount;
-(id)description;
-(BOOL)isEmpty;
-(HDCloudSyncRepository *)repository;
-(NSUUID *)storeIdentifier;
-(long long)zoneType;
-(id)initForZoneIdentifier:(id)arg1 repository:(id)arg2 type:(long long)arg3 ;
-(NSArray *)storeRecords;
-(BOOL)addRecord:(id)arg1 error:(id*)arg2 ;
-(HDCloudSyncStoreRecord *)storeRecord;
-(void)removeRecord:(id)arg1 ;
-(CKShare *)zoneShare;
-(HDCloudSyncRegistryRecord *)registryRecord;
-(void)setZoneShare:(CKShare *)arg1 ;
-(HDCloudSyncDataUploadRequestRecord *)dataUploadRequestRecord;
-(BOOL)_addSubscriptionRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasOrphanedSequenceRecords;
-(NSArray *)recordNames;
-(CKRecordID *)zoneShareRecordID;
-(BOOL)hasLostIdentity;
-(void)setHasLostIdentity:(BOOL)arg1 ;
-(BOOL)hasFutureSchemaRecord;
-(void)setHasFutureSchemaRecord:(BOOL)arg1 ;
-(BOOL)validatedForSharing;
-(void)setValidatedForSharing:(BOOL)arg1 ;
-(HDCloudSyncMasterRecord *)masterRecord;
@end

