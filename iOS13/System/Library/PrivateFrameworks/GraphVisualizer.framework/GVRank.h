/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GraphVisualizer.framework/GraphVisualizer
*/


#import <GraphVisualizer/GraphVisualizer-Structs.h>
@class NSMutableArray;

@interface GVRank : NSObject {

	NSMutableArray* nodes;
	double separation;
	GVRank* prev;
	GVRank* next;

}

@property (assign,nonatomic) GVRank * prev; 
@property (assign,nonatomic) GVRank * next; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double height; 
-(void)dealloc;
-(GVRank *)next;
-(double)width;
-(double)height;
-(void)addNode:(id)arg1 ;
-(id)nodes;
-(GVRank *)prev;
-(void)removeNode:(id)arg1 ;
-(void)setNext:(GVRank *)arg1 ;
-(void)setPrev:(GVRank *)arg1 ;
-(id)initWithSeparation:(CGSize)arg1 ;
-(id)neighborsOfNode:(id)arg1 ;
-(void)sortByIndex;
-(void)exchangeNodeAtIndex:(unsigned long long)arg1 withNodeAtIndex:(unsigned long long)arg2 ;
-(void)buildNodeIterators;
-(unsigned long long)inCrossings;
-(unsigned long long)outCrossings;
-(CGSize)sizeForDummy;
-(void)centerNodesWithRespectoTo:(id)arg1 ;
-(void)centerNode:(id)arg1 at:(double)arg2 ;
@end

