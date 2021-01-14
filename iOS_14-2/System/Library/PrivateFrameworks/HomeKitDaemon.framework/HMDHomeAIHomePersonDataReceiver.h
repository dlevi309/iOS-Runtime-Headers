/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDHomeAIPersonDataReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMIHomePersonManagerDataSource.h>

@class HMIHomePersonManager, NSString;

@interface HMDHomeAIHomePersonDataReceiver : HMDHomeAIPersonDataReceiver <HMFLogging, HMIHomePersonManagerDataSource> {

	HMIHomePersonManager* _homePersonManager;

}

@property (readonly) HMIHomePersonManager * homePersonManager;              //@synthesize homePersonManager=_homePersonManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)logIdentifier;
-(void)fetchAllUnassociatedFaceCropsWithCompletion:(/*^block*/id)arg1 ;
-(void)removePersonsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFaceCropsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFaceprintsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HMIHomePersonManager *)homePersonManager;
-(void)fetchSettingsWithCompletion:(/*^block*/id)arg1 ;
-(void)addFaceprints:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleUpdatedUnassociatedFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)handleUpdatedSettings:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)handleFaceMisclassificationForFaceCropData:(id)arg1 personUUID:(id)arg2 ;
-(id)initWithPersonManagerUUID:(id)arg1 homeUUID:(id)arg2 workQueue:(id)arg3 ;
-(id)initWithHomePersonManager:(id)arg1 workQueue:(id)arg2 ;
-(void)addFaceCrops:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addPersons:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addPersonFaceCrops:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
