/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GraphVisualizer.framework/GraphVisualizer
*/


#import <GraphVisualizer/GraphVisualizer-Structs.h>
@class NSMutableOrderedSet;

@interface GVNode : NSObject {

	double x;
	double y;
	double w;
	double h;
	NSMutableOrderedSet* inNodes;
	NSMutableOrderedSet* outNodes;
	long long rank;
	long long index;
	GVNode* prev;
	GVNode* next;
	unsigned long long inPriority;
	unsigned long long outPriority;

}

@property (assign,nonatomic) double x; 
@property (assign,nonatomic) double y; 
@property (assign,nonatomic) double w; 
@property (assign,nonatomic) double h; 
@property (assign,nonatomic) double cx; 
@property (assign,nonatomic) double cy; 
@property (nonatomic,retain) NSMutableOrderedSet * inNodes; 
@property (nonatomic,retain) NSMutableOrderedSet * outNodes; 
@property (readonly) unsigned long long inDegree; 
@property (readonly) unsigned long long outDegree; 
@property (assign,nonatomic) long long rank; 
@property (assign,nonatomic) long long index; 
@property (assign,nonatomic) GVNode * prev; 
@property (assign,nonatomic) GVNode * next; 
@property (assign,nonatomic) unsigned long long inPriority; 
@property (assign,nonatomic) unsigned long long outPriority; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) CGPoint origin; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) CGSize size; 
-(id)init;
-(void)dealloc;
-(id)description;
-(CGSize)size;
-(long long)index;
-(GVNode *)next;
-(CGPoint)origin;
-(void)setSize:(CGSize)arg1 ;
-(CGRect)frame;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setRank:(long long)arg1 ;
-(long long)rank;
-(GVNode *)prev;
-(void)setIndex:(long long)arg1 ;
-(double)x;
-(double)y;
-(void)setFrame:(CGRect)arg1 ;
-(void)setOrigin:(CGPoint)arg1 ;
-(void)setX:(double)arg1 ;
-(void)setY:(double)arg1 ;
-(void)setW:(double)arg1 ;
-(void)setH:(double)arg1 ;
-(double)w;
-(double)h;
-(double)cx;
-(void)setCx:(double)arg1 ;
-(double)cy;
-(void)setCy:(double)arg1 ;
-(void)setNext:(GVNode *)arg1 ;
-(void)setPrev:(GVNode *)arg1 ;
-(NSMutableOrderedSet *)inNodes;
-(NSMutableOrderedSet *)outNodes;
-(unsigned long long)inDegree;
-(unsigned long long)outDegree;
-(BOOL)hasEdgeFrom:(id)arg1 ;
-(BOOL)hasEdgeTo:(id)arg1 ;
-(void)addEdgeFrom:(id)arg1 ;
-(void)addEdgeTo:(id)arg1 ;
-(void)removeEdgeFrom:(id)arg1 ;
-(void)removeEdgeTo:(id)arg1 ;
-(void)computePriority;
-(void)traversePostorder:(int)arg1 withCallback:(/*^block*/id)arg2 stopper:(/*^block*/id)arg3 randomize:(BOOL)arg4 ;
-(void)traversePreorder:(int)arg1 withCallback:(/*^block*/id)arg2 randomize:(BOOL)arg3 ;
-(void)setInNodes:(NSMutableOrderedSet *)arg1 ;
-(void)setOutNodes:(NSMutableOrderedSet *)arg1 ;
-(unsigned long long)inPriority;
-(void)setInPriority:(unsigned long long)arg1 ;
-(unsigned long long)outPriority;
-(void)setOutPriority:(unsigned long long)arg1 ;
@end

