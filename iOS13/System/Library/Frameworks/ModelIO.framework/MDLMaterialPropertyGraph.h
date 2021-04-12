/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/MDLMaterialPropertyNode.h>

@class NSArray, NSMutableArray;

@interface MDLMaterialPropertyGraph : MDLMaterialPropertyNode {

	NSArray* _nodes;
	NSArray* _connections;
	NSMutableArray* _finalNodes;

}

@property (nonatomic,readonly) NSArray * nodes;                    //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,readonly) NSArray * connections;              //@synthesize connections=_connections - In the implementation block
-(NSArray *)nodes;
-(NSArray *)connections;
-(id)initWithNodes:(id)arg1 connections:(id)arg2 ;
-(void)evaluate;
@end

