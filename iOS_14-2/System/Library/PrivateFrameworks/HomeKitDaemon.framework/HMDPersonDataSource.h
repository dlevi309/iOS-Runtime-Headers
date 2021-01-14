/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDPersonDataSource <NSObject>
@property (getter=isDataAvailable,readonly) BOOL dataAvailable; 
@property (getter=isCurrentDeviceAvailableResident,readonly) BOOL currentDeviceAvailableResident; 
@property (copy,readonly) id<HMDPersonManagerSettings> settings; 
@required
-(id<HMDPersonManagerSettings>)settings;
-(BOOL)isDataAvailable;
-(void)enumeratePersonsUsingBlock:(/*^block*/id)arg1;
-(id)personsWithUUIDs:(id)arg1;
-(void)enumeratePersonFaceCropsUsingBlock:(/*^block*/id)arg1;
-(id)faceCropsForPersonsWithUUIDs:(id)arg1;
-(void)enumerateFaceprintsUsingBlock:(/*^block*/id)arg1;
-(id)faceprintsForFaceCropsWithUUIDs:(id)arg1;
-(id)performCloudPull;
-(void)handleFaceMisclassificationForFaceCropData:(id)arg1 personUUID:(id)arg2;
-(BOOL)isCurrentDeviceAvailableResident;
-(id)updateSettingsUsingMessagePayload:(id)arg1;
-(id)addOrUpdateFaceCrops:(id)arg1;
-(id)faceCropUUIDsForPersonWithUUID:(id)arg1;
-(id)removeFaceprintsWithUUIDs:(id)arg1;
-(void)enumerateFaceCropsUsingBlock:(/*^block*/id)arg1;
-(void)enumerateUnassociatedFaceCropsUsingBlock:(/*^block*/id)arg1;
-(id)faceCropsWithUUIDs:(id)arg1;
-(id)addOrUpdatePersons:(id)arg1;
-(id)addOrUpdateFaceprints:(id)arg1;
-(id)associateFaceCropsWithUUIDs:(id)arg1 toPersonWithUUID:(id)arg2;
-(id)disassociateFaceCropsWithUUIDs:(id)arg1;
-(id)removePersonsWithUUIDs:(id)arg1;
-(id)removeFaceCropsWithUUIDs:(id)arg1;

@end

