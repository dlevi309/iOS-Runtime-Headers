/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HMIHomeTask.h>

@protocol HMIFaceClassifier, HMIHomePersonManagerDataSource;
@class HMIGreedyClustering, NSUUID, HMIPersonsModelManager, HMIClusteringTaskSummary, NSDate;

@interface HMIHomePersonClusteringTask : HMIHomeTask {

	HMIGreedyClustering* _clusterer;
	id<HMIFaceClassifier> _faceClassifier;
	id<HMIHomePersonManagerDataSource> _dataSource;
	NSUUID* _sourceUUID;
	HMIPersonsModelManager* _personsModelManager;
	HMIClusteringTaskSummary* _summary;
	NSDate* _startTime;

}

@property (readonly) HMIClusteringTaskSummary * summary;                         //@synthesize summary=_summary - In the implementation block
@property (readonly) NSDate * startTime;                                         //@synthesize startTime=_startTime - In the implementation block
@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) NSUUID * sourceUUID;                                        //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (readonly) HMIPersonsModelManager * personsModelManager;               //@synthesize personsModelManager=_personsModelManager - In the implementation block
+(id)logCategory;
-(void)finish;
-(id<HMIHomePersonManagerDataSource>)dataSource;
-(HMIClusteringTaskSummary *)summary;
-(void)main;
-(NSUUID *)sourceUUID;
-(NSDate *)startTime;
-(id)initWithTaskID:(int)arg1 homeUUID:(id)arg2 dataSource:(id)arg3 sourceUUID:(id)arg4 personsModelManager:(id)arg5 error:(id*)arg6 ;
-(void)_stageZero_expireUnnamedPersons;
-(HMIPersonsModelManager *)personsModelManager;
-(id)personCreatedDateFromFaceCrops:(id)arg1 ;
-(void)_stageOne_fetchFaceCrops;
-(void)_stageTwo_fetchFaceprints:(id)arg1 ;
-(void)_stageThree_generateFaceprintsForFaceCrops:(id)arg1 existingFaceprints:(id)arg2 ;
-(void)_stageFour_clusterFaceprints:(id)arg1 ;
-(void)_stageFive_addPersons:(id)arg1 clusterMapping:(id)arg2 faceprints:(id)arg3 ;
-(void)_stageSix_associateFaceCropsWithClusterMapping:(id)arg1 faceprints:(id)arg2 ;
@end

