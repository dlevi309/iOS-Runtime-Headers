/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@class NSMutableArray;

@interface MAPaths : NSObject {

	NSMutableArray* _paths;

}
+(id)paths;
+(id)pathsWithPaths:(id)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)count;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(void)setPaths:(id)arg1 ;
-(void)addPath:(id)arg1 ;
-(id)pathAtIndex:(unsigned long long)arg1 ;
-(void)removeAllPaths;
-(id)graphRepresentationWithStrictNodes:(BOOL)arg1 strictEdges:(BOOL)arg2 ;
-(id)uniqueNodesForLabel:(id)arg1 ;
-(id)uniqueEdgesForLabel:(id)arg1 ;
@end

