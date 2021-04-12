/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphHighlightNode.h>

@class PGGraphNode, NSArray;

@interface PGGraphHighlightGroupNode : PGGraphHighlightNode

@property (readonly) PGGraphNode * typeNode; 
@property (readonly) NSArray * highlightNodes; 
@property (readonly) NSArray * sortedHighlightNodes; 
+(id)pathFromMoment;
+(id)pathToMoment;
+(id)pathFromTargetNodeDomain:(unsigned short)arg1 ;
+(id)pathToTargetNodeDomain:(unsigned short)arg1 ;
+(id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2 ;
+(id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2 ;
-(BOOL)isAggregation;
-(PGGraphNode *)typeNode;
-(BOOL)isTrip;
-(BOOL)isLongTrip;
-(BOOL)isShortTrip;
-(BOOL)isPartOfTrip;
-(BOOL)isPartOfLongTrip;
-(BOOL)isPartOfShortTrip;
-(BOOL)isPartOfAggregation;
-(void)enumerateHighlightNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)momentNodes;
-(NSArray *)highlightNodes;
-(NSArray *)sortedHighlightNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)eventEnumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
@end

