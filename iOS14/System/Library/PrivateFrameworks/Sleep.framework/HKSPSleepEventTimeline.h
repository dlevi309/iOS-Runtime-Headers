/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSMutableArray, NSArray;

@interface HKSPSleepEventTimeline : NSObject <NSCopying> {

	NSDate* _originDate;
	NSMutableArray* _orderedOccurrences;
	NSMutableArray* _timelineAdjustments;

}

@property (nonatomic,readonly) NSMutableArray * orderedOccurrences;                //@synthesize orderedOccurrences=_orderedOccurrences - In the implementation block
@property (nonatomic,readonly) NSMutableArray * timelineAdjustments;               //@synthesize timelineAdjustments=_timelineAdjustments - In the implementation block
@property (nonatomic,readonly) NSDate * originDate;                                //@synthesize originDate=_originDate - In the implementation block
@property (nonatomic,readonly) NSArray * resolvedOccurrences; 
@property (nonatomic,readonly) NSArray * events; 
@property (nonatomic,readonly) NSArray * upcomingEvents; 
@property (nonatomic,readonly) NSArray * previousEvents; 
@property (nonatomic,readonly) NSArray * upcomingResolvedOccurrences; 
@property (nonatomic,readonly) NSArray * previousResolvedOccurrences; 
-(NSArray *)upcomingEvents;
-(id)resolvedOccurrenceContainingOrPrecedingDate:(id)arg1 ;
-(NSMutableArray *)timelineAdjustments;
-(id)resolvedOccurrenceOverlappingOccurrence:(id)arg1 ;
-(NSArray *)previousResolvedOccurrences;
-(NSArray *)previousEvents;
-(NSArray *)resolvedOccurrences;
-(void)addResolvedOccurrence:(id)arg1 ;
-(NSArray *)upcomingResolvedOccurrences;
-(NSDate *)originDate;
-(id)initWithOriginDate:(id)arg1 ;
-(id)upcomingResolvedOccurrencesWithinInterval:(double)arg1 ;
-(NSArray *)events;
-(id)resolvedOccurrencePrecedingDate:(id)arg1 ;
-(void)adjustResolvedOccurrence:(id)arg1 withEvent:(id)arg2 ;
-(void)adjustResolvedOccurrence:(id)arg1 removingEventWithIdentifier:(id)arg2 ;
-(void)_adjustedResolvedOccurrence:(id)arg1 adjustmentBlock:(/*^block*/id)arg2 ;
-(NSMutableArray *)orderedOccurrences;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)resolvedOccurrenceContainingDate:(id)arg1 ;
@end

