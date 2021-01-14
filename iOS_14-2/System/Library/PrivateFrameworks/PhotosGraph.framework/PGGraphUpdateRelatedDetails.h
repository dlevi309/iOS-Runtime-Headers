/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)identifiersForMomentRelatedToUpdatedPersons;
-(id)init;
-(void)setAccumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons:(NSMutableSet *)arg1 ;
-(void)_accumulateMomentIdentifiersInto:(id)arg1 forPersonNodes:(id)arg2 ;
-(NSMutableSet *)accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons;
-(void)setAccumulatedIdentifiersForMomentNodesRelatedToDeletedPersons:(NSMutableSet *)arg1 ;
-(NSSet *)identifiersForMomentRelatedToDeletedPersons;
-(NSMutableSet *)accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons;
-(id)_momentNodesFromPersonNodes:(id)arg1 ;
-(void)accumulateDetailsForDeletedPersonNodes:(id)arg1 ;
-(void)accumulateDetailsForUpdatedPersonNode:(id)arg1 personChange:(id)arg2 ;
@end

