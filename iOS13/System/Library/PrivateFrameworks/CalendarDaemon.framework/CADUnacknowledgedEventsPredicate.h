/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADPredicate.h>
#import <libobjc.A.dylib/EKPredicateEvaluating.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CADUnacknowledgedEventsPredicate : CADPredicate <EKPredicateEvaluating, NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(id)predicate;
-(BOOL)ekPredicateEvaluateWithObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)predicateFormat;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
@end

