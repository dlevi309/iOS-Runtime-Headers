/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class NSString, EKCalendarResourceChangeNotification, NSDate, NSTimeZone, NSURL;

@interface CALNCalendarResourceChangedNotificationInfo : NSObject {

	BOOL _allDay;
	BOOL _isDelegate;
	unsigned _changeType;
	NSString* _sourceClientIdentifier;
	EKCalendarResourceChangeNotification* _calendarNotification;
	NSDate* _date;
	NSTimeZone* _timeZone;
	NSDate* _expirationDate;
	NSURL* _launchURL;
	NSString* _sourceTitle;
	NSString* _sourceIdentifier;

}

@property (nonatomic,copy,readonly) NSString * sourceClientIdentifier;                                   //@synthesize sourceClientIdentifier=_sourceClientIdentifier - In the implementation block
@property (nonatomic,readonly) EKCalendarResourceChangeNotification * calendarNotification;              //@synthesize calendarNotification=_calendarNotification - In the implementation block
@property (nonatomic,readonly) unsigned changeType;                                                      //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                                       //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL allDay;                                                              //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,copy,readonly) NSTimeZone * timeZone;                                               //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                                             //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSURL * launchURL;                                                   //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,readonly) BOOL isDelegate;                                                          //@synthesize isDelegate=_isDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceTitle;                                              //@synthesize sourceTitle=_sourceTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceIdentifier;                                         //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
-(NSTimeZone *)timeZone;
-(BOOL)isDelegate;
-(unsigned)changeType;
-(NSString *)sourceClientIdentifier;
-(BOOL)allDay;
-(id)description;
-(NSURL *)launchURL;
-(NSDate *)expirationDate;
-(NSString *)sourceTitle;
-(NSDate *)date;
-(NSString *)sourceIdentifier;
-(EKCalendarResourceChangeNotification *)calendarNotification;
-(id)initWithSourceClientIdentifier:(id)arg1 calendarNotification:(id)arg2 changeType:(unsigned)arg3 date:(id)arg4 allDay:(BOOL)arg5 timeZone:(id)arg6 expirationDate:(id)arg7 launchURL:(id)arg8 isDelegate:(BOOL)arg9 sourceTitle:(id)arg10 sourceIdentifier:(id)arg11 ;
@end

