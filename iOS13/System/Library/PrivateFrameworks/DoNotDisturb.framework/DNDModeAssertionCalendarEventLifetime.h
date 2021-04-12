/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)occurrenceDate;
-(unsigned long long)lifetimeType;
-(id)initWithEventUniqueID:(id)arg1 occurrenceDate:(id)arg2 onlyDuringEvent:(BOOL)arg3 ;
-(NSString *)eventUniqueID;
-(BOOL)isOnlyDuringEvent;
@end

