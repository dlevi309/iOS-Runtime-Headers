/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@protocol VNClustererModelQuerying
@required
+(id)clustererModelFileNamesFromState:(id)arg1 storedInPath:(id)arg2 error:(id*)arg3;
+(id)representativenessForFaces:(id)arg1 error:(id*)arg2;
+(id)distanceBetweenFacesWithFaceprint:(id)arg1 andFaceprint:(id)arg2 error:(id*)arg3;
+(id)distanceBetweenFacesWithFaceObservation:(id)arg1 andFaceObservation:(id)arg2 error:(id*)arg3;
+(id)nonGroupedGroupID;
-(id)getDistances:(id)arg1 to:(id)arg2 error:(id*)arg3;
-(id)maximumFaceIdInModelAndReturnError:(id*)arg1;
-(id)allClusteredFaceIdsAndReturnError:(id*)arg1;
-(id)clusteredFaceIdsForClusterContainingFaceId:(id)arg1 error:(id*)arg2;
-(id)getAllClustersAndReturnError:(id*)arg1;
-(id)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:(id)arg1 error:(id*)arg2;
-(id)distanceBetweenLevel1Clusters:(id)arg1 error:(id*)arg2;
-(id)distanceBetweenClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id*)arg3;
-(id)suggestionsForClustersWithFaceIds:(id)arg1 affinityThreshold:(float)arg2 canceller:(id)arg3 error:(id*)arg4;

@end

