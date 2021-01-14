/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIExternalPersonManagerDataSource.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMPhotosPersonManager, NSObject, NSString;

@interface HMIExternalPersonDataSourceHomeKit : HMFObject <HMIExternalPersonManagerDataSource, HMFLogging> {

	HMPhotosPersonManager* _photosPersonManager;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (retain) HMPhotosPersonManager * photosPersonManager;              //@synthesize photosPersonManager=_photosPersonManager - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                 //@synthesize workQueue=_workQueue - In the implementation block
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
-(void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllFaceprintsWithCompletion:(/*^block*/id)arg1 ;
-(void)removeFaceprintsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchSettingsWithCompletion:(/*^block*/id)arg1 ;
-(HMPhotosPersonManager *)photosPersonManager;
-(void)setPhotosPersonManager:(HMPhotosPersonManager *)arg1 ;
-(void)addFaceprints:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithHMPhotosPersonManager:(id)arg1 ;
@end

