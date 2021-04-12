/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMIHomePersonManagerDataSource <HMIPersonManagerDataSource>
@optional
-(void)associateFaceCropsWithUUIDs:(id)arg1 toPersonWithUUID:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(void)fetchAllUnassociatedFaceCropsWithCompletion:(/*^block*/id)arg1;
-(void)removePersonsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeFaceCropsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeFaceprintsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchSettingsWithCompletion:(/*^block*/id)arg1;
-(void)addFaceprints:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addFaceCrops:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addPersons:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addPersonFaceCrops:(id)arg1 completion:(/*^block*/id)arg2;

@end

