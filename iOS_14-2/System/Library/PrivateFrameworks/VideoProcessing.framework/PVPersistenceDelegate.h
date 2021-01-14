/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol PVPersistenceDelegate <NSObject>
@property (assign,nonatomic) unsigned faceAlgorithmUmbrellaVersion; 
@property (assign,nonatomic) unsigned sceneAlgorithmUmbrellaVersion; 
@required
-(void)buildPersonsWithFaceClusterer:(id)arg1 keyFaceUpdateBlock:(/*^block*/id)arg2 canceler:(id)arg3 context:(id)arg4 extendTimeoutBlock:(/*^block*/id)arg5;
-(void)setSceneAlgorithmUmbrellaVersion:(unsigned)arg1;
-(id)facesFromAsset:(id)arg1;
-(unsigned)faceAlgorithmUmbrellaVersion;
-(BOOL)deleteEmptyGroupsAndReturnError:(id*)arg1;
-(id)faceAssociatedWithFaceCrop:(id)arg1;
-(void)logPVDebugMessage:(id)arg1;
-(BOOL)persistGeneratedFaceCrops:(id)arg1 error:(id*)arg2;
-(BOOL)ungroupFaceClusterSequenceNumbers:(id)arg1 batchSizeForUnclusteringFaces:(unsigned long long)arg2 canceler:(id)arg3 error:(id*)arg4;
-(id)suggestedPersonLocalIdentifierForPersonLocalIdentifier:(id)arg1 faceClusterer:(id)arg2 canceler:(id)arg3 context:(id)arg4 error:(id*)arg5;
-(id)unclusteredClusteringEligibleFaceLocalIdentifiers:(id*)arg1;
-(id)dirtyFaceCropsWithLimit:(unsigned long long)arg1;
-(BOOL)cleanupUngroupedFacesWithNonZeroClusterSequenceNumbersWithCanceler:(id)arg1 error:(id*)arg2;
-(BOOL)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(BOOL)arg2 canceler:(id)arg3 error:(id*)arg4;
-(unsigned long long)countOfClusteringEligibleFaces;
-(unsigned long long)countOfFaces;
-(void)logPVErrorMessage:(id)arg1;
-(BOOL)recordNeedToPersonBuildOnFaceGroupContainingFace:(id)arg1 error:(id*)arg2;
-(unsigned long long)countOfUnclusteredClusteringEligibleFaces;
-(id)invalidFaceClusterSequenceNumbersInClusterSequenceNumbers:(id)arg1 canceler:(id)arg2 error:(id*)arg3;
-(BOOL)clearDirtyStateOnFaceCrops:(id)arg1 error:(id*)arg2;
-(id)groupedClusterSequenceNumbersOfFacesInFaceGroupsOfMinimumSize:(unsigned long long)arg1 error:(id*)arg2;
-(BOOL)needsPersonBuilding;
-(void)setFaceAlgorithmUmbrellaVersion:(unsigned)arg1;
-(BOOL)persistChangesToAlgorithmicFaceGroups:(id)arg1 faceCSNByLocalIdentifierForNewlyClusteredFaces:(id)arg2 faceCSNsOfUnclusteredFaces:(id)arg3 localIdentifiersOfUnclusteredFaces:(id)arg4 persistenceCompletionBlock:(/*^block*/id)arg5 canceler:(id)arg6 error:(id*)arg7;
-(void)logPVInfoMessage:(id)arg1;
-(BOOL)resetLibraryClustersWithCanceler:(id)arg1 error:(id*)arg2;
-(id)deterministicallyOrderedFaceIdentifiersWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned)arg2;
-(id)facesForClusteringWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned)arg2 groupingIdentifiers:(id)arg3;
-(unsigned)sceneAlgorithmUmbrellaVersion;
-(BOOL)persistFaces:(id)arg1 deleteFaces:(id)arg2 forAsset:(id)arg3 persistedFaces:(id*)arg4 error:(id*)arg5;
-(BOOL)cleanupGroupedFacesWithClusterSequenceNumberSetToZeroWithCanceler:(id)arg1 error:(id*)arg2;
-(id)associateFace:(id)arg1 withFaceCrop:(id)arg2 error:(id*)arg3;
-(unsigned long long)countOfClusteredFaces;
-(BOOL)updateFaceprint:(id)arg1 ofPersistedFace:(id)arg2 error:(id*)arg3;
-(void)logPVWarningMessage:(id)arg1;

@end

