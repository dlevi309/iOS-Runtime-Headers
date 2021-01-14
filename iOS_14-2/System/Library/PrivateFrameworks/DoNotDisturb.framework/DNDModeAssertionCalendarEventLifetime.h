/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DNDModeAssertionLifetime.h>

@class NSString, NSDate;

@interface DNDModeAssertionCalendarEventLifetime : DNDModeAssertionLifetime {

	BOOL _onlyDuringEvent;
	NSString* _eventUniqueID;
	NSDate* _occurrenceDate;

}

@property (nonatomic,copy,readonly) NSString * eventUniqueID;                              //@synthesize eventUniqueID=_eventUniqueID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * occurrenceDate;                               //@synthesize occurrenceDate=_occurrenceDate - In the implementation block
@property (getter=isOnlyDuringEvent,nonatomic,readonly) BOOL onlyDuringEvent;              //@synthesize onlyDuringEvent=_onlyDuringEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)occurrenceDate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)lifetimeType;
-(id)initWithEventUniqueID:(id)arg1 occurrenceDate:(id)arg2 onlyDuringEvent:(BOOL)arg3 ;
-(NSString *)eventUniqueID;
-(BOOL)isOnlyDuringEvent;
@end

