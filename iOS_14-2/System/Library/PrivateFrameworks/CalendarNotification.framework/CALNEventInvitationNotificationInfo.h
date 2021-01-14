/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class NSString, NSURL, NSDate, EKConflictDetails, EKCalendarEventInvitationNotification, NSDictionary;

@interface CALNEventInvitationNotificationInfo : NSObject {

	BOOL _isDelegate;
	NSString* _sourceClientIdentifier;
	NSURL* _launchURL;
	NSDate* _expirationDate;
	EKConflictDetails* _conflictDetails;
	EKCalendarEventInvitationNotification* _eventInvitationNotification;
	NSDictionary* _eventRepresentationDictionary;
	NSString* _eventURI;
	NSString* _sourceTitle;
	NSString* _sourceIdentifier;

}

@property (nonatomic,copy,readonly) NSString * sourceClientIdentifier;                                           //@synthesize sourceClientIdentifier=_sourceClientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * launchURL;                                                           //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                                                     //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) EKConflictDetails * conflictDetails;                                              //@synthesize conflictDetails=_conflictDetails - In the implementation block
@property (nonatomic,readonly) EKCalendarEventInvitationNotification * eventInvitationNotification;              //@synthesize eventInvitationNotification=_eventInvitationNotification - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * eventRepresentationDictionary;                                //@synthesize eventRepresentationDictionary=_eventRepresentationDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventURI;                                                         //@synthesize eventURI=_eventURI - In the implementation block
@property (nonatomic,readonly) BOOL isDelegate;                                                                  //@synthesize isDelegate=_isDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceTitle;                                                      //@synthesize sourceTitle=_sourceTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceIdentifier;                                                 //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
-(NSDictionary *)eventRepresentationDictionary;
-(NSString *)eventURI;
-(BOOL)isDelegate;
-(EKCalendarEventInvitationNotification *)eventInvitationNotification;
-(NSString *)sourceClientIdentifier;
-(id)description;
-(NSURL *)launchURL;
-(NSDate *)expirationDate;
-(id)initWithSourceClientIdentifier:(id)arg1 launchURL:(id)arg2 expirationDate:(id)arg3 conflictDetails:(id)arg4 eventInvitationNotification:(id)arg5 eventRepresentationDictionary:(id)arg6 eventURI:(id)arg7 isDelegate:(BOOL)arg8 sourceTitle:(id)arg9 sourceIdentifier:(id)arg10 ;
-(NSString *)sourceTitle;
-(EKConflictDetails *)conflictDetails;
-(NSString *)sourceIdentifier;
@end

