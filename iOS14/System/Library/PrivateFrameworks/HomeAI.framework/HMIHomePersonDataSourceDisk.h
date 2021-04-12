/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HMIPersonDataSourceDisk.h>
#import <libobjc.A.dylib/HMIHomePersonManagerDataSource.h>

@class NSString;

@interface HMIHomePersonDataSourceDisk : HMIPersonDataSourceDisk <HMIHomePersonManagerDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)fetchAllUnassociatedFaceCropsWithCompletion:(/*^block*/id)arg1 ;
-(void)removePersonsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFaceCropsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFaceprintsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchSettingsWithCompletion:(/*^block*/id)arg1 ;
-(void)addFaceCrops:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addPersons:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addPersonFaceCrops:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

