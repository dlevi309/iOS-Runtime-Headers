/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSString, PGGraphCalendarUnitNode, PGGraphSeasonNode;

@interface PGGraphDateNode : PGGraphOptimizedNode {

	NSString* _name;

}

@property (readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (readonly) PGGraphCalendarUnitNode * dayNode; 
@property (readonly) PGGraphCalendarUnitNode * monthNode; 
@property (readonly) PGGraphCalendarUnitNode * yearNode; 
@property (readonly) PGGraphCalendarUnitNode * weekOfYearNode; 
@property (readonly) PGGraphCalendarUnitNode * weekOfMonthNode; 
@property (nonatomic,readonly) PGGraphSeasonNode * seasonNode; 
@property (readonly) long long day; 
@property (readonly) long long month; 
@property (readonly) long long year; 
+(id)filter;
+(id)dateNodeForDayNode:(id)arg1 monthNode:(id)arg2 yearNode:(id)arg3 ;
+(id)yearOfDate;
+(id)seasonOfDate;
+(id)momentOfDate;
-(long long)day;
-(id)associatedNodesForRemoval;
-(long long)year;
-(long long)month;
-(id)init;
-(PGGraphCalendarUnitNode *)weekOfYearNode;
-(id)localDate;
-(id)lastWeekDateNodes;
-(unsigned short)domain;
-(PGGraphSeasonNode *)seasonNode;
-(PGGraphCalendarUnitNode *)weekOfMonthNode;
-(NSString *)name;
-(PGGraphCalendarUnitNode *)yearNode;
-(id)description;
-(PGGraphCalendarUnitNode *)monthNode;
-(void)setLocalProperties:(id)arg1 ;
-(void)enumerateHolidayNodesUsingBlock:(/*^block*/id)arg1 ;
-(PGGraphCalendarUnitNode *)dayNode;
-(id)propertyDictionary;
-(id)momentNodes;
-(id)sameWeekDateNodes;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
@end

