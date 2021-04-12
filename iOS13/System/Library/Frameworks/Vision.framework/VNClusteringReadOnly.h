/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@protocol VNClusteringReadOnly
@required
+(id)getRepresentativenessForFaces:(id)arg1 error:(id*)arg2;
+(id)clustererModelFileNamesFromState:(id)arg1 storedInPath:(id)arg2 error:(id*)arg3;
+(id)nonGroupedGroupID;
-(id)suggestionsForClusterIdsWithFlags:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3;
-(id)getClusterState:(id*)arg1;
-(id)getClusteredIds:(id*)arg1;
-(id)getLevel1ClusteredIdsGroupedByLevel0ClustersForFaceId:(id)arg1 error:(id*)arg2;
-(id)getDistanceBetweenLevel0ClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id*)arg3;
-(id)getDistanceBetweenLevel1Clusters:(id)arg1 error:(id*)arg2;
-(id)getAllClustersFromStateAndReturnError:(id*)arg1;
-(id)getClustersForClusterIds:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(id)getDistances:(id)arg1 to:(id)arg2 error:(id*)arg3;
-(id)maximumFaceIdInModelAndReturnError:(id*)arg1;

@end

