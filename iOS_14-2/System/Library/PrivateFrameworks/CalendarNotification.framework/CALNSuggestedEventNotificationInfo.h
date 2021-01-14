/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class NSString, NSURL, NSDate, EKCalendarSuggestionNotification;

@interface CALNSuggestedEventNotificationInfo : NSObject {

	NSString* _sourceClientIdentifier;
	NSURL* _launchURL;
	NSDate* _expirationDate;
	EKCalendarSuggestionNotification* _suggestionNotification;

}

@property (nonatomic,copy,readonly) NSString * sourceClientIdentifier;                                 //@synthesize sourceClientIdentifier=_sourceClientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * launchURL;                                                 //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                                           //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) EKCalendarSuggestionNotification * suggestionNotification;              //@synthesize suggestionNotification=_suggestionNotification - In the implementation block
-(NSString *)sourceClientIdentifier;
-(id)description;
-(NSURL *)launchURL;
-(NSDate *)expirationDate;
-(EKCalendarSuggestionNotification *)suggestionNotification;
-(id)initWithSourceClientIdentifier:(id)arg1 launchURL:(id)arg2 expirationDate:(id)arg3 suggestionNotification:(id)arg4 ;
@end

