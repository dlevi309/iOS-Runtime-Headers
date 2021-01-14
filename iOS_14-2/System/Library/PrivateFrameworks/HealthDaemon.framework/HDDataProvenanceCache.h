/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDProfile, HDDataProvenanceManager, HDDatabaseTransaction, HDEntityEncoder, NSMutableDictionary;

@interface HDDataProvenanceCache : NSObject {

	HDProfile* _profile;
	HDDataProvenanceManager* _provenanceManager;
	HDDatabaseTransaction* _transaction;
	HDEntityEncoder* _sourceEncoder;
	NSMutableDictionary* _provenanceByID;
	NSMutableDictionary* _codableSourcesByID;
	NSMutableDictionary* _deviceUUIDBytesByID;
	NSMutableDictionary* _sourceByPersistentIDCache;
	NSMutableDictionary* _sourceRevisionByDataProvenanceIDCache;
	NSMutableDictionary* _sourceRevisionsDictionaryBySourceCache;
	NSMutableDictionary* _deviceByPersistentIDCache;
	NSMutableDictionary* _contributorByReferenceCache;
	NSMutableDictionary* _codableObjectCollectionsByProvenance;

}

@property (nonatomic,retain) HDProfile * profile;                                                       //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HDDataProvenanceManager * provenanceManager;                               //@synthesize provenanceManager=_provenanceManager - In the implementation block
@property (nonatomic,retain) HDDatabaseTransaction * transaction;                                       //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) HDEntityEncoder * sourceEncoder;                                           //@synthesize sourceEncoder=_sourceEncoder - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * provenanceByID;                                      //@synthesize provenanceByID=_provenanceByID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * codableSourcesByID;                                  //@synthesize codableSourcesByID=_codableSourcesByID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deviceUUIDBytesByID;                                 //@synthesize deviceUUIDBytesByID=_deviceUUIDBytesByID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sourceByPersistentIDCache;                           //@synthesize sourceByPersistentIDCache=_sourceByPersistentIDCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sourceRevisionByDataProvenanceIDCache;               //@synthesize sourceRevisionByDataProvenanceIDCache=_sourceRevisionByDataProvenanceIDCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sourceRevisionsDictionaryBySourceCache;              //@synthesize sourceRevisionsDictionaryBySourceCache=_sourceRevisionsDictionaryBySourceCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deviceByPersistentIDCache;                           //@synthesize deviceByPersistentIDCache=_deviceByPersistentIDCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * contributorByReferenceCache;                         //@synthesize contributorByReferenceCache=_contributorByReferenceCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * codableObjectCollectionsByProvenance;                //@synthesize codableObjectCollectionsByProvenance=_codableObjectCollectionsByProvenance - In the implementation block
-(void)setProfile:(HDProfile *)arg1 ;
-(HDEntityEncoder *)sourceEncoder;
-(void)setDeviceUUIDBytesByID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)deviceByPersistentIDCache;
-(void)setTransaction:(HDDatabaseTransaction *)arg1 ;
-(HDDataProvenanceManager *)provenanceManager;
-(HDDatabaseTransaction *)transaction;
-(void)setContributorByReferenceCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)codableSourcesByID;
-(id)codableObjectCollectionForProvenance:(id)arg1 ;
-(NSMutableDictionary *)codableObjectCollectionsByProvenance;
-(id)deviceUUIDBytesWithProvenance:(id)arg1 ;
-(id)_sourceForPersistentID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(NSMutableDictionary *)deviceUUIDBytesByID;
-(id)sourceRevisionForProvenanceID:(id)arg1 dataProvenance:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
-(void)setProvenanceByID:(NSMutableDictionary *)arg1 ;
-(void)setCodableObjectCollectionsByProvenance:(NSMutableDictionary *)arg1 ;
-(id)allCodableObjectCollections;
-(void)clearCodableObjectCollections;
-(void)setSourceEncoder:(HDEntityEncoder *)arg1 ;
-(void)setCodableSourcesByID:(NSMutableDictionary *)arg1 ;
-(HDProfile *)profile;
-(NSMutableDictionary *)contributorByReferenceCache;
-(id)contributorForReference:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(NSMutableDictionary *)provenanceByID;
-(id)initWithProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 ;
-(void)setSourceRevisionsDictionaryBySourceCache:(NSMutableDictionary *)arg1 ;
-(void)setProvenanceManager:(HDDataProvenanceManager *)arg1 ;
-(id)_provenanceWithSyncableContributor:(id)arg1 error:(id*)arg2 ;
-(id)codableProvenanceWithProvenance:(id)arg1 ;
-(NSMutableDictionary *)sourceRevisionsDictionaryBySourceCache;
-(NSMutableDictionary *)sourceByPersistentIDCache;
-(id)provenanceWithID:(id)arg1 ;
-(void)setDeviceByPersistentIDCache:(NSMutableDictionary *)arg1 ;
-(void)setSourceByPersistentIDCache:(NSMutableDictionary *)arg1 ;
-(void)setSourceRevisionByDataProvenanceIDCache:(NSMutableDictionary *)arg1 ;
-(id)codableSourceWithProvenance:(id)arg1 ;
-(id)deviceForPersistentID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(NSMutableDictionary *)sourceRevisionByDataProvenanceIDCache;
@end

