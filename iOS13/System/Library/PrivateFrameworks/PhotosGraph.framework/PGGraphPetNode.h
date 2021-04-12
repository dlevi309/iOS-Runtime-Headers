/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphNode.h>

@class NSSet;

@interface PGGraphPetNode : PGGraphNode

@property (nonatomic,readonly) NSSet * momentNodes; 
@property (nonatomic,readonly) NSSet * ownerNodes; 
-(NSSet *)momentNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSSet *)ownerNodes;
-(void)enumerateOwnerNodesUsingBlock:(/*^block*/id)arg1 ;
@end

