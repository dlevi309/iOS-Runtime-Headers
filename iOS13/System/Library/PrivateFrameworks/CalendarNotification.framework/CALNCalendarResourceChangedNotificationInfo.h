/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(unsigned)changeType;
-(NSDate *)expirationDate;
-(NSString *)sourceIdentifier;
-(NSURL *)launchURL;
-(BOOL)isDelegate;
-(BOOL)allDay;
-(NSString *)sourceClientIdentifier;
-(NSString *)sourceTitle;
-(EKCalendarResourceChangeNotification *)calendarNotification;
-(id)initWithSourceClientIdentifier:(id)arg1 calendarNotification:(id)arg2 changeType:(unsigned)arg3 date:(id)arg4 allDay:(BOOL)arg5 timeZone:(id)arg6 expirationDate:(id)arg7 launchURL:(id)arg8 isDelegate:(BOOL)arg9 sourceTitle:(id)arg10 sourceIdentifier:(id)arg11 ;
@end

