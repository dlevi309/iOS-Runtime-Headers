/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/


@protocol HMIPersonManagerDataSource <NSObject>
@optional
-(void)removeFaceprintsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addFaceprints:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)performCloudPullWithCompletion:(/*^block*/id)arg1;
-(void)fetchPersonsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchAllPersonsWithCompletion:(/*^block*/id)arg1;
-(void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchAllPersonFaceCropsWithCompletion:(/*^block*/id)arg1;
-(void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchAllFaceprintsWithCompletion:(/*^block*/id)arg1;

@end

