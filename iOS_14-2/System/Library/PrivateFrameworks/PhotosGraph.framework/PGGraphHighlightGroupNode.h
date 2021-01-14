/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphHighlightNode.h>

@class PGGraphHighlightTypeNode, NSArray;

@interface PGGraphHighlightGroupNode : PGGraphHighlightNode

@property (readonly) PGGraphHighlightTypeNode * typeNode; 
@property (readonly) NSArray * highlightNodes; 
@property (readonly) NSArray * sortedHighlightNodes; 
+(id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2 ;
+(id)pathFromTargetNodeDomain:(unsigned short)arg1 ;
+(id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2 ;
+(id)pathToTargetNodeDomain:(unsigned short)arg1 ;
+(id)pathFromMoment;
+(id)pathToMoment;
-(BOOL)isShortTrip;
-(BOOL)isPartOfTrip;
-(BOOL)isLongTrip;
-(BOOL)isTrip;
-(void)eventEnumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isAggregation;
-(BOOL)isPartOfShortTrip;
-(BOOL)isPartOfAggregation;
-(void)enumerateHighlightNodesUsingBlock:(/*^block*/id)arg1 ;
-(PGGraphHighlightTypeNode *)typeNode;
-(NSArray *)highlightNodes;
-(NSArray *)sortedHighlightNodes;
-(BOOL)isPartOfLongTrip;
-(id)momentNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)label;
@end

