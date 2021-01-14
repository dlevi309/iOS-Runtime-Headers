/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)ingestPostRestoreMigrationDataForConsentedDevices:(id)arg1 ;
+(id)migrationDataPreRestoreForConsentedDevices:(id)arg1 ;
+(id)sharedMigrator;
-(void)beginMigrationWithDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSArray *)devicesExpectedToBeMigratableAfterRestore;
-(BOOL)migrationIsAvailable;
-(NRDevice *)migratingDevice;
-(NSArray *)migratableDevicesRequiringConsent;
-(id)lastMigrationRequestPhoneName;
-(id)migrationConsentRequestData;
-(void)isPhoneReadyToMigrateDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setMigrationConsented:(BOOL)arg1 forDevice:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)beginMigrationWithDevice:(id)arg1 passcode:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)devicesFromMigrationConsentRequestData:(id)arg1 ;
-(void)enterPreMigrationMode;
-(void)setMigrationConsented:(BOOL)arg1 forDeviceID:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(NSArray *)migratableDevices;
@end

