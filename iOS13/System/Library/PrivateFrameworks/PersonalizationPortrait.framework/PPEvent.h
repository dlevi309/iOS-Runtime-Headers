/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PPCalendar, NSDate, NSURL, NSArray, CLLocation;

@interface PPEvent : NSObject <NSSecureCoding, NSCopying> {

	char _availability;
	unsigned char _eventFlags;
	NSString* _eventIdentifier;
	NSString* _title;
	NSString* _location;
	PPCalendar* _calendar;
	NSDate* _startDate;
	NSDate* _endDate;
	NSURL* _externalURI;
	NSArray* _attendees;
	NSString* _organizerName;
	NSString* _notes;
	NSURL* _url;
	NSString* _structuredLocationTitle;
	NSString* _structuredLocationAddress;
	CLLocation* _structuredLocationCoordinates;

}

@property (nonatomic,readonly) NSString * eventIdentifier;                              //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * location;                                     //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) PPCalendar * calendar;                                   //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                      //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                        //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) char availability;                                       //@synthesize availability=_availability - In the implementation block
@property (nonatomic,readonly) NSURL * externalURI;                                     //@synthesize externalURI=_externalURI - In the implementation block
@property (nonatomic,readonly) NSArray * attendees;                                     //@synthesize attendees=_attendees - In the implementation block
@property (nonatomic,readonly) NSString * organizerName;                                //@synthesize organizerName=_organizerName - In the implementation block
@property (nonatomic,readonly) unsigned char eventFlags;                                //@synthesize eventFlags=_eventFlags - In the implementation block
@property (nonatomic,readonly) NSString * notes;                                        //@synthesize notes=_notes - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                             //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * structuredLocationTitle;                      //@synthesize structuredLocationTitle=_structuredLocationTitle - In the implementation block
@property (nonatomic,readonly) NSString * structuredLocationAddress;                    //@synthesize structuredLocationAddress=_structuredLocationAddress - In the implementation block
@property (nonatomic,readonly) CLLocation * structuredLocationCoordinates;              //@synthesize structuredLocationCoordinates=_structuredLocationCoordinates - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PPCalendar *)calendar;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSURL *)url;
-(NSString *)title;
-(NSString *)location;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(char)availability;
-(NSString *)notes;
-(NSArray *)attendees;
-(NSString *)eventIdentifier;
-(long long)compareStartDateWithEvent:(id)arg1 ;
-(NSURL *)externalURI;
-(id)initWithEKEvent:(id)arg1 ;
-(id)initWithEventIdentifier:(id)arg1 title:(id)arg2 location:(id)arg3 calendar:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 availability:(char)arg7 externalURI:(id)arg8 attendees:(id)arg9 organizerName:(id)arg10 eventFlags:(unsigned char)arg11 notes:(id)arg12 url:(id)arg13 structuredLocationTitle:(id)arg14 structuredLocationAddress:(id)arg15 structuredLocationCoordinates:(id)arg16 ;
-(BOOL)representsUnscheduledFreeTime;
-(BOOL)organizerIsCurrentUser;
-(NSString *)organizerName;
-(unsigned char)eventFlags;
-(NSString *)structuredLocationTitle;
-(NSString *)structuredLocationAddress;
-(CLLocation *)structuredLocationCoordinates;
@end

