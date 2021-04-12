/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSDictionary, NSString, NSArray;

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
	NSArray* _staticRecordNamesEligibleForMigration;

}

@property (nonatomic,copy,readonly) NSString * clientZoneName;                                    //@synthesize clientZoneName=_clientZoneName - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverZoneName;                                    //@synthesize serverZoneName=_serverZoneName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allClientRecordTypes; 
@property (nonatomic,readonly) BOOL isDefaultZone;                                                //@synthesize isDefaultZone=_isDefaultZone - In the implementation block
@property (nonatomic,copy,readonly) NSArray * staticRecordNamesEligibleForMigration;              //@synthesize staticRecordNamesEligibleForMigration=_staticRecordNamesEligibleForMigration - In the implementation block
@property (nonatomic,readonly) BOOL supportsRecordNameEncryption;                                 //@synthesize supportsRecordNameEncryption=_supportsRecordNameEncryption - In the implementation block
@property (nonatomic,readonly) BOOL supportsRecordFieldEncryption;                                //@synthesize supportsRecordFieldEncryption=_supportsRecordFieldEncryption - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseZoneWidePCS;                                         //@synthesize shouldUseZoneWidePCS=_shouldUseZoneWidePCS - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseSecureContainer;                                     //@synthesize shouldUseSecureContainer=_shouldUseSecureContainer - In the implementation block
+(id)zoneWithClientName:(id)arg1 serverName:(id)arg2 records:(id)arg3 staticRecordNames:(id)arg4 shouldEncryptRecordNames:(BOOL)arg5 shouldUseZoneWidePCS:(BOOL)arg6 shouldUseSecureContainer:(BOOL)arg7 ;
+(id)defaultZoneWithRecords:(id)arg1 staticRecordNames:(id)arg2 staticRecordNameMigrationBlacklist:(id)arg3 shouldUseSecureContainer:(BOOL)arg4 ;
+(id)zoneWithClientName:(id)arg1 serverName:(id)arg2 records:(id)arg3 ;
-(id)init;
-(NSString *)clientZoneName;
-(NSString *)serverZoneName;
-(id)schemaForRecordWithClientType:(id)arg1 ;
-(BOOL)shouldUseZoneWidePCS;
-(BOOL)shouldUseSecureContainer;
-(BOOL)supportsRecordNameEncryption;
-(id)schemaForRecordWithServerType:(id)arg1 ;
-(BOOL)shouldEncryptClientRecordName:(id)arg1 ;
-(id)serverRecordNameForClientRecordName:(id)arg1 ;
-(BOOL)shouldDecryptServerRecordName:(id)arg1 ;
-(id)clientRecordNameForServerRecordName:(id)arg1 ;
-(BOOL)supportsRecordFieldEncryption;
-(NSArray *)staticRecordNamesEligibleForMigration;
-(BOOL)isDefaultZone;
-(BOOL)isKnownClientRecordName:(id)arg1 ;
-(id)initWithClientZoneName:(id)arg1 serverZoneName:(id)arg2 recordSchemas:(id)arg3 staticRecordNames:(id)arg4 staticRecordNameMigrationBlacklist:(id)arg5 shouldEncryptRecordNames:(BOOL)arg6 shouldUseZoneWidePCS:(BOOL)arg7 shouldUseSecureContainer:(BOOL)arg8 ;
-(NSArray *)allClientRecordTypes;
-(BOOL)isKnownServerRecordName:(id)arg1 ;
-(void)enumerateRecordSchemasWithBlock:(/*^block*/id)arg1 ;
@end

