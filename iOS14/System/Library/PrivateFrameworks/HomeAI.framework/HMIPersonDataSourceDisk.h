/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIPersonManagerDataSource.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURL, NSUUID, NSString;

@interface HMIPersonDataSourceDisk : HMFObject <HMIPersonManagerDataSource, HMFLogging> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSURL* _sourceURL;
	NSUUID* _homeUUID;
	NSUUID* _sourceUUID;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSURL * sourceURL;                                   //@synthesize sourceURL=_sourceURL - In the implementation block
@property (readonly) NSUUID * homeUUID;                                   //@synthesize homeUUID=_homeUUID - In the implementation block
@property (readonly) NSUUID * sourceUUID;                                 //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)getStoragePath;
-(NSUUID *)homeUUID;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSURL *)sourceURL;
-(void)performCloudPullWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchPersonsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllPersonsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllPersonFaceCropsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllFaceprintsWithCompletion:(/*^block*/id)arg1 ;
-(NSUUID *)sourceUUID;
-(void)addFaceprints:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithHomeUUID:(id)arg1 sourceUUID:(id)arg2 error:(id*)arg3 ;
@end

