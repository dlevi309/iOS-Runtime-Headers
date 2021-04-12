/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraph.h>

@interface PGOnDiskGraph : PGGraph
+(Class)concreteGraphClass;
-(void)uncacheHighlightNodesForHighlightUUIDs:(id)arg1 ;
-(id)insertPersonNodeForPerson:(id)arg1 ;
-(id)yearNodeIdentifiersForMomentNodeIdentifiers:(id)arg1 ;
-(id)allMomentUUIDs;
-(id)momentNodesInSameCityAsMomentNodes:(id)arg1 ;
-(id)cachedHighlightNodeForHighlightUUID:(id)arg1 ;
-(id)cachedMomentNodeForMomentUUID:(id)arg1 ;
-(void)uncacheHighlightNodeForHighlightUUID:(id)arg1 checkExistence:(BOOL)arg2 ;
-(id)sortedSocialGroupNodeForMomentNodeIdentifiers:(id)arg1 ;
-(id)personNodesForPersonIdentifiers:(id)arg1 ;
-(id)momentNodeIdentifiersForYearNodeIdentifiers:(id)arg1 ;
-(void)uncacheMomentNodesForMomentUUIDs:(id)arg1 ;
-(id)personNodeForPersonLocalIdentifier:(id)arg1 ;
-(void)cacheMomentNode:(id)arg1 forMomentUUID:(id)arg2 checkUnicity:(BOOL)arg3 ;
-(void)cacheNodesWithProgressBlock:(/*^block*/id)arg1 ;
-(void)uncacheMomentNodeForMomentUUID:(id)arg1 checkExistence:(BOOL)arg2 ;
-(id)dateNodeForLocalDate:(id)arg1 ;
-(void)cacheHighlightNode:(id)arg1 forHighlightUUID:(id)arg2 checkUnicity:(BOOL)arg3 ;
@end

