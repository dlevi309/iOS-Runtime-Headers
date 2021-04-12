/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@protocol PLPhotoAnalysisVisionServiceFaceProcessingProtocol
@required
-(void)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)suggestPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5;
-(void)suggestVerifiedPersonLocalIdentifierForFaceWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)suggestVerifiedPersonLocalIdentifierForPersonWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(BOOL)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)resetFaceClusteringStateWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)resetPeopleWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)resetFaceClassificationModelWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)reclusterFacesWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)processPersonsWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)faceClusteringInformation:(unsigned long long)arg1 withContext:(id)arg2 reply:(/*^block*/id)arg3;
-(void)validateClusterCacheWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)faceProcessingStatusForUserInterfaceWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestSuggestedMePersonIdentifierWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)personPromoterStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)rebuildPersonsWithContext:(id)arg1 reply:(/*^block*/id)arg2;

@end

