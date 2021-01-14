/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)predicateFormat;
-(NSDate *)endDate;
-(id)defaultPropertiesToLoad;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 limitWithStartDate:(id)arg2 endDate:(id)arg3 mustStartInInterval:(BOOL)arg4 ;
-(BOOL)shouldLoadDefaultProperties;
-(id)initWithCoder:(id)arg1 ;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(CADPredicate *)wrappedPredicate;
-(BOOL)mustStartInInterval;
@end

