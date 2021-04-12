/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/EKPredicate.h>
#import <libobjc.A.dylib/EKPredicateEvaluating.h>
#import <libobjc.A.dylib/EKDefaultPropertiesLoading.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSTimeZone;

@interface CADEventPredicate : EKPredicate <EKPredicateEvaluating, EKDefaultPropertiesLoading, NSSecureCoding> {

	BOOL _shouldLoadProposedTimesInRange;
	BOOL _shouldLoadDefaultProperties;

}

@property (nonatomic,readonly) NSString * eventUUID; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) BOOL shouldLoadProposedTimesInRange;              //@synthesize shouldLoadProposedTimesInRange=_shouldLoadProposedTimesInRange - In the implementation block
@property (nonatomic,readonly) BOOL shouldLoadDefaultProperties;                 //@synthesize shouldLoadDefaultProperties=_shouldLoadDefaultProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(BOOL)arg5 ;
+(id)predicateWithStartDate:(id)arg1 title:(id)arg2 calendars:(id)arg3 ;
+(id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 ;
+(id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5 ;
-(BOOL)ekPredicateEvaluateWithObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(id)predicateFormat;
-(id)defaultPropertiesToLoad;
-(BOOL)shouldLoadDefaultProperties;
-(NSString *)eventUUID;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(BOOL)arg5 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5 ;
-(id)initWithStartDate:(id)arg1 title:(id)arg2 calendars:(id)arg3 ;
-(BOOL)shouldLoadProposedTimesInRange;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
@end

