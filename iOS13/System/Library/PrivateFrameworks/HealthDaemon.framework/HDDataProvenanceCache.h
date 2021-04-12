/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDProfile, HDDataProvenanceManager, HDSQLiteDatabase, HDEntityEncoder, NSMutableDictionary;

@interface HDDataProvenanceCache : NSObject {

	HDProfile* _profile;
	HDDataProvenanceManager* _provenanceManager;
	HDSQLiteDatabase* _database;
	HDEntityEncoder* _sourceEncoder;
	NSMutableDictionary* _provenanceByID;
	NSMutableDictionary* _codableSourcesByID;
	NSMutableDictionary* _deviceUUIDBytesByID;
	NSMutableDictionary* _sourceByPersistentIDCache;
	NSMutableDictionary* _sourceRevisionByDataProvenanceIDCache;
	NSMutableDictionary* _sourceRevisionsDictionaryBySourceCache;
	NSMutableDictionary* _deviceByPersistentIDCache;
	NSMutableDictionary* _codableObjectCollectionsByProvenance;

}

@property (nonatomic,retain) HDProfile * profile;                                                       //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HDDataProvenanceManager * provenanceManager;                               //@synthesize provenanceManager=_provenanceManager - In the implementation block
@property (nonatomic,retain) HDSQLiteDatabase * database;                                               //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) HDEntityEncoder * sourceEncoder;                                           //@synthesize sourceEncoder=_sourceEncoder - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * provenanceByID;                                      //@synthesize provenanceByID=_provenanceByID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * codableSourcesByID;                                  //@synthesize codableSourcesByID=_codableSourcesByID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deviceUUIDBytesByID;                                 //@synthesize deviceUUIDBytesByID=_deviceUUIDBytesByID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sourceByPersistentIDCache;                           //@synthesize sourceByPersistentIDCache=_sourceByPersistentIDCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sourceRevisionByDataProvenanceIDCache;               //@synthesize sourceRevisionByDataProvenanceIDCache=_sourceRevisionByDataProvenanceIDCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sourceRevisionsDictionaryBySourceCache;              //@synthesize sourceRevisionsDictionaryBySourceCache=_sourceRevisionsDictionaryBySourceCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deviceByPersistentIDCache;                           //@synthesize deviceByPersistentIDCache=_deviceByPersistentIDCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * codableObjectCollectionsByProvenance;                //@synthesize codableObjectCollectionsByProvenance=_codableObjectCollectionsByProvenance - In the implementation block
-(void)setDatabase:(HDSQLiteDatabase *)arg1 ;
-(HDSQLiteDatabase *)database;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)codableSourceWithProvenance:(id)arg1 ;
-(id)deviceUUIDBytesWithProvenance:(id)arg1 ;
-(id)codableProvenanceWithProvenance:(id)arg1 ;
-(id)_sourceForPersistentID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(id)initWithProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 ;
-(id)provenanceWithID:(id)arg1 ;
-(id)codableObjectCollectionForProvenance:(id)arg1 ;
-(void)clearCodableObjectCollections;
-(id)allCodableObjectCollections;
-(id)sourceRevisionForProvenanceID:(id)arg1 dataProvenance:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
-(id)deviceForPersistentID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(HDDataProvenanceManager *)provenanceManager;
-(void)setProvenanceManager:(HDDataProvenanceManager *)arg1 ;
-(HDEntityEncoder *)sourceEncoder;
-(void)setSourceEncoder:(HDEntityEncoder *)arg1 ;
-(NSMutableDictionary *)provenanceByID;
-(void)setProvenanceByID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)codableSourcesByID;
-(void)setCodableSourcesByID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)deviceUUIDBytesByID;
-(void)setDeviceUUIDBytesByID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sourceByPersistentIDCache;
-(void)setSourceByPersistentIDCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sourceRevisionByDataProvenanceIDCache;
-(void)setSourceRevisionByDataProvenanceIDCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sourceRevisionsDictionaryBySourceCache;
-(void)setSourceRevisionsDictionaryBySourceCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)deviceByPersistentIDCache;
-(void)setDeviceByPersistentIDCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)codableObjectCollectionsByProvenance;
-(void)setCodableObjectCollectionsByProvenance:(NSMutableDictionary *)arg1 ;
@end

