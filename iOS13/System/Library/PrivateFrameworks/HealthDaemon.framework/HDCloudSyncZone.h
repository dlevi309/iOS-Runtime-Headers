/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSMutableArray, HDCloudSyncRepository, HDCloudSyncZoneIdentifier, HDCloudSyncStoreRecord, HDCloudSyncMasterRecord, HDCloudSyncStore, CKShare, HDCloudSyncDataUploadRequestRecord, NSUUID, NSArray;

@interface HDCloudSyncZone : NSObject {

	NSMutableArray* _sequenceRecords;
	NSMutableArray* _records;
	BOOL _hasFutureSchemaRecord;
	BOOL _validatedForSharing;
	HDCloudSyncRepository* _repository;
	HDCloudSyncZoneIdentifier* _zoneIdentifier;
	long long _zoneType;
	HDCloudSyncStoreRecord* _storeRecord;
	HDCloudSyncMasterRecord* _masterRecord;
	HDCloudSyncStore* _store;
	long long _purpose;
	CKShare* _zoneShare;
	HDCloudSyncDataUploadRequestRecord* _dataUploadRequestRecord;

}

@property (nonatomic,__weak,readonly) HDCloudSyncRepository * repository;                                 //@synthesize repository=_repository - In the implementation block
@property (nonatomic,copy,readonly) HDCloudSyncZoneIdentifier * zoneIdentifier;                           //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (nonatomic,readonly) long long zoneType;                                                        //@synthesize zoneType=_zoneType - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) BOOL hasOrphanedSequenceRecords; 
@property (nonatomic,copy,readonly) NSUUID * storeIdentifier; 
@property (nonatomic,copy,readonly) NSArray * recordNames; 
@property (nonatomic,readonly) long long recordCount; 
@property (nonatomic,readonly) HDCloudSyncStoreRecord * storeRecord;                                      //@synthesize storeRecord=_storeRecord - In the implementation block
@property (nonatomic,readonly) HDCloudSyncMasterRecord * masterRecord;                                    //@synthesize masterRecord=_masterRecord - In the implementation block
@property (assign,nonatomic) BOOL hasFutureSchemaRecord;                                                  //@synthesize hasFutureSchemaRecord=_hasFutureSchemaRecord - In the implementation block
@property (nonatomic,retain) HDCloudSyncStore * store;                                                    //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) long long purpose;                                                           //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,retain) CKShare * zoneShare;                                                         //@synthesize zoneShare=_zoneShare - In the implementation block
@property (assign,nonatomic) BOOL validatedForSharing;                                                    //@synthesize validatedForSharing=_validatedForSharing - In the implementation block
@property (nonatomic,readonly) HDCloudSyncDataUploadRequestRecord * dataUploadRequestRecord;              //@synthesize dataUploadRequestRecord=_dataUploadRequestRecord - In the implementation block
-(id)description;
-(BOOL)isEmpty;
-(HDCloudSyncStore *)store;
-(void)setStore:(HDCloudSyncStore *)arg1 ;
-(void)setPurpose:(long long)arg1 ;
-(long long)purpose;
-(NSUUID *)storeIdentifier;
-(HDCloudSyncZoneIdentifier *)zoneIdentifier;
-(HDCloudSyncRepository *)repository;
-(BOOL)addRecord:(id)arg1 error:(id*)arg2 ;
-(long long)recordCount;
-(NSArray *)recordNames;
-(HDCloudSyncStoreRecord *)storeRecord;
-(BOOL)_addSubscriptionRecord:(id)arg1 error:(id*)arg2 ;
-(id)initForZoneIdentifier:(id)arg1 repository:(id)arg2 type:(long long)arg3 ;
-(BOOL)hasOrphanedSequenceRecords;
-(long long)zoneType;
-(HDCloudSyncMasterRecord *)masterRecord;
-(BOOL)hasFutureSchemaRecord;
-(void)setHasFutureSchemaRecord:(BOOL)arg1 ;
-(CKShare *)zoneShare;
-(void)setZoneShare:(CKShare *)arg1 ;
-(BOOL)validatedForSharing;
-(void)setValidatedForSharing:(BOOL)arg1 ;
-(HDCloudSyncDataUploadRequestRecord *)dataUploadRequestRecord;
@end

