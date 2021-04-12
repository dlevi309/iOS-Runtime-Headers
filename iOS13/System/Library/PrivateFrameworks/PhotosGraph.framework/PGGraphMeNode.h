/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphPersonNode.h>

@interface PGGraphMeNode : PGGraphPersonNode
-(void)enumerateSocialGroupNodesWithRelationship:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateSocialGroupNodesForRelationshipLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_status:(unsigned long long)arg1 fitsQuery:(unsigned long long)arg2 ;
-(void)_enumerateRelationshipWithLabel:(id)arg1 matchingQuery:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_relationshipLabelForRelationship:(unsigned long long)arg1 ;
-(void)enumeratePersonNodesWithRelationship:(unsigned long long)arg1 matchingQuery:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)relationshipEdgesToPersonNode:(id)arg1 matchingQuery:(unsigned long long)arg2 ;
@end

