/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIHomePersonManagerDataSource.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMHomePersonManager, NSObject, NSString;

@interface HMIHomePersonDataSourceHomeKit : HMFObject <HMIHomePersonManagerDataSource, HMFLogging> {

	HMHomePersonManager* _homePersonManager;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (retain) HMHomePersonManager * homePersonManager;               //@synthesize homePersonManager=_homePersonManager - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)logIdentifier;
-(void)performCloudPullWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchPersonsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllPersonsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllPersonFaceCropsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAllUnassociatedFaceCropsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllFaceprintsWithCompletion:(/*^block*/id)arg1 ;
-(void)associateFaceCropsWithUUIDs:(id)arg1 toPersonWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removePersonsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFaceCropsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFaceprintsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HMHomePersonManager *)homePersonManager;
-(void)fetchSettingsWithCompletion:(/*^block*/id)arg1 ;
-(void)addFaceprints:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addFaceCrops:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addPersons:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addPersonFaceCrops:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHomePersonManager:(HMHomePersonManager *)arg1 ;
-(id)initWithHMHomePersonManager:(id)arg1 ;
@end

