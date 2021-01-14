/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@protocol PVPhotoLibraryProtocol <NSObject>
@required
-(float)pv_faceProcessingProgress;
-(id)pv_fetchInvalidCandidatePersonsForPerson:(id)arg1;
-(id)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1;
-(id)pv_fetchFacesWithLocalIdentifiers:(id)arg1;
-(id)pv_fetchFacesForPerson:(id)arg1;
-(id)pv_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2;
-(id)pv_fetchFacesForFaceGroup:(id)arg1;
-(id)pv_fetchMomentsWithLocalIdentifiers:(id)arg1;
-(id)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1;
-(id)pv_fetchMomentsForPerson:(id)arg1;
-(id)pv_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1;
-(id)pv_fetchAssetsWithLocalIdentifiers:(id)arg1;
-(id)pv_fetchAssetsInMoment:(id)arg1;
-(id)pv_fetchAssetsForPerson:(id)arg1;
-(id)pv_fetchAssetsForFaceGroup:(id)arg1;
-(id)pv_fetchFaceGroups;
-(id)pv_fetchFaceGroupsForPerson:(id)arg1;
-(id)pv_fetchInvalidAssetIdentifiersForCommonComparison;
-(id)pv_lastAssetDate;
-(id)pv_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2;
-(id)pv_fetchMoments;
-(BOOL)pv_performChangesAndWait:(/*^block*/id)arg1 error:(id*)arg2;
-(id)pv_persistentStorageDirectoryURL;
-(id)pv_fetchPersonsWithLocalIdentifiers:(id)arg1;
-(id)pv_fetchPersonsWithType:(unsigned long long)arg1;
-(id)pv_fetchPersonsInMoment:(id)arg1;
-(id)pv_fetchCandidatePersonsForPerson:(id)arg1;
-(unsigned long long)pv_numberOfFacesWithFaceprints;

@end

