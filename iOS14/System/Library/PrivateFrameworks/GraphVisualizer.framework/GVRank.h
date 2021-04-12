/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(GVRank *)next;
-(double)width;
-(void)removeNode:(id)arg1 ;
-(double)height;
-(void)setPrev:(GVRank *)arg1 ;
-(void)setNext:(GVRank *)arg1 ;
-(GVRank *)prev;
-(id)nodes;
-(void)dealloc;
-(void)addNode:(id)arg1 ;
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

