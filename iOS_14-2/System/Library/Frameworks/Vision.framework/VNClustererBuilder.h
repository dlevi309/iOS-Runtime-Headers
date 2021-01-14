/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <libobjc.A.dylib/VNClustererModelBuilding.h>
#import <libobjc.A.dylib/VNClustererModelQuerying.h>

@protocol VNClustererModelQueryingVNClustererModelBuilding;
@interface VNClustererBuilder : NSObject <VNClustererModelBuilding, VNClustererModelQuerying> {

	id<VNClustererModelQuerying><VNClustererModelBuilding> _context;

}
+(id)clustererModelFileNamesFromState:(id)arg1 storedInPath:(id)arg2 error:(id*)arg3 ;
+(id)clustererBuilderWithOptions:(id)arg1 error:(id*)arg2 ;
+(id)representativenessForFaces:(id)arg1 error:(id*)arg2 ;
+(id)distanceBetweenFacesWithFaceprint:(id)arg1 andFaceprint:(id)arg2 error:(id*)arg3 ;
+(id)distanceBetweenFacesWithFaceObservation:(id)arg1 andFaceObservation:(id)arg2 error:(id*)arg3 ;
+(id)nonGroupedGroupID;
-(id)vcp_updateModelByAddingFaces:(id)arg1 ;
-(id)getDistances:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(id)maximumFaceIdInModelAndReturnError:(id*)arg1 ;
-(id)updateModelByAddingFaces:(id)arg1 andRemovingFaces:(id)arg2 canceller:(id)arg3 error:(id*)arg4 ;
-(BOOL)resetModelState:(id)arg1 error:(id*)arg2 ;
-(id)allClusteredFaceIdsAndReturnError:(id*)arg1 ;
-(id)clusteredFaceIdsForClusterContainingFaceId:(id)arg1 error:(id*)arg2 ;
-(id)getAllClustersAndReturnError:(id*)arg1 ;
-(id)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:(id)arg1 error:(id*)arg2 ;
-(id)distanceBetweenLevel1Clusters:(id)arg1 error:(id*)arg2 ;
-(id)distanceBetweenClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id*)arg3 ;
-(id)suggestionsForClustersWithFaceIds:(id)arg1 affinityThreshold:(float)arg2 canceller:(id)arg3 error:(id*)arg4 ;
-(id)updateModelByAddingFaces:(id)arg1 canceller:(id)arg2 error:(id*)arg3 ;
-(id)updateModelByAddingFaces:(id)arg1 withGroupingIdentifiers:(id)arg2 canceller:(id)arg3 error:(id*)arg4 ;
-(id)updateModelByRemovingFaces:(id)arg1 canceller:(id)arg2 error:(id*)arg3 ;
-(id)saveAndReturnCurrentModelState:(id*)arg1 ;
-(id)updateModelByAddingFaces:(id)arg1 withGroupingIdentifiers:(id)arg2 andRemovingFaces:(id)arg3 canceller:(id)arg4 error:(id*)arg5 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 babyThreshold:(float)arg5 kidThreshold:(float)arg6 requestRevision:(unsigned long long)arg7 error:(id*)arg8 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 babyThreshold:(float)arg6 kidThreshold:(float)arg7 requestRevision:(unsigned long long)arg8 error:(id*)arg9 ;
@end
