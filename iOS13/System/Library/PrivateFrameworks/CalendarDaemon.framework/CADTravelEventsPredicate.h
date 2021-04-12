/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/EKPredicate.h>
#import <libobjc.A.dylib/EKPredicateEvaluating.h>

@interface CADTravelEventsPredicate : EKPredicate <EKPredicateEvaluating>
+(BOOL)supportsSecureCoding;
-(BOOL)ekPredicateEvaluateWithObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)predicateFormat;
-(id)defaultPropertiesToLoad;
-(id)initWithCalendarIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(id)_fetchTravelEventsWithDatabase:(CalDatabase*)arg1 ;
@end

