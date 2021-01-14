/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphPersonNode.h>

@interface PGGraphMeNode : PGGraphPersonNode
+(id)filter;
-(id)_relationshipLabelForRelationship:(unsigned long long)arg1 ;
-(void)_enumerateRelationshipWithLabel:(id)arg1 matchingQuery:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)relationshipEdgesToPersonNode:(id)arg1 matchingQuery:(unsigned long long)arg2 ;
-(BOOL)_status:(unsigned long long)arg1 fitsQuery:(unsigned long long)arg2 ;
-(void)enumeratePersonNodesWithRelationship:(unsigned long long)arg1 matchingQuery:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateSocialGroupNodesWithRelationship:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateSocialGroupNodesForRelationshipLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)label;
-(void)updateLocalIdentifier:(id)arg1 isFavorite:(BOOL)arg2 isUserCreated:(BOOL)arg3 ;
@end

