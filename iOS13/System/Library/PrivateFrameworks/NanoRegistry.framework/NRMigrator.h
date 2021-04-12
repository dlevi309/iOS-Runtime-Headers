/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@class NRDevice, NSArray;

@interface NRMigrator : NSObject {

	BOOL _migrating;
	NRDevice* _migratingDevice;

}

@property (nonatomic,readonly) BOOL migrationIsAvailable; 
@property (nonatomic,retain,readonly) NSArray * devicesExpectedToBeMigratableAfterRestore; 
@property (nonatomic,retain,readonly) NSArray * migratableDevicesRequiringConsent; 
@property (nonatomic,retain,readonly) NSArray * migratableDevices; 
@property (nonatomic,retain,readonly) NRDevice * migratingDevice;                                       //@synthesize migratingDevice=_migratingDevice - In the implementation block
+(id)sharedMigrator;
+(void)ingestPostRestoreMigrationDataForConsentedDevices:(id)arg1 ;
+(id)migrationDataPreRestoreForConsentedDevices:(id)arg1 ;
-(id)migrationConsentRequestData;
-(id)devicesFromMigrationConsentRequestData:(id)arg1 ;
-(NSArray *)migratableDevicesRequiringConsent;
-(NSArray *)migratableDevices;
-(void)setMigrationConsented:(BOOL)arg1 forDevice:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)setMigrationConsented:(BOOL)arg1 forDeviceID:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)beginMigrationWithDevice:(id)arg1 passcode:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)beginMigrationWithDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)lastMigrationRequestPhoneName;
-(void)isPhoneReadyToMigrateDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)UDIDUUID;
-(id)shortenStringByCompleteUnicodeCharactersToReduceStorageSpace:(id)arg1 ;
-(id)_SHA256WithString:(id)arg1 ;
-(NSArray *)devicesExpectedToBeMigratableAfterRestore;
-(id)packMigrationProtobufs:(id)arg1 ;
-(id)compressMigrationProtobuf:(id)arg1 ;
-(void)shrinkMigrationProtobufs:(id)arg1 ;
-(BOOL)migrationIsAvailable;
-(void)enterPreMigrationMode;
-(NRDevice *)migratingDevice;
@end

