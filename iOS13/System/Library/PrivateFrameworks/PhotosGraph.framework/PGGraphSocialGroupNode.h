/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphNode.h>

@class NSSet;

@interface PGGraphSocialGroupNode : PGGraphNode

@property (nonatomic,readonly) unsigned long long rank; 
@property (nonatomic,readonly) unsigned long long numberOfMomentNodes; 
@property (nonatomic,readonly) NSSet * momentNodes; 
@property (nonatomic,readonly) NSSet * personNodes; 
+(id)weightSortDescriptors;
+(id)sortedSocialGroupNodeForMomentNodes:(id)arg1 ;
-(unsigned long long)rank;
-(NSSet *)momentNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSSet *)personNodes;
-(unsigned long long)numberOfMomentNodes;
-(void)enumeratePersonNodesUsingBlock:(/*^block*/id)arg1 ;
@end

