/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@protocol VNClusteringReadOnly
@required
+(id)getRepresentativenessForFaces:(id)arg1 error:(id*)arg2;
+(id)clustererModelFileNamesFromState:(id)arg1 storedInPath:(id)arg2 error:(id*)arg3;
+(id)nonGroupedGroupID;
-(id)getClusterState:(id*)arg1;
-(id)getClusteredIds:(id*)arg1;
-(id)suggestionsForClusterIdsWithFlags:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3;
-(id)getLevel1ClusteredIdsGroupedByLevel0ClustersForFaceId:(id)arg1 error:(id*)arg2;
-(id)getDistanceBetweenLevel0ClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id*)arg3;
-(id)getDistanceBetweenLevel1Clusters:(id)arg1 error:(id*)arg2;
-(id)getAllClustersFromStateAndReturnError:(id*)arg1;
-(id)getClustersForClusterIds:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(id)getDistances:(id)arg1 to:(id)arg2 error:(id*)arg3;
-(id)maximumFaceIdInModelAndReturnError:(id*)arg1;

@end

