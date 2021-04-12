/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphNode.h>

@class PGGraphSeasonNode;

@interface PGGraphDateNode : PGGraphNode {

	PGGraphSeasonNode* _seasonNode;

}

@property (nonatomic,readonly) PGGraphSeasonNode * seasonNode;              //@synthesize seasonNode=_seasonNode - In the implementation block
@property (readonly) long long day; 
@property (readonly) long long month; 
@property (readonly) long long year; 
+(id)dateNodeForDayNode:(id)arg1 monthNode:(id)arg2 yearNode:(id)arg3 ;
-(long long)year;
-(long long)month;
-(long long)day;
-(id)associatedNodesForRemoval;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)localDate;
-(void)enumerateHolidayNodesUsingBlock:(/*^block*/id)arg1 ;
-(PGGraphSeasonNode *)seasonNode;
-(id)sameWeekDateNodes;
-(id)lastWeekDateNodes;
@end

