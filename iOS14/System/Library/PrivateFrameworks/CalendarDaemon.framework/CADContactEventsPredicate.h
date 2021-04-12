/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/EKPredicate.h>
#import <libobjc.A.dylib/EKPredicateEvaluating.h>

@class NSSet;

@interface CADContactEventsPredicate : EKPredicate <EKPredicateEvaluating> {

	NSSet* _contactEmailAddresses;
	NSSet* _contactNameComponents;

}

@property (retain) NSSet * contactEmailAddresses;              //@synthesize contactEmailAddresses=_contactEmailAddresses - In the implementation block
@property (retain) NSSet * contactNameComponents;              //@synthesize contactNameComponents=_contactNameComponents - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)ekPredicateEvaluateWithObject:(id)arg1 ;
-(id)predicateFormat;
-(id)defaultPropertiesToLoad;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCalendarIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 contacts:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setContactEmailAddresses:(NSSet *)arg1 ;
-(void)setContactNameComponents:(NSSet *)arg1 ;
-(NSSet *)contactEmailAddresses;
-(NSSet *)contactNameComponents;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)_isCandidate:(void*)arg1 allowAllDayEvent:(BOOL)arg2 ;
@end

