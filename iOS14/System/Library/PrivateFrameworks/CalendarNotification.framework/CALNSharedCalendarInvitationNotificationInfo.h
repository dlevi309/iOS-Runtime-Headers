/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class NSString, EKCalendarNotification;

@interface CALNSharedCalendarInvitationNotificationInfo : NSObject {

	BOOL _isDelegate;
	NSString* _sourceClientIdentifier;
	EKCalendarNotification* _calendarNotification;
	NSString* _sourceTitle;
	NSString* _sourceIdentifier;

}

@property (nonatomic,copy,readonly) NSString * sourceClientIdentifier;                     //@synthesize sourceClientIdentifier=_sourceClientIdentifier - In the implementation block
@property (nonatomic,readonly) EKCalendarNotification * calendarNotification;              //@synthesize calendarNotification=_calendarNotification - In the implementation block
@property (nonatomic,readonly) BOOL isDelegate;                                            //@synthesize isDelegate=_isDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceTitle;                                //@synthesize sourceTitle=_sourceTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceIdentifier;                           //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
-(BOOL)isDelegate;
-(NSString *)sourceClientIdentifier;
-(id)description;
-(NSString *)sourceTitle;
-(NSString *)sourceIdentifier;
-(EKCalendarNotification *)calendarNotification;
-(id)initWithSourceClientIdentifier:(id)arg1 calendarNotification:(id)arg2 isDelegate:(BOOL)arg3 sourceTitle:(id)arg4 sourceIdentifier:(id)arg5 ;
@end

