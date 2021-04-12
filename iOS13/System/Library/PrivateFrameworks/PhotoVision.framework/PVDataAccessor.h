/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


@protocol PVPersistenceDelegate;
#import <PhotoVision/PhotoVision-Structs.h>
@interface PVDataAccessor : NSObject {

	unsigned _faceAlgorithmUmbrellaVersion;
	unsigned _sceneAlgorithmUmbrellaVersion;
	id<PVPersistenceDelegate> _persistenceDelegate;

}

@property (nonatomic,retain) id<PVPersistenceDelegate> persistenceDelegate;              //@synthesize persistenceDelegate=_persistenceDelegate - In the implementation block
@property (assign,nonatomic) unsigned faceAlgorithmUmbrellaVersion;                      //@synthesize faceAlgorithmUmbrellaVersion=_faceAlgorithmUmbrellaVersion - In the implementation block
@property (assign,nonatomic) unsigned sceneAlgorithmUmbrellaVersion;                     //@synthesize sceneAlgorithmUmbrellaVersion=_sceneAlgorithmUmbrellaVersion - In the implementation block
-(unsigned long long)countOfFaces;
-(unsigned long long)countOfClusteringEligibleFaces;
-(unsigned long long)countOfClusteredFaces;
-(unsigned long long)countOfClusteredFacesWithClusterSequenceNumbersInRange:(NSRange)arg1 ;
-(id)unclusteredClusteringEligibleFaceLocalIdentifiers:(id*)arg1 ;
-(id)facesForClusteringWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned)arg2 excludeClustered:(BOOL)arg3 groupingIdentifiers:(id)arg4 ;
-(id)deterministicallyOrderedFaceIdentifiersWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned)arg2 ;
-(id)unverifiedVisibleFacesFromFaceGroupContainingFacesWithClusterSequenceNumbers:(id)arg1 withFaceprintVersion:(unsigned)arg2 ;
-(BOOL)resetClusterSequenceNumberOfFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)invalidFaceClusterSequenceNumbersInClusterSequenceNumbers:(id)arg1 canceler:(id)arg2 error:(id*)arg3 ;
-(BOOL)persistGeneratedFaceCrops:(id)arg1 error:(id*)arg2 ;
-(id)personWithFaceLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)personsForLocalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)facesForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)rejectedFacesForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)rejectedFaceLocalIdentifiersForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)rejectedFaceClusterSequenceNumbersForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countOfAlgorithmicFaceGroups;
-(id)allAlgorithmicFaceGroups:(id*)arg1 ;
-(id)groupedClusterSequenceNumbersOfFacesInFaceGroupsOfMinimumSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)localIdentifiersOfFacesAlgorithmicallyGroupedWithFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)facesAlgorithmicallyGroupedWithFacesWithClusterSequenceNumbers:(id)arg1 includeSingletons:(BOOL)arg2 error:(id*)arg3 ;
-(id)localIdentifiersOfKeyFacesFromAlgorithmicGroupsContainingFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)keyFacesFromAlgorithmicGroupsContainingFacesWithClusterSequenceNumbers:(id)arg1 includeSingletons:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)removeAlgorithmicallyGroupedFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetLibraryClustersWithCanceler:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteEmptyGroupsAndReturnError:(id*)arg1 ;
-(unsigned)faceAlgorithmUmbrellaVersion;
-(void)setFaceAlgorithmUmbrellaVersion:(unsigned)arg1 ;
-(unsigned)sceneAlgorithmUmbrellaVersion;
-(void)setSceneAlgorithmUmbrellaVersion:(unsigned)arg1 ;
-(id)activeFaceprintsByFaceLocalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)personForLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id<PVPersistenceDelegate>)persistenceDelegate;
-(void)setPersistenceDelegate:(id<PVPersistenceDelegate>)arg1 ;
@end

