/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GraphVisualizer.framework/GraphVisualizer
*/


@class GVNode, NSMutableArray;

@interface GVEdge : NSObject {

	BOOL reversed;
	GVNode* from;
	GVNode* to;
	NSMutableArray* dummies;

}

@property (nonatomic,retain) NSMutableArray * dummies; 
@property (assign,nonatomic) BOOL reversed; 
@property (nonatomic,readonly) GVNode * from; 
@property (nonatomic,readonly) GVNode * to; 
-(id)init;
-(void)dealloc;
-(id)description;
-(GVNode *)to;
-(GVNode *)from;
-(void)setReversed:(BOOL)arg1 ;
-(BOOL)reversed;
-(id)initWithFromNode:(id)arg1 to:(id)arg2 ;
-(NSMutableArray *)dummies;
-(void)setDummies:(NSMutableArray *)arg1 ;
@end

