/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADPredicate.h>
#import <libobjc.A.dylib/EKPredicateEvaluating.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/EKDefaultPropertiesLoading.h>

@class CADPredicate, NSDate, NSString;

@interface CADEventTimeWindowPredicate : CADPredicate <EKPredicateEvaluating, NSSecureCoding, EKDefaultPropertiesLoading> {

	BOOL _mustStartInInterval;
	CADPredicate* _wrappedPredicate;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) CADPredicate * wrappedPredicate;              //@synthesize wrappedPredicate=_wrappedPredicate - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                             //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) BOOL mustStartInInterval;                     //@synthesize mustStartInInterval=_mustStartInInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)ekPredicateEvaluateWithObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)predicateFormat;
-(id)defaultPropertiesToLoad;
-(CADPredicate *)wrappedPredicate;
-(BOOL)mustStartInInterval;
-(BOOL)shouldLoadDefaultProperties;
-(id)initWithPredicate:(id)arg1 limitWithStartDate:(id)arg2 endDate:(id)arg3 mustStartInInterval:(BOOL)arg4 ;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
@end

