/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(GVNode *)to;
-(GVNode *)from;
-(void)setReversed:(BOOL)arg1 ;
-(id)init;
-(BOOL)reversed;
-(id)description;
-(NSMutableArray *)dummies;
-(void)dealloc;
-(id)initWithFromNode:(id)arg1 to:(id)arg2 ;
-(void)setDummies:(NSMutableArray *)arg1 ;
@end

