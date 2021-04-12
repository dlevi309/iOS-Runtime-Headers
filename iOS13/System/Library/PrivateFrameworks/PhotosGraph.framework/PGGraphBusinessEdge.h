/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphEdge.h>

@class NSDate;

@interface PGGraphBusinessEdge : PGGraphEdge

@property (nonatomic,readonly) BOOL hasRoutineInfo; 
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(BOOL)hasRoutineInfo;
@end

