/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class BWGraph, NSMutableArray, NSString, NSArray;

@interface FigCapturePipeline : NSObject {

	BWGraph* _graph;
	NSMutableArray* _nodes;
	NSString* _name;

}

@property (nonatomic,readonly) NSArray * nodes;              //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BWGraph * graph;              //@synthesize graph=_graph - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(BWGraph *)graph;
-(NSArray *)nodes;
-(BOOL)addNode:(id)arg1 error:(id*)arg2 ;
-(id)initWithGraph:(id)arg1 name:(id)arg2 ;
@end

