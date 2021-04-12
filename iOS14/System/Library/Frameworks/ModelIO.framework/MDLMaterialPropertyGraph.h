/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)connections;
-(void)evaluate;
-(NSArray *)nodes;
-(id)initWithNodes:(id)arg1 connections:(id)arg2 ;
@end

