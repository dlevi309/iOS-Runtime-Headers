/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSString, NSDate, RTLocation, NSData;

@interface RTCalendarEvent : NSObject {

	BOOL _allDay;
	NSString* _eventIdentifier;
	NSDate* _startDate;
	NSDate* _endDate;
	unsigned long long _participantStatus;
	long long _availability;
	RTLocation* _location;
	NSString* _locationTitle;
	NSData* _locationMapItemHandle;

}

@property (nonatomic,readonly) NSString * eventIdentifier;                        //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (getter=isAllDay,nonatomic,readonly) BOOL allDay;                       //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                  //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) unsigned long long participantStatus;              //@synthesize participantStatus=_participantStatus - In the implementation block
@property (nonatomic,readonly) long long availability;                            //@synthesize availability=_availability - In the implementation block
@property (nonatomic,readonly) RTLocation * location;                             //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSString * locationTitle;                          //@synthesize locationTitle=_locationTitle - In the implementation block
@property (nonatomic,readonly) NSData * locationMapItemHandle;                    //@synthesize locationMapItemHandle=_locationMapItemHandle - In the implementation block
+(id)participantStatusToString:(unsigned long long)arg1 ;
+(id)eventAvailabilityToString:(long long)arg1 ;
-(NSDate *)endDate;
-(NSString *)eventIdentifier;
-(BOOL)isAllDay;
-(id)init;
-(NSDate *)startDate;
-(RTLocation *)location;
-(id)description;
-(unsigned long long)participantStatus;
-(long long)availability;
-(NSString *)locationTitle;
-(id)initWithEventIdentifier:(id)arg1 allDay:(BOOL)arg2 startDate:(id)arg3 endDate:(id)arg4 participantStatus:(unsigned long long)arg5 availability:(long long)arg6 location:(id)arg7 locationTitle:(id)arg8 locationMapItemHandle:(id)arg9 ;
-(NSData *)locationMapItemHandle;
@end

