/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSDate *)expirationDate;
-(NSURL *)launchURL;
-(NSString *)sourceClientIdentifier;
-(EKCalendarSuggestionNotification *)suggestionNotification;
-(id)initWithSourceClientIdentifier:(id)arg1 launchURL:(id)arg2 expirationDate:(id)arg3 suggestionNotification:(id)arg4 ;
@end

