/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSMutableSet, NSSet;

@interface PGGraphUpdateRelatedDetails : NSObject {

	NSMutableSet* _accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons;
	NSMutableSet* _accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons;

}

@property (nonatomic,retain) NSMutableSet * accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons;              //@synthesize accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons=_accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons - In the implementation block
@property (nonatomic,retain) NSMutableSet * accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons;              //@synthesize accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons=_accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons - In the implementation block
@property (nonatomic,readonly) NSSet * identifiersForMomentRelatedToUpdatedPersons; 
@property (nonatomic,readonly) NSSet * identifiersForMomentRelatedToDeletedPersons; 
-(id)init;
-(id)_momentNodesFromPersonNodes:(id)arg1 ;
-(NSSet *)identifiersForMomentRelatedToUpdatedPersons;
-(NSSet *)identifiersForMomentRelatedToDeletedPersons;
-(void)accumulateDetailsForUpdatedPersonNode:(id)arg1 personChange:(id)arg2 ;
-(void)accumulateDetailsForDeletedPersonNodes:(id)arg1 ;
-(void)_accumulateMomentIdentifiersInto:(id)arg1 forPersonNodes:(id)arg2 ;
-(NSMutableSet *)accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons;
-(void)setAccumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons:(NSMutableSet *)arg1 ;
-(NSMutableSet *)accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons;
-(void)setAccumulatedIdentifiersForMomentNodesRelatedToDeletedPersons:(NSMutableSet *)arg1 ;
@end

