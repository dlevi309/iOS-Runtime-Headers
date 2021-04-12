/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DASDaemon.framework/DASDaemon
*/


@class NSMutableArray;

@interface _DASLogConditionHistory : NSObject {

	NSMutableArray* _conditions;
	NSMutableArray* _intervals;

}

@property (nonatomic,retain) NSMutableArray * conditions;              //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,retain) NSMutableArray * intervals;               //@synthesize intervals=_intervals - In the implementation block
+(id)condition:(id)arg1 fromDate:(id)arg2 ;
-(NSMutableArray *)conditions;
-(void)setConditions:(NSMutableArray *)arg1 ;
-(id)description;
-(NSMutableArray *)intervals;
-(void)setIntervals:(NSMutableArray *)arg1 ;
-(id)initWithCondition:(id)arg1 fromDate:(id)arg2 ;
-(void)addCondition:(id)arg1 atDate:(id)arg2 ;
-(id)idealIntervals;
@end

