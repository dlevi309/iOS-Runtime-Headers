/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphNode.h>

@class NSDate, NSSet;

@interface PGGraphMusicSessionNode : PGGraphNode

@property (nonatomic,readonly) NSDate * localStartDate; 
@property (nonatomic,readonly) NSDate * localEndDate; 
@property (nonatomic,readonly) NSSet * momentNodes; 
@property (nonatomic,readonly) NSSet * trackNodes; 
+(id)musicSessionDateSortDescriptors;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(NSSet *)momentNodes;
-(NSSet *)trackNodes;
-(void)enumerateMusicTrackNodesUsingBlock:(/*^block*/id)arg1 ;
@end

