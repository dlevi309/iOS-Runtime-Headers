/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class NSString, EKCalendarNotification;

@interface CALNSharedCalendarInvitationResponseNotificationInfo : NSObject {

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
-(id)description;
-(NSString *)sourceIdentifier;
-(BOOL)isDelegate;
-(NSString *)sourceClientIdentifier;
-(NSString *)sourceTitle;
-(EKCalendarNotification *)calendarNotification;
-(id)initWithSourceClientIdentifier:(id)arg1 calendarNotification:(id)arg2 isDelegate:(BOOL)arg3 sourceTitle:(id)arg4 sourceIdentifier:(id)arg5 ;
@end

