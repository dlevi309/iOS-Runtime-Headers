/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSDictionary, NSString, CKRecordZoneID, NSArray;

@interface FCCKZoneSchema : NSObject {

	NSDictionary* _recordSchemasByClientType;
	NSDictionary* _recordSchemasByServerType;
	NSDictionary* _staticServerRecordNamesByClientName;
	NSDictionary* _staticClientRecordNamesByServerName;
	BOOL _isDefaultZone;
	BOOL _supportsRecordNameEncryption;
	BOOL _supportsRecordFieldEncryption;
	BOOL _shouldUseZoneWidePCS;
	BOOL _shouldUseSecureContainer;
	NSString* _clientZoneName;
	NSString* _serverZoneName;
	CKRecordZoneID* _clientZoneID;
	CKRecordZoneID* _serverZoneID;
	NSArray* _staticRecordNamesEligibleForMigration;

}

@property (nonatomic,copy,readonly) NSString * clientZoneName;                                    //@synthesize clientZoneName=_clientZoneName - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverZoneName;                                    //@synthesize serverZoneName=_serverZoneName - In the implementation block
@property (nonatomic,copy,readonly) CKRecordZoneID * clientZoneID;                                //@synthesize clientZoneID=_clientZoneID - In the implementation block
@property (nonatomic,copy,readonly) CKRecordZoneID * serverZoneID;                                //@synthesize serverZoneID=_serverZoneID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allClientRecordTypes; 
@property (nonatomic,copy,readonly) NSString * onlyClientRecordType; 
@property (nonatomic,copy,readonly) NSString * onlyServerRecordType; 
@property (nonatomic,readonly) BOOL isDefaultZone;                                                //@synthesize isDefaultZone=_isDefaultZone - In the implementation block
@property (nonatomic,copy,readonly) NSArray * staticRecordNamesEligibleForMigration;              //@synthesize staticRecordNamesEligibleForMigration=_staticRecordNamesEligibleForMigration - In the implementation block
@property (nonatomic,readonly) BOOL supportsRecordNameEncryption;                                 //@synthesize supportsRecordNameEncryption=_supportsRecordNameEncryption - In the implementation block
@property (nonatomic,readonly) BOOL supportsRecordFieldEncryption;                                //@synthesize supportsRecordFieldEncryption=_supportsRecordFieldEncryption - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseZoneWidePCS;                                         //@synthesize shouldUseZoneWidePCS=_shouldUseZoneWidePCS - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseSecureContainer;                                     //@synthesize shouldUseSecureContainer=_shouldUseSecureContainer - In the implementation block
+(id)defaultZoneWithRecords:(id)arg1 staticRecordNames:(id)arg2 staticRecordNameMigrationBlacklist:(id)arg3 shouldUseSecureContainer:(BOOL)arg4 ;
+(id)zoneWithClientName:(id)arg1 serverName:(id)arg2 records:(id)arg3 staticRecordNames:(id)arg4 shouldEncryptRecordNames:(BOOL)arg5 shouldUseZoneWidePCS:(BOOL)arg6 shouldUseSecureContainer:(BOOL)arg7 ;
+(id)zoneWithClientName:(id)arg1 serverName:(id)arg2 records:(id)arg3 ;
-(id)init;
-(id)schemaForRecordWithServerType:(id)arg1 ;
-(BOOL)isKnownClientRecordName:(id)arg1 ;
-(BOOL)isDefaultZone;
-(BOOL)shouldUseSecureContainer;
-(CKRecordZoneID *)serverZoneID;
-(BOOL)supportsRecordFieldEncryption;
-(NSString *)clientZoneName;
-(NSArray *)staticRecordNamesEligibleForMigration;
-(BOOL)supportsRecordNameEncryption;
-(id)clientRecordNameForServerRecordName:(id)arg1 ;
-(BOOL)isKnownServerRecordName:(id)arg1 ;
-(BOOL)shouldDecryptServerRecordName:(id)arg1 ;
-(void)enumerateRecordSchemasWithBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldUseZoneWidePCS;
-(BOOL)shouldEncryptClientRecordName:(id)arg1 ;
-(CKRecordZoneID *)clientZoneID;
-(NSString *)serverZoneName;
-(NSArray *)allClientRecordTypes;
-(id)schemaForRecordWithClientType:(id)arg1 ;
-(id)initWithClientZoneName:(id)arg1 serverZoneName:(id)arg2 recordSchemas:(id)arg3 staticRecordNames:(id)arg4 staticRecordNameMigrationBlacklist:(id)arg5 shouldEncryptRecordNames:(BOOL)arg6 shouldUseZoneWidePCS:(BOOL)arg7 shouldUseSecureContainer:(BOOL)arg8 ;
-(NSString *)onlyClientRecordType;
-(NSString *)onlyServerRecordType;
-(id)serverRecordNameForClientRecordName:(id)arg1 ;
@end
