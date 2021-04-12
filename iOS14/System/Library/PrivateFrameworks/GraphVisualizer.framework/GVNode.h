/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)h;
-(GVNode *)next;
-(void)setOrigin:(CGPoint)arg1 ;
-(double)x;
-(void)setRank:(long long)arg1 ;
-(double)w;
-(long long)index;
-(void)setX:(double)arg1 ;
-(CGPoint)origin;
-(void)setY:(double)arg1 ;
-(CGPoint)center;
-(double)cy;
-(id)init;
-(double)y;
-(void)setH:(double)arg1 ;
-(CGSize)size;
-(void)setIndex:(long long)arg1 ;
-(CGRect)frame;
-(void)setSize:(CGSize)arg1 ;
-(void)setCx:(double)arg1 ;
-(void)setCy:(double)arg1 ;
-(void)setPrev:(GVNode *)arg1 ;
-(id)description;
-(void)setFrame:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setNext:(GVNode *)arg1 ;
-(void)setW:(double)arg1 ;
-(long long)rank;
-(GVNode *)prev;
-(NSMutableOrderedSet *)inNodes;
-(double)cx;
-(void)dealloc;
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

