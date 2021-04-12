/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
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
-(BWGraph *)graph;
-(id)initWithGraph:(id)arg1 name:(id)arg2 ;
-(NSString *)name;
-(BOOL)addNode:(id)arg1 error:(id*)arg2 ;
-(NSArray *)nodes;
-(void)dealloc;
@end

