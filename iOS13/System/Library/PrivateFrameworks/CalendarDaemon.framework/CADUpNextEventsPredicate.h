/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/EKPredicate.h>
#import <libobjc.A.dylib/EKPredicateEvaluating.h>

@interface CADUpNextEventsPredicate : EKPredicate <EKPredicateEvaluating> {

	double _startDateRestrictionThreshold;

}

@property (assign,nonatomic) double startDateRestrictionThreshold;              //@synthesize startDateRestrictionThreshold=_startDateRestrictionThreshold - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_descriptionForOccurrence:(CalEventOccurrenceRef)arg1 ofEvent:(void*)arg2 ;
+(BOOL)_occurrencePassesFilter:(CalEventOccurrenceRef)arg1 event:(void*)arg2 ;
-(BOOL)ekPredicateEvaluateWithObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)predicateFormat;
-(id)defaultPropertiesToLoad;
-(id)initWithCalendarIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)setStartDateRestrictionThreshold:(double)arg1 ;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(double)startDateRestrictionThreshold;
@end

