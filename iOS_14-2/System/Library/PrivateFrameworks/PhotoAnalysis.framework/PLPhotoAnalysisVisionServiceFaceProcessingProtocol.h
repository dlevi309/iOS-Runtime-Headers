/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@protocol PLPhotoAnalysisVisionServiceFaceProcessingProtocol
@required
-(void)validateClusterCacheWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestSuggestedMePersonIdentifierWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)processPersonsWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)resetFaceClusteringStateWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)suggestPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5;
-(void)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)resetFaceClassificationModelWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)faceClusteringInformation:(unsigned long long)arg1 withContext:(id)arg2 reply:(/*^block*/id)arg3;
-(void)reclusterFacesWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)rebuildPersonsWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestOnDemandFaceCropsForFaceLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(BOOL)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)personPromoterStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2;

@end

