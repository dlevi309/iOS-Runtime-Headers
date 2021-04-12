/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthKit/HKActivitySummary.h>

@class NSDateComponents;

@interface _ActivityCurrentValueSummary : HKActivitySummary {

	NSDateComponents* _collationDateComponents;
	long long _timeScope;
	double _collatedSummaryCount;

}

@property (assign,nonatomic) long long timeScope;                                     //@synthesize timeScope=_timeScope - In the implementation block
@property (assign,nonatomic) double collatedSummaryCount;                             //@synthesize collatedSummaryCount=_collatedSummaryCount - In the implementation block
@property (nonatomic,retain) NSDateComponents * collationDateComponents;              //@synthesize collationDateComponents=_collationDateComponents - In the implementation block
-(id)dateComponentsForCalendar:(id)arg1 ;
-(void)setTimeScope:(long long)arg1 ;
-(long long)timeScope;
-(double)collatedSummaryCount;
-(void)setCollationDateComponents:(NSDateComponents *)arg1 ;
-(id)_addQuantity:(id)arg1 toQuantity:(id)arg2 ;
-(id)_maxQuantity:(id)arg1 otherQuantity:(id)arg2 ;
-(void)setCollatedSummaryCount:(double)arg1 ;
-(NSDateComponents *)collationDateComponents;
-(id)_divideQuantity:(id)arg1 divisor:(double)arg2 ;
-(id)initWithTimeScope:(long long)arg1 ;
-(void)combineWithActivitySummary:(id)arg1 ;
-(void)finishCollatingSummaryWithGraphView:(id)arg1 ;
@end

